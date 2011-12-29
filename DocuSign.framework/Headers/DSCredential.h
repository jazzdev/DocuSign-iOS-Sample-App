#import <Foundation/Foundation.h>
#import "USAdditions.h"
#import <libxml/tree.h>
#import "USGlobals.h"
#import <objc/runtime.h>
@class DSCredential_Ping;
@class DSCredential_PingResponse;
@class DSCredential_Login;
@class DSCredential_LoginResponse;
@class DSCredential_LoginResult;
@class DSCredential_ArrayOfAccount;
@class DSCredential_Account;
@class DSCredential_GetAuthenticationToken;
@class DSCredential_GetAuthenticationTokenResponse;
@class DSCredential_RequestSenderToken;
@class DSCredential_RequestSenderTokenResponse;
@class DSCredential_RequestCorrectToken;
@class DSCredential_RequestCorrectTokenResponse;
@interface DSCredential_Ping : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSCredential_Ping *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSCredential_PingResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * PingResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSCredential_PingResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * PingResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSCredential_Login : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * Email;
	NSString * Password;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSCredential_Login *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * Email;
@property (nonatomic, retain) NSString * Password;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSCredential_ErrorCode_none = 0,
	DSCredential_ErrorCode_User_Does_Not_Exist_In_System,
	DSCredential_ErrorCode_Account_Lacks_Permissions,
	DSCredential_ErrorCode_User_Lacks_Permissions,
	DSCredential_ErrorCode_User_Authentication_Failed,
	DSCredential_ErrorCode_Unspecified_Error,
	DSCredential_ErrorCode_Success,
} DSCredential_ErrorCode;
DSCredential_ErrorCode DSCredential_ErrorCode_enumFromString(NSString *string);
NSString * DSCredential_ErrorCode_stringFromEnum(DSCredential_ErrorCode enumValue);
@interface DSCredential_Account : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountID;
	NSString * AccountName;
	NSString * UserID;
	NSString * UserName;
	NSString * Email;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSCredential_Account *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountID;
@property (nonatomic, retain) NSString * AccountName;
@property (nonatomic, retain) NSString * UserID;
@property (nonatomic, retain) NSString * UserName;
@property (nonatomic, retain) NSString * Email;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSCredential_ArrayOfAccount : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *Account;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSCredential_ArrayOfAccount *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addAccount:(DSCredential_Account *)toAdd;
@property (nonatomic, readonly) NSMutableArray * Account;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSCredential_LoginResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * Success;
	DSCredential_ErrorCode ErrorCode;
	NSString * AuthenticationMessage;
	DSCredential_ArrayOfAccount * Accounts;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSCredential_LoginResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, assign) DSCredential_ErrorCode ErrorCode;
@property (nonatomic, retain) NSString * AuthenticationMessage;
@property (nonatomic, retain) DSCredential_ArrayOfAccount * Accounts;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSCredential_LoginResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSCredential_LoginResult * LoginResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSCredential_LoginResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSCredential_LoginResult * LoginResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSCredential_GetAuthenticationToken : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * Email;
	NSString * Password;
	NSString * AccountID;
	NSString * GoToEnvelopeID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSCredential_GetAuthenticationToken *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * Email;
@property (nonatomic, retain) NSString * Password;
@property (nonatomic, retain) NSString * AccountID;
@property (nonatomic, retain) NSString * GoToEnvelopeID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSCredential_GetAuthenticationTokenResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * GetAuthenticationTokenResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSCredential_GetAuthenticationTokenResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * GetAuthenticationTokenResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSCredential_RequestSenderToken : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * Email;
	NSString * Password;
	NSString * AccountID;
	NSString * EnvelopeID;
	NSString * ReturnURL;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSCredential_RequestSenderToken *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * Email;
@property (nonatomic, retain) NSString * Password;
@property (nonatomic, retain) NSString * AccountID;
@property (nonatomic, retain) NSString * EnvelopeID;
@property (nonatomic, retain) NSString * ReturnURL;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSCredential_RequestSenderTokenResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * RequestSenderTokenResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSCredential_RequestSenderTokenResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * RequestSenderTokenResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSCredential_RequestCorrectToken : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * Email;
	NSString * Password;
	NSString * EnvelopeID;
	USBoolean * SuppressNavigation;
	NSString * ReturnURL;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSCredential_RequestCorrectToken *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * Email;
