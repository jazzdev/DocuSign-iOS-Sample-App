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
@class DSCredentialSoapBindingResponse;
@class DSCredentialSoapBindingOperation;
@protocol DSCredentialSoapBindingResponseDelegate <NSObject>
- (void) operation:(DSCredentialSoapBindingOperation *)operation completedWithResponse:(DSCredentialSoapBindingResponse *)response;
@end
#define kServerAnchorCertificates   @"kServerAnchorCertificates"
#define kServerAnchorsOnly          @"kServerAnchorsOnly"
#define kClientIdentity             @"kClientIdentity"
#define kClientCertificates         @"kClientCertificates"
#define kClientUsername             @"kClientUsername"
#define kClientPassword             @"kClientPassword"
#define kNSURLCredentialPersistence @"kNSURLCredentialPersistence"
#define kValidateResult             @"kValidateResult"
@interface DSCredentialSoapBinding : NSObject <DSCredentialSoapBindingResponseDelegate> {
	NSURL *address;
	NSTimeInterval timeout;
	NSMutableArray *cookies;
	NSMutableDictionary *customHeaders;
	BOOL logXMLInOut;
	BOOL ignoreEmptyResponse;
	BOOL synchronousOperationComplete;
	NSDictionary *authenticationProperties;
	SOAPSigner *soapSigner;
}
@property (nonatomic, copy) NSURL *address;
@property (nonatomic) BOOL logXMLInOut;
@property (nonatomic) BOOL ignoreEmptyResponse;
@property (nonatomic) NSTimeInterval timeout;
@property (nonatomic, retain) NSMutableArray *cookies;
@property (nonatomic, retain) NSMutableDictionary *customHeaders;
@property (nonatomic, copy) NSDictionary *authenticationProperties;
@property (nonatomic, retain) SOAPSigner *soapSigner;
+ (NSTimeInterval) defaultTimeout;
- (id)initWithAddress:(NSString *)anAddress;
- (void)sendHTTPCallUsingBody:(NSString *)body soapAction:(NSString *)soapAction forOperation:(DSCredentialSoapBindingOperation *)operation;
- (void)addCookie:(NSHTTPCookie *)toAdd;
- (NSString *)MIMEType;
- (DSCredentialSoapBindingResponse *)PingUsingParameters:(DSCredential_Ping *)aParameters ;
- (void)PingAsyncUsingParameters:(DSCredential_Ping *)aParameters  delegate:(id<DSCredentialSoapBindingResponseDelegate>)responseDelegate;
- (DSCredentialSoapBindingResponse *)LoginUsingParameters:(DSCredential_Login *)aParameters ;
- (void)LoginAsyncUsingParameters:(DSCredential_Login *)aParameters  delegate:(id<DSCredentialSoapBindingResponseDelegate>)responseDelegate;
- (DSCredentialSoapBindingResponse *)GetAuthenticationTokenUsingParameters:(DSCredential_GetAuthenticationToken *)aParameters ;
- (void)GetAuthenticationTokenAsyncUsingParameters:(DSCredential_GetAuthenticationToken *)aParameters  delegate:(id<DSCredentialSoapBindingResponseDelegate>)responseDelegate;
- (DSCredentialSoapBindingResponse *)RequestSenderTokenUsingParameters:(DSCredential_RequestSenderToken *)aParameters ;
- (void)RequestSenderTokenAsyncUsingParameters:(DSCredential_RequestSenderToken *)aParameters  delegate:(id<DSCredentialSoapBindingResponseDelegate>)responseDelegate;
- (DSCredentialSoapBindingResponse *)RequestCorrectTokenUsingParameters:(DSCredential_RequestCorrectToken *)aParameters ;
- (void)RequestCorrectTokenAsyncUsingParameters:(DSCredential_RequestCorrectToken *)aParameters  delegate:(id<DSCredentialSoapBindingResponseDelegate>)responseDelegate;
@end
@interface DSCredentialSoapBindingOperation : NSOperation {
	DSCredentialSoapBinding *binding;
	DSCredentialSoapBindingResponse *response;
	id<DSCredentialSoapBindingResponseDelegate> delegate;
	NSMutableData *responseData;
	NSURLConnection *urlConnection;
}
@property (nonatomic, retain) DSCredentialSoapBinding *binding;
@property (nonatomic, readonly) DSCredentialSoapBindingResponse *response;
@property (nonatomic, assign) id<DSCredentialSoapBindingResponseDelegate> delegate;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURLConnection *urlConnection;
- (id)initWithBinding:(DSCredentialSoapBinding *)aBinding delegate:(id<DSCredentialSoapBindingResponseDelegate>)aDelegate;
@end
@interface DSCredentialSoapBinding_Ping : DSCredentialSoapBindingOperation {
	DSCredential_Ping * parameters;
}
@property (nonatomic, retain) DSCredential_Ping * parameters;
- (id)initWithBinding:(DSCredentialSoapBinding *)aBinding delegate:(id<DSCredentialSoapBindingResponseDelegate>)aDelegate
	parameters:(DSCredential_Ping *)aParameters
