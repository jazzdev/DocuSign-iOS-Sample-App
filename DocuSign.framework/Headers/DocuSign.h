//
//  DocuSign.h
//  iOS_Sample
//
//  Created by JD Brennan on 7/1/11.
//  Copyright 2011 DocuSign Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DSCredentialSoapBinding;
@class DSAPIServiceSoapBinding;
@class DSAccountManagementServiceSoapBinding;
@interface DocuSign : NSObject {
    
}

+ (DSCredentialSoapBinding*)DSCredentialSoapBinding:(NSString*)base_url;
+ (DSAPIServiceSoapBinding*)DSAPIServiceSoapBinding:(NSString*)base_url;
+ (DSAccountManagementServiceSoapBinding*)DSAccountManagementServiceSoapBinding:(NSString*)base_url;

+ (NSString*)authXML:(NSString*)email password:(NSString*)password integratorKey:(NSString*)integratorKey;

@end