@property (nonatomic, retain) NSString * Password;
@property (nonatomic, retain) NSString * EnvelopeID;
@property (nonatomic, retain) USBoolean * SuppressNavigation;
@property (nonatomic, retain) NSString * ReturnURL;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSCredential_RequestCorrectTokenResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * RequestCorrectTokenResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSCredential_RequestCorrectTokenResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * RequestCorrectTokenResult;
/* attributes */
- (NSDictionary *)attributes;
@end
/* Cookies handling provided by http://en.wikibooks.org/wiki/Programming:WebObjects/Web_Services/Web_Service_Provider */
#import <UIKit/UIKit.h>
#import <libxml/parser.h>
#import "xsd.h"
#import "DSCredential.h"
@class DSCredentialSoapBinding;
@class DSCredentialSoap12Binding;
@interface DSCredential : NSObject {
	
}
+ (DSCredentialSoapBinding *)DSCredentialSoapBinding;
+ (DSCredentialSoap12Binding *)DSCredentialSoap12Binding;
@end
@class USSoapResponse;
@class USSoapOperation;
@interface DSCredentialSoapBinding : USSoapBinding {
}
- (USSoapResponse *)PingUsingParameters:(DSCredential_Ping *)aParameters ;
- (USSoapOperation *)PingAsyncUsingParameters:(DSCredential_Ping *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)LoginUsingParameters:(DSCredential_Login *)aParameters ;
- (USSoapOperation *)LoginAsyncUsingParameters:(DSCredential_Login *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetAuthenticationTokenUsingParameters:(DSCredential_GetAuthenticationToken *)aParameters ;
- (USSoapOperation *)GetAuthenticationTokenAsyncUsingParameters:(DSCredential_GetAuthenticationToken *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestSenderTokenUsingParameters:(DSCredential_RequestSenderToken *)aParameters ;
- (USSoapOperation *)RequestSenderTokenAsyncUsingParameters:(DSCredential_RequestSenderToken *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestCorrectTokenUsingParameters:(DSCredential_RequestCorrectToken *)aParameters ;
- (USSoapOperation *)RequestCorrectTokenAsyncUsingParameters:(DSCredential_RequestCorrectToken *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
@end
@interface DSCredentialSoapBinding_Ping : USSoapOperation {
	DSCredential_Ping * parameters;
}
@property (nonatomic, retain) DSCredential_Ping * parameters;
- (id)initWithBinding:(DSCredentialSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSCredential_Ping *)aParameters
;
@end
@interface DSCredentialSoapBinding_Login : USSoapOperation {
	DSCredential_Login * parameters;
}
@property (nonatomic, retain) DSCredential_Login * parameters;
- (id)initWithBinding:(DSCredentialSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSCredential_Login *)aParameters
;
@end
@interface DSCredentialSoapBinding_GetAuthenticationToken : USSoapOperation {
	DSCredential_GetAuthenticationToken * parameters;
}
@property (nonatomic, retain) DSCredential_GetAuthenticationToken * parameters;
- (id)initWithBinding:(DSCredentialSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSCredential_GetAuthenticationToken *)aParameters
;
@end
@interface DSCredentialSoapBinding_RequestSenderToken : USSoapOperation {
	DSCredential_RequestSenderToken * parameters;
}
@property (nonatomic, retain) DSCredential_RequestSenderToken * parameters;
- (id)initWithBinding:(DSCredentialSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSCredential_RequestSenderToken *)aParameters
;
@end
@interface DSCredentialSoapBinding_RequestCorrectToken : USSoapOperation {
	DSCredential_RequestCorrectToken * parameters;
}
@property (nonatomic, retain) DSCredential_RequestCorrectToken * parameters;
- (id)initWithBinding:(DSCredentialSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSCredential_RequestCorrectToken *)aParameters
;
@end
@interface DSCredentialSoapBinding_envelope : NSObject {
}
+ (DSCredentialSoapBinding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements bodyKeys:(NSArray *)bodyKeys;
@end
@class USSoapResponse;
@class USSoapOperation;
@interface DSCredentialSoap12Binding : USSoapBinding {
}
- (USSoapResponse *)PingUsingParameters:(DSCredential_Ping *)aParameters ;
- (USSoapOperation *)PingAsyncUsingParameters:(DSCredential_Ping *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)LoginUsingParameters:(DSCredential_Login *)aParameters ;
- (USSoapOperation *)LoginAsyncUsingParameters:(DSCredential_Login *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetAuthenticationTokenUsingParameters:(DSCredential_GetAuthenticationToken *)aParameters ;
- (USSoapOperation *)GetAuthenticationTokenAsyncUsingParameters:(DSCredential_GetAuthenticationToken *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestSenderTokenUsingParameters:(DSCredential_RequestSenderToken *)aParameters ;
- (USSoapOperation *)RequestSenderTokenAsyncUsingParameters:(DSCredential_RequestSenderToken *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestCorrectTokenUsingParameters:(DSCredential_RequestCorrectToken *)aParameters ;
- (USSoapOperation *)RequestCorrectTokenAsyncUsingParameters:(DSCredential_RequestCorrectToken *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
@end
@interface DSCredentialSoap12Binding_Ping : USSoapOperation {
	DSCredential_Ping * parameters;
}
@property (nonatomic, retain) DSCredential_Ping * parameters;
- (id)initWithBinding:(DSCredentialSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSCredential_Ping *)aParameters
;
@end
@interface DSCredentialSoap12Binding_Login : USSoapOperation {
	DSCredential_Login * parameters;
}
@property (nonatomic, retain) DSCredential_Login * parameters;
- (id)initWithBinding:(DSCredentialSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSCredential_Login *)aParameters
;
@end
@interface DSCredentialSoap12Binding_GetAuthenticationToken : USSoapOperation {
	DSCredential_GetAuthenticationToken * parameters;
}
@property (nonatomic, retain) DSCredential_GetAuthenticationToken * parameters;
- (id)initWithBinding:(DSCredentialSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSCredential_GetAuthenticationToken *)aParameters
;
@end
@interface DSCredentialSoap12Binding_RequestSenderToken : USSoapOperation {
	DSCredential_RequestSenderToken * parameters;
}
@property (nonatomic, retain) DSCredential_RequestSenderToken * parameters;
- (id)initWithBinding:(DSCredentialSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSCredential_RequestSenderToken *)aParameters
;
@end
@interface DSCredentialSoap12Binding_RequestCorrectToken : USSoapOperation {
	DSCredential_RequestCorrectToken * parameters;
}
@property (nonatomic, retain) DSCredential_RequestCorrectToken * parameters;
- (id)initWithBinding:(DSCredentialSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSCredential_RequestCorrectToken *)aParameters
;
@end
@interface DSCredentialSoap12Binding_envelope : NSObject {
}
+ (DSCredentialSoap12Binding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements bodyKeys:(NSArray *)bodyKeys;
@end
