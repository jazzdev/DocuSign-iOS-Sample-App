//
//  DocuSign_iOS_Sample_AppTests.m
//  DocuSign-iOS-Sample-AppTests
//
//  Created by JD Brennan on 5/14/11.
//  Copyright 2011 DocuSign Inc. All rights reserved.
//

// The DocuSign WSDL API requires libxml2. Under the Build Settings tab:
// 
// 1. In the Linking section add -lxml2 to Other Linker Flags property
// 2. In the LLVM GCC Language section add -I/usr/include/libxml2 to the Other C Flags property

#define BASE_URL @"https://demo.docusign.net/"
#define EMAIL @"<your email>"
#define PASSWORD @"<your password"
#define INTEGRATOR_ID @"<your integrator key>"

#import "objc/runtime.h"
#import "DocuSign_iOS_Sample_AppTests.h"
#import <DocuSign/DocuSign.h>
#import <DocuSign/DSCredential.h>
#import <DocuSign/DSAPIService.h>

@implementation DocuSign_iOS_Sample_AppTests

- (void)setUp
{
    [super setUp];
    
    // Set-up code here.
}

- (void)tearDown
{
    // Tear-down code here.
    
    [super tearDown];
}

- (void)testAPI
{
    DSCredentialSoapBinding* binding = [DocuSign DSCredentialSoapBinding:BASE_URL];
    binding.logXMLInOut = YES;
    DSCredential_Login* request = [[[DSCredential_Login alloc] init] autorelease];
    request.Email = EMAIL;
    request.Password = PASSWORD;
    
    USSoapResponse* response = [binding LoginUsingParameters:request];
    
    for (id bodyPart in response.bodyParts) {
        NSLog(@"part is %s",class_getName([bodyPart class]));
        if ([bodyPart isKindOfClass:[SOAPFault class]]) { 
            [self soapError:request fault:(SOAPFault*)bodyPart];
        }
        
        if ([bodyPart isKindOfClass:[DSCredential_LoginResponse class]]) {
            NSLog(@"Reading LoginResponse");
            DSCredential_LoginResult* result = ((DSCredential_LoginResponse*)bodyPart).LoginResult;
            NSLog(@"Success %d",result.Success.boolValue);
            if (!result.Success.boolValue) {
                NSLog(@"Login failed. Error: %@: %@", 
                      DSCredential_ErrorCode_stringFromEnum(result.ErrorCode), 
                      result.AuthenticationMessage);
                break;
            }
            for (DSCredential_Account* account in result.Accounts.Account) {
                NSLog(@"Got accountID: %@", account.AccountID);
                [self getFolders:[account.AccountID retain]];
            }
        }
    }
}

- (void)getFolders:(NSString*)accountID
{
    DSAPIServiceSoapBinding* binding = [DocuSign DSAPIServiceSoapBinding:BASE_URL];
    binding.logXMLInOut = YES;
    [binding.customHeaders setValue:[DocuSign authXML:EMAIL password:PASSWORD integratorKey:INTEGRATOR_ID] 
                             forKey:@"X-DocuSign-Authentication"];
    
    DSAPIService_GetFolderList* request = [[[DSAPIService_GetFolderList alloc] init] autorelease];    
    DSAPIService_FoldersFilter* foldersFilter = [[[DSAPIService_FoldersFilter alloc] init] autorelease];
    foldersFilter.AccountId = accountID;
    foldersFilter.IncludeHierarchy = [[[USBoolean alloc] initWithBool:YES] autorelease];
    request.FoldersFilter = foldersFilter;
    
    USSoapResponse* response = [binding GetFolderListUsingParameters:request];
    for (id bodyPart in response.bodyParts) {
        NSLog(@"part is %s",class_getName([bodyPart class]));
        if ([bodyPart isKindOfClass:[SOAPFault class]]) { 
            [self soapError:request fault:(SOAPFault*)bodyPart];
        }
        
        if ([bodyPart isKindOfClass:[DSAPIService_GetFolderListResponse class]]) {
            NSLog(@"Listing folders:");
            DSAPIService_AvailableFolders* result = ((DSAPIService_GetFolderListResponse*)bodyPart).GetFolderListResult;
            for (DSAPIService_Folder* folder in result.Folders.Folder) {
                NSLog(@"Folder name: %@", folder.FolderTypeInfo.FolderName);
            }
        }
    }
}


-(void)soapError:(id)request fault:(SOAPFault*)fault
{
    STFail(@"%s soap call failed:\n\n ************\n%@\n ************\n", 
           class_getName([request class]), fault.faultstring);
}

@end
