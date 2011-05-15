//
//  DocuSignAPI.m
//  DocuSign-iOS-Sample-App
//
//  Created by JD Brennan on 5/14/11.
//  Copyright 2011 DocuSign Inc. All rights reserved.
//

#import "DocuSignAPI.h"

#define INTEGRATOR_ID @"<your integrator key>"

@implementation DocuSignAPI

@synthesize successHandler;
@synthesize errorHandler;
@synthesize delegate;
@synthesize webData;
@synthesize responseStatusCode;
@synthesize elementNamesToParse;
@synthesize parsedElements;
@synthesize parseCharacters;
@synthesize parsedString;

-(void)dealloc
{
	self.delegate = nil;	
	self.webData = nil;
	self.elementNamesToParse = nil;
    self.parsedElements = nil;
    self.parsedString = nil;
    
	[super dealloc];
}

-(void)loginWithEmail:(NSString*)email 
             password:(NSString*)password
             delegate:(id)reqDelegate
              success:(SEL)success
              failure:(SEL)error
{
	NSString *soapMessage = [NSString stringWithFormat:
							 @"<?xml version=\"1.0\" encoding=\"utf-8\"?>"
							 "<soap:Envelope xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\">"
							 "  <soap:Body>"
							 "    <Login xmlns=\"http://www.docusign.net/API/Credential\">"
                             "      <Email><![CDATA[[%@]%@]]></Email>\n"
							 "      <Password><![CDATA[%@]]></Password>\n"
							 "    </Login>"
							 "  </soap:Body>"
							 "</soap:Envelope>",
                             INTEGRATOR_ID,
                             email,
                             password];
	
    NSLog(@"request: %@", soapMessage);
    NSArray* keys = [[NSArray alloc] initWithObjects:@"AccountID", @"AccountName", @"UserID", @"UserName", @"AuthenticationMessage", nil];
    [self sendRequest:@"Credential" // API Group (either "API", "Credential" or "AccountManagement")
               method:@"Login"      // API Method
                 auth:nil
          soapMessage:soapMessage 
                parse:keys
             delegate:reqDelegate
                 done:success
                error:error];
    [keys release];
}

-(void)getFolderList:(NSString*)email
            password:(NSString*)password
           accountID:(NSString*)accountID
            delegate:(id)reqDelegate
             success:(SEL)success
             failure:(SEL)error
{
	NSString *soapMessage = [NSString stringWithFormat:
							 @"<?xml version=\"1.0\" encoding=\"utf-8\"?>"
							 "<soap:Envelope xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\">"
							 "  <soap:Body>"
							 "    <GetFolderList xmlns=\"http://www.docusign.net/API/3.0\">"
                             "      <FoldersFilter>"
                             "        <AccountId>%@</AccountId>"
                             "        <IncludeHierarchy>true</IncludeHierarchy>"
                             "      </FoldersFilter>"
                             "    </GetFolderList>"
							 "  </soap:Body>"
							 "</soap:Envelope>",
                             accountID];
	
    NSLog(@"request: %@", soapMessage);
    NSArray* keys = [[NSArray alloc] initWithObjects:@"FolderName", nil];
    [self sendRequest:@"API" // API Group (either "API", "Credential" or "AccountManagement")
               method:@"GetFolderList"
                 auth:[self authHeader:email password:password]
          soapMessage:soapMessage 
                parse:keys
             delegate:reqDelegate
                 done:success
                error:error];
    [keys release];    
}

-(NSString *)authHeader:(NSString*)email password:(NSString*)password
{	
    return [NSString stringWithFormat:@"<DocuSignCredentials>"
                                        "<Username>%@</Username>"
                                        "<Password>%@</Password>"
                                        "<IntegratorKey>%@</IntegratorKey>"
                                        "</DocuSignCredentials>",
                                        email,
                                        password,
                                        INTEGRATOR_ID];
}

-(void)sendRequest:(NSString*)apiGroup
            method:(NSString*)apiMethod 
              auth:(NSString*)authHeader
       soapMessage:(NSString*)soapMessage 
             parse:(NSArray*)names
          delegate:(id)reqDelegate
              done:(SEL)success
             error:(SEL)error
{
    NSString* filename = apiGroup;
    if ([apiGroup isEqualToString:@"API"]) filename = [NSString stringWithFormat:@"ds%@", apiGroup];
    NSString* soapEndpoint = [NSString stringWithFormat:@"https://www.docusign.net/api/3.0/%@.asmx", filename];
	NSMutableURLRequest *theRequest = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:soapEndpoint]];
	
	[theRequest setHTTPMethod:@"POST"];
	[theRequest addValue: @"text/xml; charset=utf-8" forHTTPHeaderField:@"Content-Type"];
    if ([apiGroup isEqualToString:@"API"]) apiGroup = @"3.0";
    NSString* soapAction = [NSString stringWithFormat:@"http://www.docusign.net/API/%@/%@", apiGroup, apiMethod];
    NSLog(@"Action: %@",soapAction);
	[theRequest addValue: soapAction forHTTPHeaderField:@"SOAPAction"];
    
    if (authHeader != nil) [theRequest addValue:authHeader forHTTPHeaderField:@"X-DocuSign-Authentication"];
		
    [theRequest setHTTPBody: [soapMessage dataUsingEncoding:NSUTF8StringEncoding]];
    NSString *msgLength = [NSString stringWithFormat:@"%d", theRequest.HTTPBody.length];
    [theRequest addValue:msgLength forHTTPHeaderField:@"Content-Length"];
    
    self.delegate = reqDelegate;
    self.successHandler = success;
    self.errorHandler = error;
    self.elementNamesToParse = names;
    self.webData = [NSMutableData data];
	NSURLConnection *theConnection = [[NSURLConnection alloc] initWithRequest:theRequest delegate:self];
	NSLog(@"Connection: %@",theConnection);
    
	if (!theConnection)
    {
		[reqDelegate performSelector:error
                          withObject:apiMethod
                          withObject:@"Failed to create a connection to server."];
	}
}	