;
@end
@interface DSCredentialSoapBinding_Login : DSCredentialSoapBindingOperation {
	DSCredential_Login * parameters;
}
@property (nonatomic, retain) DSCredential_Login * parameters;
- (id)initWithBinding:(DSCredentialSoapBinding *)aBinding delegate:(id<DSCredentialSoapBindingResponseDelegate>)aDelegate
	parameters:(DSCredential_Login *)aParameters
;
@end
@interface DSCredentialSoapBinding_GetAuthenticationToken : DSCredentialSoapBindingOperation {
	DSCredential_GetAuthenticationToken * parameters;
}
@property (nonatomic, retain) DSCredential_GetAuthenticationToken * parameters;
- (id)initWithBinding:(DSCredentialSoapBinding *)aBinding delegate:(id<DSCredentialSoapBindingResponseDelegate>)aDelegate
	parameters:(DSCredential_GetAuthenticationToken *)aParameters
;
@end
@interface DSCredentialSoapBinding_RequestSenderToken : DSCredentialSoapBindingOperation {
	DSCredential_RequestSenderToken * parameters;
}
@property (nonatomic, retain) DSCredential_RequestSenderToken * parameters;
- (id)initWithBinding:(DSCredentialSoapBinding *)aBinding delegate:(id<DSCredentialSoapBindingResponseDelegate>)aDelegate
	parameters:(DSCredential_RequestSenderToken *)aParameters
;
@end
@interface DSCredentialSoapBinding_RequestCorrectToken : DSCredentialSoapBindingOperation {
	DSCredential_RequestCorrectToken * parameters;
}
@property (nonatomic, retain) DSCredential_RequestCorrectToken * parameters;
- (id)initWithBinding:(DSCredentialSoapBinding *)aBinding delegate:(id<DSCredentialSoapBindingResponseDelegate>)aDelegate
	parameters:(DSCredential_RequestCorrectToken *)aParameters
