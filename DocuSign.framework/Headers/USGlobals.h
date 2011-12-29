#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define kServerAnchorCertificates   @"kServerAnchorCertificates"
#define kServerAnchorsOnly          @"kServerAnchorsOnly"
#define kClientIdentity             @"kClientIdentity"
#define kClientCertificates         @"kClientCertificates"
#define kClientUsername             @"kClientUsername"
#define kClientPassword             @"kClientPassword"
#define kNSURLCredentialPersistence @"kNSURLCredentialPersistence"
#define kValidateResult             @"kValidateResult"

@interface USGlobals : NSObject {
	NSMutableDictionary *wsdlStandardNamespaces;
}

@property (nonatomic, retain) NSMutableDictionary *wsdlStandardNamespaces;

+ (USGlobals *)sharedInstance;
+ (void)setLogTiming;
+ (BOOL)logTiming;

@end

@class USSoapOperation;
@class USSoapResponse;
@class SOAPSigner;

@protocol USSoapResponseDelegate <NSObject>
- (void) operation:(id)operation completedWithResponse:(USSoapResponse *)response;

@end

@interface USSoapBinding : NSObject <USSoapResponseDelegate> {
	NSURL *address;
	NSTimeInterval timeout;
	NSMutableArray *cookies;
	NSMutableDictionary *customHeaders;
	BOOL logXMLInOut;
	BOOL ignoreEmptyResponse;
	BOOL synchronousOperationComplete;
	NSDictionary *authenticationProperties;
	SOAPSigner *soapSigner;
	CFAbsoluteTime startTime;
	NSString* action;
}

@property (nonatomic, copy) NSURL *address;
@property (nonatomic) BOOL logXMLInOut;
@property (nonatomic) BOOL ignoreEmptyResponse;
@property (nonatomic) NSTimeInterval timeout;
@property (nonatomic, retain) NSMutableArray *cookies;
@property (nonatomic, retain) NSMutableDictionary *customHeaders;
@property (nonatomic, copy) NSDictionary *authenticationProperties;
@property (nonatomic, retain) SOAPSigner *soapSigner;
@property (nonatomic) CFAbsoluteTime startTime;
@property (nonatomic, retain) NSString *action;

+ (NSTimeInterval) defaultTimeout;

- (id)initWithAddress:(NSString *)anAddress;
- (void)sendHTTPCallUsingBody:(NSString *)body soapAction:(NSString *)soapAction forOperation:(USSoapOperation *)operation;
- (void)addCookie:(NSHTTPCookie *)toAdd;
- (NSString *)MIMEType;
- (USSoapResponse *)performSynchronousOperation:(USSoapOperation *)operation;
- (void)performAsynchronousOperation:(USSoapOperation *)operation;
- (void) operation:(USSoapOperation *)operation completedWithResponse:(USSoapResponse *)response;

@end

@interface USSoapOperation : NSOperation {
	USSoapBinding *binding;
	USSoapResponse *response;
	id<USSoapResponseDelegate> delegate;
	NSMutableData *responseData;
	NSURLConnection *urlConnection;
	int totalBytesWritten;
	int totalBytesExpectedToWrite;
}

@property (nonatomic, retain) USSoapBinding *binding;
@property (nonatomic, readonly) USSoapResponse *response;
@property (nonatomic, assign) id<USSoapResponseDelegate> delegate;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURLConnection *urlConnection;
@property (assign) int totalBytesWritten;
@property (assign) int totalBytesExpectedToWrite;

- (id)initWithBinding:(USSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate;
- (void)connection:(NSURLConnection *)connection didFailWithError:(NSError *)error;

@end

@interface USSoapResponse : NSObject {
    NSArray *headers;
    NSArray *bodyParts;
    NSError *error;
}

@property (nonatomic, retain) NSArray *headers;
@property (nonatomic, retain) NSArray *bodyParts;
@property (nonatomic, retain) NSError *error;

@end