#pragma mark NSURLConnection methods

-(void)connection:(NSURLConnection *)connection didReceiveResponse:(NSURLResponse *)response
{
    NSLog(@"response: %d %@", self.responseStatusCode, [NSHTTPURLResponse localizedStringForStatusCode:self.responseStatusCode]);
    // Set up elements to parse
    NSArray* commonElementNames = [[NSArray alloc] initWithObjects:@"ErrorCode", @"ErrorReason", @"faultstring", nil];
    if (self.elementNamesToParse == nil)
    {
        self.elementNamesToParse = commonElementNames;
    }
    else
    {
        NSMutableArray* names = [[NSMutableArray alloc] 
                                 initWithCapacity:(self.elementNamesToParse.count 
                                                   + commonElementNames.count)];
        [names addObjectsFromArray:self.elementNamesToParse];
        [names addObjectsFromArray:commonElementNames];
        self.elementNamesToParse = names;
        [names release];
    }
    [commonElementNames release];
	[self.webData setLength: 0];
	NSHTTPURLResponse* resp = (NSHTTPURLResponse*)response;
    self.responseStatusCode = [resp statusCode];
    // Don't abort here if the status code indicates an error.  There might be 
    // a soap fault with an ErrorReason or faultstring tag that can be parsed 
    // from the response.
}

-(void)connection:(NSURLConnection *)connection didReceiveData:(NSData *)data
{
	NSString *str = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
	NSLog(@"data: %@", str);
	[str release];
	[self.webData appendData:data];
}

-(void)connection:(NSURLConnection *)connection didFailWithError:(NSError *)error
{
    NSLog(@"fail: %@",[error localizedDescription]);
	[connection release];
	[self.delegate performSelector:self.errorHandler
						withObject:self
						withObject:[error localizedDescription]];
}

-(void)connectionDidFinishLoading:(NSURLConnection *)connection
{
    self.parsedElements = [[NSMutableDictionary alloc] initWithCapacity:[self.elementNamesToParse count]];
    [self.parsedElements release];
    self.parseCharacters = NO;
    
	NSXMLParser* xmlParser = [[NSXMLParser alloc] initWithData:self.webData];
    [xmlParser setDelegate: self];
	[xmlParser setShouldResolveExternalEntities: YES];
	if ([xmlParser parse])
    {
        NSLog(@"Parsed response: %@", self.parsedElements);
        if (self.responseStatusCode > 299)
        {
            NSString* errorReason = [self.parsedElements objectForKey:@"ErrorReason"];
            if (errorReason == nil)
            {
                errorReason = [self.parsedElements objectForKey:@"faultstring"];
            }
            if (errorReason == nil)
            {
                errorReason = [NSHTTPURLResponse localizedStringForStatusCode:self.responseStatusCode];
            }
            [self.delegate performSelector:self.errorHandler
                                withObject:self
                                withObject:errorReason];
        }
        else // We got 200 OK, but there might still be an error code
        {
            NSString* errorCode = [self.parsedElements objectForKey:@"ErrorCode"];
            if (errorCode && ![errorCode isEqualToString:@"Success"])
            {
                [self.delegate performSelector:self.errorHandler
                                    withObject:self
                                    withObject:errorCode];
            }
            else // Everything really is OK!
            {
                [self.delegate performSelector:self.successHandler
                                    withObject:self.parsedElements];
            }
        }
    }
    else
    {
        NSString *str = [[NSString alloc] initWithData:webData encoding:NSUTF8StringEncoding];
        NSLog(@"Parse error: %@\n  parsing:\n%@", [[xmlParser parserError] localizedDescription], str);
        [str release];
        [self.delegate performSelector:self.errorHandler
                            withObject:self
                            withObject:[[xmlParser parserError] localizedDescription]];
    }
    self.webData = nil;
    [xmlParser release];
	[connection release];
}

#pragma mark XMLParser methods

-(void)parser:(NSXMLParser *)parser didStartElement:(NSString *)elementName namespaceURI:(NSString *) namespaceURI qualifiedName:(NSString *)qName
   attributes: (NSDictionary *)attributeDict
{
    if ([elementNamesToParse containsObject:elementName])
    {
        self.parseCharacters = YES;
        self.parsedString = @"";
    }
}

-(void)parser:(NSXMLParser *)parser foundCharacters:(NSString *)string
{
    if (self.parseCharacters) 
    {
        self.parsedString = [self.parsedString stringByAppendingString:string];
    }
}

-(void)parser:(NSXMLParser *)parser didEndElement:(NSString *)elementName namespaceURI:(NSString *)namespaceURI qualifiedName:(NSString *)qName
{
    if ([elementNamesToParse containsObject:elementName])
    {
        [self.parsedElements setObject:self.parsedString forKey:elementName];
    }
    self.parseCharacters = NO;
}

@end