;
@end
@interface DSCredentialSoapBinding_envelope : NSObject {
}
+ (DSCredentialSoapBinding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements bodyKeys:(NSArray *)bodyKeys;
@end
@interface DSCredentialSoapBindingResponse : NSObject {
	NSArray *headers;
	NSArray *bodyParts;
	NSError *error;
}
@property (nonatomic, retain) NSArray *headers;
@property (nonatomic, retain) NSArray *bodyParts;
@property (nonatomic, retain) NSError *error;
@end
@class DSCredentialSoap12BindingResponse;
@class DSCredentialSoap12BindingOperation;
@protocol DSCredentialSoap12BindingResponseDelegate <NSObject>
- (void) operation:(DSCredentialSoap12BindingOperation *)operation completedWithResponse:(DSCredentialSoap12BindingResponse *)response;
@end
#define kServerAnchorCertificates   @"kServerAnchorCertificates"
#define kServerAnchorsOnly          @"kServerAnchorsOnly"
#define kClientIdentity             @"kClientIdentity"
#define kClientCertificates         @"kClientCertificates"
#define kClientUsername             @"kClientUsername"
#define kClientPassword             @"kClientPassword"
#define kNSURLCredentialPersistence @"kNSURLCredentialPersistence"
#define kValidateResult             @"kValidateResult"
@interface DSCredentialSoap12Binding : NSObject <DSCredentialSoap12BindingResponseDelegate> {
	NSURL *address;
	NSTimeInterval timeout;
	NSMutableArray *cookies;
	NSMutableDictionary *customHeaders;
	BOOL logXMLInOut;
	BOOL ignoreEmptyResponse;
	BOOL synchronousOperationComplete;
	NSDictionary *authenticationProperties;
	SOAPSigner *soapSigner;
}
@property (nonatomic, copy) NSURL *address;
@property (nonatomic) BOOL logXMLInOut;
@property (nonatomic) BOOL ignoreEmptyResponse;
@property (nonatomic) NSTimeInterval timeout;
@property (nonatomic, retain) NSMutableArray *cookies;
@property (nonatomic, retain) NSMutableDictionary *customHeaders;
@property (nonatomic, copy) NSDictionary *authenticationProperties;
@property (nonatomic, retain) SOAPSigner *soapSigner;
+ (NSTimeInterval) defaultTimeout;
- (id)initWithAddress:(NSString *)anAddress;
- (void)sendHTTPCallUsingBody:(NSString *)body soapAction:(NSString *)soapAction forOperation:(DSCredentialSoap12BindingOperation *)operation;
- (void)addCookie:(NSHTTPCookie *)toAdd;
- (NSString *)MIMEType;
- (DSCredentialSoap12BindingResponse *)PingUsingParameters:(DSCredential_Ping *)aParameters ;
- (void)PingAsyncUsingParameters:(DSCredential_Ping *)aParameters  delegate:(id<DSCredentialSoap12BindingResponseDelegate>)responseDelegate;
- (DSCredentialSoap12BindingResponse *)LoginUsingParameters:(DSCredential_Login *)aParameters ;
- (void)LoginAsyncUsingParameters:(DSCredential_Login *)aParameters  delegate:(id<DSCredentialSoap12BindingResponseDelegate>)responseDelegate;
- (DSCredentialSoap12BindingResponse *)GetAuthenticationTokenUsingParameters:(DSCredential_GetAuthenticationToken *)aParameters ;
- (void)GetAuthenticationTokenAsyncUsingParameters:(DSCredential_GetAuthenticationToken *)aParameters  delegate:(id<DSCredentialSoap12BindingResponseDelegate>)responseDelegate;
- (DSCredentialSoap12BindingResponse *)RequestSenderTokenUsingParameters:(DSCredential_RequestSenderToken *)aParameters ;
- (void)RequestSenderTokenAsyncUsingParameters:(DSCredential_RequestSenderToken *)aParameters  delegate:(id<DSCredentialSoap12BindingResponseDelegate>)responseDelegate;
- (DSCredentialSoap12BindingResponse *)RequestCorrectTokenUsingParameters:(DSCredential_RequestCorrectToken *)aParameters ;
- (void)RequestCorrectTokenAsyncUsingParameters:(DSCredential_RequestCorrectToken *)aParameters  delegate:(id<DSCredentialSoap12BindingResponseDelegate>)responseDelegate;
@end
@interface DSCredentialSoap12BindingOperation : NSOperation {
	DSCredentialSoap12Binding *binding;
	DSCredentialSoap12BindingResponse *response;
	id<DSCredentialSoap12BindingResponseDelegate> delegate;
	NSMutableData *responseData;
	NSURLConnection *urlConnection;
}
@property (nonatomic, retain) DSCredentialSoap12Binding *binding;
@property (nonatomic, readonly) DSCredentialSoap12BindingResponse *response;
@property (nonatomic, assign) id<DSCredentialSoap12BindingResponseDelegate> delegate;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURLConnection *urlConnection;
- (id)initWithBinding:(DSCredentialSoap12Binding *)aBinding delegate:(id<DSCredentialSoap12BindingResponseDelegate>)aDelegate;
@end
@interface DSCredentialSoap12Binding_Ping : DSCredentialSoap12BindingOperation {
	DSCredential_Ping * parameters;
}
@property (nonatomic, retain) DSCredential_Ping * parameters;
- (id)initWithBinding:(DSCredentialSoap12Binding *)aBinding delegate:(id<DSCredentialSoap12BindingResponseDelegate>)aDelegate
	parameters:(DSCredential_Ping *)aParameters
;
@end
@interface DSCredentialSoap12Binding_Login : DSCredentialSoap12BindingOperation {
	DSCredential_Login * parameters;
}
@property (nonatomic, retain) DSCredential_Login * parameters;
- (id)initWithBinding:(DSCredentialSoap12Binding *)aBinding delegate:(id<DSCredentialSoap12BindingResponseDelegate>)aDelegate
	parameters:(DSCredential_Login *)aParameters
;
@end
@interface DSCredentialSoap12Binding_GetAuthenticationToken : DSCredentialSoap12BindingOperation {
	DSCredential_GetAuthenticationToken * parameters;
}
@property (nonatomic, retain) DSCredential_GetAuthenticationToken * parameters;
- (id)initWithBinding:(DSCredentialSoap12Binding *)aBinding delegate:(id<DSCredentialSoap12BindingResponseDelegate>)aDelegate
	parameters:(DSCredential_GetAuthenticationToken *)aParameters
;
@end
@interface DSCredentialSoap12Binding_RequestSenderToken : DSCredentialSoap12BindingOperation {
	DSCredential_RequestSenderToken * parameters;
}
@property (nonatomic, retain) DSCredential_RequestSenderToken * parameters;
- (id)initWithBinding:(DSCredentialSoap12Binding *)aBinding delegate:(id<DSCredentialSoap12BindingResponseDelegate>)aDelegate
	parameters:(DSCredential_RequestSenderToken *)aParameters
;
@end
@interface DSCredentialSoap12Binding_RequestCorrectToken : DSCredentialSoap12BindingOperation {
	DSCredential_RequestCorrectToken * parameters;
}
@property (nonatomic, retain) DSCredential_RequestCorrectToken * parameters;
- (id)initWithBinding:(DSCredentialSoap12Binding *)aBinding delegate:(id<DSCredentialSoap12BindingResponseDelegate>)aDelegate
	parameters:(DSCredential_RequestCorrectToken *)aParameters
;
@end
@interface DSCredentialSoap12Binding_envelope : NSObject {
}
+ (DSCredentialSoap12Binding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements bodyKeys:(NSArray *)bodyKeys;
@end
@interface DSCredentialSoap12BindingResponse : NSObject {
	NSArray *headers;
	NSArray *bodyParts;
	NSError *error;
}
@property (nonatomic, retain) NSArray *headers;
@property (nonatomic, retain) NSArray *bodyParts;
@property (nonatomic, retain) NSError *error;
@end
