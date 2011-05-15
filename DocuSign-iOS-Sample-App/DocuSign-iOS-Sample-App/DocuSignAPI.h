//
//  DocuSignAPI.h
//  DocuSign-iOS-Sample-App
//
//  Created by JD Brennan on 5/14/11.
//  Copyright 2011 DocuSign Inc. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface DocuSignAPI : NSObject<NSXMLParserDelegate> {
	SEL successHandler;
	SEL errorHandler;
	id delegate;
	NSMutableData *webData;
    NSInteger responseStatusCode;
    NSArray* elementNamesToParse;
    NSMutableDictionary* parsedElements;
    BOOL parseCharacters;
    NSString* parsedString;
}

@property (assign) SEL successHandler;
@property (assign) SEL errorHandler;
@property (retain) id delegate;
@property (retain) NSMutableData *webData;
@property (assign) NSInteger responseStatusCode;
@property(retain) NSArray* elementNamesToParse;
@property(retain) NSMutableDictionary* parsedElements;
@property(assign) BOOL parseCharacters;
@property(retain) NSString* parsedString;

-(void)loginWithEmail:(NSString*)email 
             password:(NSString*)password
             delegate:(id)reqDelegate
              success:(SEL)successHandler
              failure:(SEL)errorHandler;

-(void)getFolderList:(NSString*)email
            password:(NSString*)password
           accountID:(NSString*)accountID
            delegate:(id)reqDelegate
             success:(SEL)success
             failure:(SEL)error;

-(NSString*)authHeader:(NSString*)email
              password:(NSString*)password;

-(void)sendRequest:(NSString*)apiGroup
            method:(NSString*)apiMethod 
              auth:(NSString*)authHeader
       soapMessage:(NSString*)soapMessage 
             parse:(NSArray*)names
          delegate:(id)delegate
              done:(SEL)successHandler
             error:(SEL)errorHandler;

@end
