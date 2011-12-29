#import <Foundation/Foundation.h>
#import "USAdditions.h"
#import <libxml/tree.h>
#import "USGlobals.h"
#import <objc/runtime.h>
@class DSAccountManagementService_UpgradeRecipientAccount;
@class DSAccountManagementService_CreditCardInformation;
@class DSAccountManagementService_ReferralInformation;
@class DSAccountManagementService_AccountSettings;
@class DSAccountManagementService_AddressInformation;
@class DSAccountManagementService_UpgradeRecipientAccountResponse;
@class DSAccountManagementService_UpgradeRecipientAccountResult;
@class DSAccountManagementService_RequestError;
@class DSAccountManagementService_NewSocialAccount;
@class DSAccountManagementService_Member;
@class DSAccountManagementService_MemberSettings;
@class DSAccountManagementService_NewSocialAccountResponse;
@class DSAccountManagementService_NewSocialAccountResult;
@class DSAccountManagementService_NewAccount;
@class DSAccountManagementService_NewAccountResponse;
@class DSAccountManagementService_NewAccountResult;
@class DSAccountManagementService_AddMembersToAccount;
@class DSAccountManagementService_ArrayOfMember;
@class DSAccountManagementService_AddMembersToAccountResponse;
@class DSAccountManagementService_AddMembersToAccountResult;
@class DSAccountManagementService_ArrayOfMemberResult;
@class DSAccountManagementService_MemberResult;
@class DSAccountManagementService_GetPlanPricingInformation;
@class DSAccountManagementService_GetPlanPricingInformationResponse;
@class DSAccountManagementService_GetPlanPricingInformationResult;
@class DSAccountManagementService_Plan;
@class DSAccountManagementService_ArrayOfSeatDiscount;
@class DSAccountManagementService_SeatDiscount;
@class DSAccountManagementService_GetSuccessorPlanInformation;
@class DSAccountManagementService_GetSuccessorPlanInformationResponse;
@class DSAccountManagementService_GetSuccessorPlanInformationResult;
@class DSAccountManagementService_ArrayOfPlan;
@class DSAccountManagementService_GetPlanGroupInformation;
@class DSAccountManagementService_GetPlanGroupInformationResponse;
@class DSAccountManagementService_GetPlanGroupInformationResult;
@class DSAccountManagementService_ArrayOfPlanGroup;
@class DSAccountManagementService_PlanGroup;
@class DSAccountManagementService_ArrayOfPlanGroupPlan;
@class DSAccountManagementService_PlanGroupPlan;
@class DSAccountManagementService_GetMembershipSummary;
@class DSAccountManagementService_GetMembershipSummaryResponse;
@class DSAccountManagementService_GetMembershipSummaryResult;
@class DSAccountManagementService_ArrayOfMembershipSummary;
@class DSAccountManagementService_MembershipSummary;
@class DSAccountManagementService_ChangeAccountPricePlan;
@class DSAccountManagementService_ChangeAccountPricePlanResponse;
@class DSAccountManagementService_ChangeAccountPricePlanResult;
@class DSAccountManagementService_GetProvisioningInformation;
@class DSAccountManagementService_GetProvisioningInformationResponse;
@class DSAccountManagementService_GetProvisioningInformationResult;
@class DSAccountManagementService_SetConnectCredentials;
@class DSAccountManagementService_SetConnectCredentialsResponse;
@class DSAccountManagementService_SetConnectCredentialsResult;
@class DSAccountManagementService_GetPlanType;
@class DSAccountManagementService_GetPlanTypeResponse;
@class DSAccountManagementService_GetPlanTypeResult;
@class DSAccountManagementService_GetAccountInformation;
@class DSAccountManagementService_GetAccountInformationResponse;
@class DSAccountManagementService_GetAccountInformationResult;
@class DSAccountManagementService_GetAccountDistributorCode;
@class DSAccountManagementService_GetAccountDistributorCodeResponse;
@class DSAccountManagementService_GetAccountDistributorCodeResult;
@class DSAccountManagementService_GetConnectCredentials;
@class DSAccountManagementService_GetConnectCredentialsResponse;
@class DSAccountManagementService_GetConnectCredentialsResult;
@class DSAccountManagementService_GetEncryptedPassword;
@class DSAccountManagementService_GetEncryptedPasswordResponse;
@class DSAccountManagementService_GetEncryptedPasswordResult;
@class DSAccountManagementService_GetAccountSettings;
@class DSAccountManagementService_GetAccountSettingsResponse;
@class DSAccountManagementService_GetAccountSettingsResult;
@class DSAccountManagementService_UpdateAccountSettings;
@class DSAccountManagementService_UpdateAccountSettingsResponse;
@class DSAccountManagementService_UpdateAccountSettingsResult;
@class DSAccountManagementService_AuthenticateMember;
@class DSAccountManagementService_AuthenticateMemberResponse;
@class DSAccountManagementService_AuthenticateMemberResult;
@class DSAccountManagementService_AuthenticateMemberEx;
@class DSAccountManagementService_AuthenticateMemberExResponse;
@class DSAccountManagementService_AuthenticateMemberExResult;
@class DSAccountManagementService_GetMemberSettings;
@class DSAccountManagementService_GetMemberSettingsResponse;
@class DSAccountManagementService_GetMemberSettingsResult;
@class DSAccountManagementService_UpdateMemberSettings;
@class DSAccountManagementService_UpdateMemberSettingsResponse;
@class DSAccountManagementService_UpdateMemberSettingsResult;
@class DSAccountManagementService_CloseMembers;
@class DSAccountManagementService_ArrayOfString;
@class DSAccountManagementService_CloseMembersResponse;
@class DSAccountManagementService_CloseMembersResult;
@class DSAccountManagementService_CheckAccountMember;
@class DSAccountManagementService_CheckAccountMemberResponse;
@class DSAccountManagementService_CheckAccountMemberResult;
@class DSAccountManagementService_ActivateSalesforceInstance;
@class DSAccountManagementService_ActivateSalesforceInstanceResponse;
@class DSAccountManagementService_ActivateSalesforceInstanceResult;
@class DSAccountManagementService_ChangePassword;
@class DSAccountManagementService_ChangePasswordArg;
@class DSAccountManagementService_ChangePasswordResponse;
@class DSAccountManagementService_ChangePasswordResult;
@class DSAccountManagementService_GetSignatures;
@class DSAccountManagementService_GetSignaturesArg;
@class DSAccountManagementService_GetSignaturesResponse;
@class DSAccountManagementService_GetSignaturesResult;
@class DSAccountManagementService_ArrayOfSignature;
@class DSAccountManagementService_Signature;
@class DSAccountManagementService_Image;
@class DSAccountManagementService_SetSignatureImages;
@class DSAccountManagementService_SetSignatureImagesArg;
@class DSAccountManagementService_SetSignatureImagesResponse;
@class DSAccountManagementService_SetSignatureImagesResult;
@class DSAccountManagementService_CloseSignature;
@class DSAccountManagementService_CloseSignatureResponse;
@class DSAccountManagementService_CloseSignatureResult;
@class DSAccountManagementService_Ping;
@class DSAccountManagementService_PingResponse;
@class DSAccountManagementService_InitializeClientAccount;
@class DSAccountManagementService_InitializeClientAccountResponse;
@class DSAccountManagementService_InitializeClientAccountResult;
@interface DSAccountManagementService_CreditCardInformation : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * ccNumber;
	NSString * ccExpirationMonth;
	NSString * ccExpirationYear;
	NSString * ccUserName;
	NSString * ccType;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_CreditCardInformation *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * ccNumber;
@property (nonatomic, retain) NSString * ccExpirationMonth;
@property (nonatomic, retain) NSString * ccExpirationYear;
@property (nonatomic, retain) NSString * ccUserName;
@property (nonatomic, retain) NSString * ccType;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_ReferralInformation : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * EnableSupport;
	NSNumber * IncludedSeats;
	NSDecimalNumber * SaleDiscountPercent;
	NSNumber * PlanStartMonth;
	NSString * ReferrerName;
	NSString * ReferralCode;
	NSString * AdvertisementID;
	NSString * PublisherID;
	NSString * ShopperID;
	NSString * PromoCode;
	NSString * GroupMemberID;
	NSString * IdType;
	NSString * Industry;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_ReferralInformation *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * EnableSupport;
@property (nonatomic, retain) NSNumber * IncludedSeats;
@property (nonatomic, retain) NSDecimalNumber * SaleDiscountPercent;
@property (nonatomic, retain) NSNumber * PlanStartMonth;
@property (nonatomic, retain) NSString * ReferrerName;
@property (nonatomic, retain) NSString * ReferralCode;
@property (nonatomic, retain) NSString * AdvertisementID;
@property (nonatomic, retain) NSString * PublisherID;
@property (nonatomic, retain) NSString * ShopperID;
@property (nonatomic, retain) NSString * PromoCode;
@property (nonatomic, retain) NSString * GroupMemberID;
@property (nonatomic, retain) NSString * IdType;
@property (nonatomic, retain) NSString * Industry;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAccountManagementService_AutoNavRule_none = 0,
	DSAccountManagementService_AutoNavRule_Off,
	DSAccountManagementService_AutoNavRule_RequiredFields,
	DSAccountManagementService_AutoNavRule_RequiredAndBlankFields,
	DSAccountManagementService_AutoNavRule_AllFields,
	DSAccountManagementService_AutoNavRule_PageThenRequiredFields,
	DSAccountManagementService_AutoNavRule_PageThenRequiredAndBlankFields,
	DSAccountManagementService_AutoNavRule_PageThenAllFields,
} DSAccountManagementService_AutoNavRule;
DSAccountManagementService_AutoNavRule DSAccountManagementService_AutoNavRule_enumFromString(NSString *string);
NSString * DSAccountManagementService_AutoNavRule_stringFromEnum(DSAccountManagementService_AutoNavRule enumValue);
typedef enum {
	DSAccountManagementService_EnvelopeIntegrationAllowed_none = 0,
	DSAccountManagementService_EnvelopeIntegrationAllowed_NotAllowed,
	DSAccountManagementService_EnvelopeIntegrationAllowed_Full,
	DSAccountManagementService_EnvelopeIntegrationAllowed_IntegrationSendOnly,
} DSAccountManagementService_EnvelopeIntegrationAllowed;
DSAccountManagementService_EnvelopeIntegrationAllowed DSAccountManagementService_EnvelopeIntegrationAllowed_enumFromString(NSString *string);
NSString * DSAccountManagementService_EnvelopeIntegrationAllowed_stringFromEnum(DSAccountManagementService_EnvelopeIntegrationAllowed enumValue);
typedef enum {
	DSAccountManagementService_IDCheckRequired_none = 0,
	DSAccountManagementService_IDCheckRequired_Always,
	DSAccountManagementService_IDCheckRequired_Never,
	DSAccountManagementService_IDCheckRequired_Optional,
} DSAccountManagementService_IDCheckRequired;
DSAccountManagementService_IDCheckRequired DSAccountManagementService_IDCheckRequired_enumFromString(NSString *string);
NSString * DSAccountManagementService_IDCheckRequired_stringFromEnum(DSAccountManagementService_IDCheckRequired enumValue);
typedef enum {
	DSAccountManagementService_IDCheckExpire_none = 0,
	DSAccountManagementService_IDCheckExpire_Always,
	DSAccountManagementService_IDCheckExpire_Never,
	DSAccountManagementService_IDCheckExpire_Variable,
} DSAccountManagementService_IDCheckExpire;
DSAccountManagementService_IDCheckExpire DSAccountManagementService_IDCheckExpire_enumFromString(NSString *string);
NSString * DSAccountManagementService_IDCheckExpire_stringFromEnum(DSAccountManagementService_IDCheckExpire enumValue);
typedef enum {
	DSAccountManagementService_PKISignDownloadedPDFDocs_none = 0,
	DSAccountManagementService_PKISignDownloadedPDFDocs_NoSign,
	DSAccountManagementService_PKISignDownloadedPDFDocs_NoSignAllowUserOverride,
	DSAccountManagementService_PKISignDownloadedPDFDocs_YesSign,
} DSAccountManagementService_PKISignDownloadedPDFDocs;
DSAccountManagementService_PKISignDownloadedPDFDocs DSAccountManagementService_PKISignDownloadedPDFDocs_enumFromString(NSString *string);
NSString * DSAccountManagementService_PKISignDownloadedPDFDocs_stringFromEnum(DSAccountManagementService_PKISignDownloadedPDFDocs enumValue);
@interface DSAccountManagementService_AccountSettings : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * UsesAPI;
	USBoolean * EnableDSPro;
	USBoolean * EnableSendToManage;
	USBoolean * EnableSendToAgent;
	USBoolean * EnableVaulting;
	USBoolean * EnableEnvelopeStampingByAccountAdmin;
	USBoolean * EnvelopeStampingDefaultValue;
	USBoolean * SignerMustHaveAccount;
	USBoolean * SignerMustLoginToSign;
	USBoolean * SignerCanCreateAccount;
	USBoolean * AllowInPerson;
	USBoolean * EnablePowerForm;
	USBoolean * AllowSignerReassign;
	USBoolean * EnableReservedDomain;
	USBoolean * EnableSequentialSigningAPI;
	USBoolean * EnableSequentialSigningUI;
	USBoolean * EnableAutoNav;
	DSAccountManagementService_AutoNavRule AutoNavRule;
	USBoolean * EnableTransactionPoint;
	DSAccountManagementService_EnvelopeIntegrationAllowed EnvelopeIntegrationAllowed;
	USBoolean * EnvelopeIntegrationEnabled;
	USBoolean * CanSelfBrandSend;
	USBoolean * CanSelfBrandSign;
	DSAccountManagementService_IDCheckRequired IDCheckRequired;
	DSAccountManagementService_IDCheckExpire IDCheckExpire;
	NSNumber * IDCheckExpireDays;
	NSString * SignDateFormat;
	DSAccountManagementService_PKISignDownloadedPDFDocs PKISignDownloadedPDFDocs;
	NSString * InPersonIDCheckQuestion;
	NSNumber * SessionTimeout;
	USBoolean * AttachCompletedEnvelope;
	USBoolean * SignerCanSignOnMobile;
	USBoolean * SignerShowSecureFieldInitialValues;
	USBoolean * SignerAttachCertificateToEnvelopePDF;
	USBoolean * EnableSignOnPaper;
	USBoolean * EnableSignOnPaperOverride;
	USBoolean * EnableSignerAttachments;
	USBoolean * UseAccountLevelEmail;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_AccountSettings *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * UsesAPI;
@property (nonatomic, retain) USBoolean * EnableDSPro;
@property (nonatomic, retain) USBoolean * EnableSendToManage;
@property (nonatomic, retain) USBoolean * EnableSendToAgent;
@property (nonatomic, retain) USBoolean * EnableVaulting;
@property (nonatomic, retain) USBoolean * EnableEnvelopeStampingByAccountAdmin;
@property (nonatomic, retain) USBoolean * EnvelopeStampingDefaultValue;
@property (nonatomic, retain) USBoolean * SignerMustHaveAccount;
@property (nonatomic, retain) USBoolean * SignerMustLoginToSign;
@property (nonatomic, retain) USBoolean * SignerCanCreateAccount;
@property (nonatomic, retain) USBoolean * AllowInPerson;
@property (nonatomic, retain) USBoolean * EnablePowerForm;
@property (nonatomic, retain) USBoolean * AllowSignerReassign;
@property (nonatomic, retain) USBoolean * EnableReservedDomain;
@property (nonatomic, retain) USBoolean * EnableSequentialSigningAPI;
@property (nonatomic, retain) USBoolean * EnableSequentialSigningUI;
@property (nonatomic, retain) USBoolean * EnableAutoNav;
@property (nonatomic, assign) DSAccountManagementService_AutoNavRule AutoNavRule;
@property (nonatomic, retain) USBoolean * EnableTransactionPoint;
@property (nonatomic, assign) DSAccountManagementService_EnvelopeIntegrationAllowed EnvelopeIntegrationAllowed;
@property (nonatomic, retain) USBoolean * EnvelopeIntegrationEnabled;
@property (nonatomic, retain) USBoolean * CanSelfBrandSend;
@property (nonatomic, retain) USBoolean * CanSelfBrandSign;
@property (nonatomic, assign) DSAccountManagementService_IDCheckRequired IDCheckRequired;
@property (nonatomic, assign) DSAccountManagementService_IDCheckExpire IDCheckExpire;
@property (nonatomic, retain) NSNumber * IDCheckExpireDays;
@property (nonatomic, retain) NSString * SignDateFormat;
@property (nonatomic, assign) DSAccountManagementService_PKISignDownloadedPDFDocs PKISignDownloadedPDFDocs;
@property (nonatomic, retain) NSString * InPersonIDCheckQuestion;
@property (nonatomic, retain) NSNumber * SessionTimeout;
@property (nonatomic, retain) USBoolean * AttachCompletedEnvelope;
@property (nonatomic, retain) USBoolean * SignerCanSignOnMobile;
@property (nonatomic, retain) USBoolean * SignerShowSecureFieldInitialValues;
@property (nonatomic, retain) USBoolean * SignerAttachCertificateToEnvelopePDF;
@property (nonatomic, retain) USBoolean * EnableSignOnPaper;
@property (nonatomic, retain) USBoolean * EnableSignOnPaperOverride;
@property (nonatomic, retain) USBoolean * EnableSignerAttachments;
@property (nonatomic, retain) USBoolean * UseAccountLevelEmail;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_AddressInformation : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * Address1;
	NSString * Address2;
	NSString * City;
	NSString * State;
	NSString * Zip;
	NSString * Phone;
	NSString * Fax;
	NSString * Country;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_AddressInformation *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * Address1;
@property (nonatomic, retain) NSString * Address2;
@property (nonatomic, retain) NSString * City;
@property (nonatomic, retain) NSString * State;
@property (nonatomic, retain) NSString * Zip;
@property (nonatomic, retain) NSString * Phone;
@property (nonatomic, retain) NSString * Fax;
@property (nonatomic, retain) NSString * Country;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_UpgradeRecipientAccount : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * DistributorCode;
	NSString * DistributorPassword;
	NSString * AccountId;
	NSString * UserId;
	NSString * Pgp;
	NSString * AccountName;
	DSAccountManagementService_CreditCardInformation * CreditCardInformation;
	DSAccountManagementService_ReferralInformation * ReferralInformation;
	DSAccountManagementService_AccountSettings * AccountSettings;
	DSAccountManagementService_AddressInformation * AddressInformation;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_UpgradeRecipientAccount *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * DistributorCode;
@property (nonatomic, retain) NSString * DistributorPassword;
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) NSString * UserId;
@property (nonatomic, retain) NSString * Pgp;
@property (nonatomic, retain) NSString * AccountName;
@property (nonatomic, retain) DSAccountManagementService_CreditCardInformation * CreditCardInformation;
@property (nonatomic, retain) DSAccountManagementService_ReferralInformation * ReferralInformation;
@property (nonatomic, retain) DSAccountManagementService_AccountSettings * AccountSettings;
@property (nonatomic, retain) DSAccountManagementService_AddressInformation * AddressInformation;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAccountManagementService_ErrorCode_none = 0,
	DSAccountManagementService_ErrorCode_Unspecified_Error,
	DSAccountManagementService_ErrorCode_Invalid_Account_ID,
	DSAccountManagementService_ErrorCode_Account_Requires_User_Name_And_Password_For_Activation,
	DSAccountManagementService_ErrorCode_Account_Is_Already_Activated_For_Salesforce,
	DSAccountManagementService_ErrorCode_Invalid_Distributor_For_Account,
	DSAccountManagementService_ErrorCode_Invalid_User_ID,
	DSAccountManagementService_ErrorCode_Invalid_Account,
	DSAccountManagementService_ErrorCode_User_Is_Not_An_Account_Manager,
	DSAccountManagementService_ErrorCode_Invalid_Login,
	DSAccountManagementService_ErrorCode_Invalid_Member_User_Name,
	DSAccountManagementService_ErrorCode_Invalid_Member_Email,
	DSAccountManagementService_ErrorCode_Member_Email_Not_Allowed,
	DSAccountManagementService_ErrorCode_Member_Email_And_User_Name_Awaiting_Activation,
	DSAccountManagementService_ErrorCode_Member_Email_And_User_Name_Already_Exists_For_This_Account,
	DSAccountManagementService_ErrorCode_Member_Password_Blank,
	DSAccountManagementService_ErrorCode_Member_Forgotten_Password_Question_Blank,
	DSAccountManagementService_ErrorCode_Member_Forgotten_Password_Answer_Blank,
	DSAccountManagementService_ErrorCode_Invalid_Password_Format,
	DSAccountManagementService_ErrorCode_Invalid_Member_Data,
	DSAccountManagementService_ErrorCode_Member_Email_And_User_Name_Already_Exists,
	DSAccountManagementService_ErrorCode_Not_Authorized,
	DSAccountManagementService_ErrorCode_Invalid_Distributor_Selected,
	DSAccountManagementService_ErrorCode_Invalid_PGP_For_Distributor,
	DSAccountManagementService_ErrorCode_Invalid_Credit_Card_Type,
	DSAccountManagementService_ErrorCode_CreditCard_Auth_Failed,
	DSAccountManagementService_ErrorCode_Invalid_PGP,
	DSAccountManagementService_ErrorCode_Invalid_Plan_Retired,
	DSAccountManagementService_ErrorCode_Invalid_Successor_Plan,
	DSAccountManagementService_ErrorCode_Invalid_Credit_Card,
	DSAccountManagementService_ErrorCode_Credit_Card_Expiration,
	DSAccountManagementService_ErrorCode_Invalid_AppToken,
	DSAccountManagementService_ErrorCode_Distributor_Not_Enabled_For_AppToken,
	DSAccountManagementService_ErrorCode_Plan_Group_Not_Enabled_For_Distributor,
	DSAccountManagementService_ErrorCode_Invalid_Configuration_Number,
	DSAccountManagementService_ErrorCode_Invalid_Salesforce_Credentials,
	DSAccountManagementService_ErrorCode_Invalid_Salesforce_External_Instance_ID,
	DSAccountManagementService_ErrorCode_Invalid_DocuSign_Connect_Configuration_For_Account,
	DSAccountManagementService_ErrorCode_Invalid_User,
	DSAccountManagementService_ErrorCode_Invalid_Membership,
	DSAccountManagementService_ErrorCode_Invalid_Account_Member,
	DSAccountManagementService_ErrorCode_Invalid_Edit_User,
	DSAccountManagementService_ErrorCode_Invalid_Edit_Membership,
	DSAccountManagementService_ErrorCode_Invalid_CanEditSharedAddressBook_Value,
	DSAccountManagementService_ErrorCode_Invalid_CanManageTemplates_Value,
	DSAccountManagementService_ErrorCode_Invalid_Membership_ID,
	DSAccountManagementService_ErrorCode_Invalid_Request,
	DSAccountManagementService_ErrorCode_Partner_Authentication_Failed,
	DSAccountManagementService_ErrorCode_Hourly_API_Invocation_Limit_Exceeded,
	DSAccountManagementService_ErrorCode_Initialize_Client_Account_Error,
} DSAccountManagementService_ErrorCode;
DSAccountManagementService_ErrorCode DSAccountManagementService_ErrorCode_enumFromString(NSString *string);
NSString * DSAccountManagementService_ErrorCode_stringFromEnum(DSAccountManagementService_ErrorCode enumValue);
@interface DSAccountManagementService_RequestError : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_ErrorCode ErrorCode;
	NSString * Description;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_RequestError *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, assign) DSAccountManagementService_ErrorCode ErrorCode;
@property (nonatomic, retain) NSString * Description;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_UpgradeRecipientAccountResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_UpgradeRecipientAccountResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_UpgradeRecipientAccountResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_UpgradeRecipientAccountResult * UpgradeRecipientAccountResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_UpgradeRecipientAccountResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_UpgradeRecipientAccountResult * UpgradeRecipientAccountResult;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAccountManagementService_VaultingMode_none = 0,
	DSAccountManagementService_VaultingMode_None,
	DSAccountManagementService_VaultingMode_eStored,
	DSAccountManagementService_VaultingMode_electronicOriginal,
} DSAccountManagementService_VaultingMode;
DSAccountManagementService_VaultingMode DSAccountManagementService_VaultingMode_enumFromString(NSString *string);
NSString * DSAccountManagementService_VaultingMode_stringFromEnum(DSAccountManagementService_VaultingMode enumValue);
typedef enum {
	DSAccountManagementService_CanEditSharedAddressBook_none = 0,
	DSAccountManagementService_CanEditSharedAddressBook_None,
	DSAccountManagementService_CanEditSharedAddressBook_UseOnlyShared,
	DSAccountManagementService_CanEditSharedAddressBook_UsePrivateAndShared,
	DSAccountManagementService_CanEditSharedAddressBook_Share,
} DSAccountManagementService_CanEditSharedAddressBook;
DSAccountManagementService_CanEditSharedAddressBook DSAccountManagementService_CanEditSharedAddressBook_enumFromString(NSString *string);
NSString * DSAccountManagementService_CanEditSharedAddressBook_stringFromEnum(DSAccountManagementService_CanEditSharedAddressBook enumValue);
typedef enum {
	DSAccountManagementService_CanManageTemplates_none = 0,
	DSAccountManagementService_CanManageTemplates_None,
	DSAccountManagementService_CanManageTemplates_Use,
	DSAccountManagementService_CanManageTemplates_Create,
	DSAccountManagementService_CanManageTemplates_Share,
} DSAccountManagementService_CanManageTemplates;
DSAccountManagementService_CanManageTemplates DSAccountManagementService_CanManageTemplates_enumFromString(NSString *string);
NSString * DSAccountManagementService_CanManageTemplates_stringFromEnum(DSAccountManagementService_CanManageTemplates enumValue);
@interface DSAccountManagementService_MemberSettings : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * CanManageAccount;
	USBoolean * CanSendEnvelope;
	USBoolean * CanSendAPIRequests;
	USBoolean * APIAccountWideAccess;
	USBoolean * EnableVaulting;
	DSAccountManagementService_VaultingMode VaultingMode;
	USBoolean * EnableTransactionPoint;
	USBoolean * EnableSequentialSigningAPI;
	USBoolean * EnableSequentialSigningUI;
	USBoolean * EnableDSPro;
	USBoolean * PowerFormAdmin;
	USBoolean * PowerFormUser;
	DSAccountManagementService_CanEditSharedAddressBook CanEditSharedAddressBook;
	DSAccountManagementService_CanManageTemplates CanManageTemplates;
	USBoolean * EnableSignOnPaperOverride;
	USBoolean * EnableSignerAttachments;
	USBoolean * AllowSendOnBehalfOf;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_MemberSettings *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * CanManageAccount;
@property (nonatomic, retain) USBoolean * CanSendEnvelope;
@property (nonatomic, retain) USBoolean * CanSendAPIRequests;
@property (nonatomic, retain) USBoolean * APIAccountWideAccess;
@property (nonatomic, retain) USBoolean * EnableVaulting;
@property (nonatomic, assign) DSAccountManagementService_VaultingMode VaultingMode;
@property (nonatomic, retain) USBoolean * EnableTransactionPoint;
@property (nonatomic, retain) USBoolean * EnableSequentialSigningAPI;
@property (nonatomic, retain) USBoolean * EnableSequentialSigningUI;
@property (nonatomic, retain) USBoolean * EnableDSPro;
@property (nonatomic, retain) USBoolean * PowerFormAdmin;
@property (nonatomic, retain) USBoolean * PowerFormUser;
@property (nonatomic, assign) DSAccountManagementService_CanEditSharedAddressBook CanEditSharedAddressBook;
@property (nonatomic, assign) DSAccountManagementService_CanManageTemplates CanManageTemplates;
@property (nonatomic, retain) USBoolean * EnableSignOnPaperOverride;
@property (nonatomic, retain) USBoolean * EnableSignerAttachments;
@property (nonatomic, retain) USBoolean * AllowSendOnBehalfOf;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_Member : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * MemberEmailAddress;
	NSString * MemberUserName;
	NSString * MemberPassword;
	NSString * MemberForgottenPasswordQuestion;
	NSString * MemberForgottenPasswordAnswer;
	NSString * MemberTitle;
	NSString * MemberFirstName;
	NSString * MemberMiddleName;
	NSString * MemberLastName;
	NSString * MemberSuffix;
	USBoolean * EnableConnectForUser;
	DSAccountManagementService_MemberSettings * MemberSettings;
	USBoolean * ReturnEncryptedPassword;
	NSString * MemberForgottenPasswordQuestion2;
	NSString * MemberForgottenPasswordAnswer2;
	NSString * MemberForgottenPasswordQuestion3;
	NSString * MemberForgottenPasswordAnswer3;
	NSString * MemberForgottenPasswordQuestion4;
	NSString * MemberForgottenPasswordAnswer4;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_Member *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * MemberEmailAddress;
@property (nonatomic, retain) NSString * MemberUserName;
@property (nonatomic, retain) NSString * MemberPassword;
@property (nonatomic, retain) NSString * MemberForgottenPasswordQuestion;
@property (nonatomic, retain) NSString * MemberForgottenPasswordAnswer;
@property (nonatomic, retain) NSString * MemberTitle;
@property (nonatomic, retain) NSString * MemberFirstName;
@property (nonatomic, retain) NSString * MemberMiddleName;
@property (nonatomic, retain) NSString * MemberLastName;
@property (nonatomic, retain) NSString * MemberSuffix;
@property (nonatomic, retain) USBoolean * EnableConnectForUser;
@property (nonatomic, retain) DSAccountManagementService_MemberSettings * MemberSettings;
@property (nonatomic, retain) USBoolean * ReturnEncryptedPassword;
@property (nonatomic, retain) NSString * MemberForgottenPasswordQuestion2;
@property (nonatomic, retain) NSString * MemberForgottenPasswordAnswer2;
@property (nonatomic, retain) NSString * MemberForgottenPasswordQuestion3;
@property (nonatomic, retain) NSString * MemberForgottenPasswordAnswer3;
@property (nonatomic, retain) NSString * MemberForgottenPasswordQuestion4;
@property (nonatomic, retain) NSString * MemberForgottenPasswordAnswer4;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_NewSocialAccount : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountName;
	NSString * DistributorCode;
	NSString * DistributorPassword;
	NSString * Pgp;
	DSAccountManagementService_CreditCardInformation * CreditCardInformation;
	DSAccountManagementService_ReferralInformation * ReferralInformation;
	DSAccountManagementService_AccountSettings * AccountSettings;
	DSAccountManagementService_Member * Member;
	DSAccountManagementService_AddressInformation * AddressInformation;
	NSString * SocialProvider;
	NSString * SocialEmail;
	NSString * SocialIdentifier;
	NSString * SocialUserName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_NewSocialAccount *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountName;
@property (nonatomic, retain) NSString * DistributorCode;
@property (nonatomic, retain) NSString * DistributorPassword;
@property (nonatomic, retain) NSString * Pgp;
@property (nonatomic, retain) DSAccountManagementService_CreditCardInformation * CreditCardInformation;
@property (nonatomic, retain) DSAccountManagementService_ReferralInformation * ReferralInformation;
@property (nonatomic, retain) DSAccountManagementService_AccountSettings * AccountSettings;
@property (nonatomic, retain) DSAccountManagementService_Member * Member;
@property (nonatomic, retain) DSAccountManagementService_AddressInformation * AddressInformation;
@property (nonatomic, retain) NSString * SocialProvider;
@property (nonatomic, retain) NSString * SocialEmail;
@property (nonatomic, retain) NSString * SocialIdentifier;
@property (nonatomic, retain) NSString * SocialUserName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_NewSocialAccountResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
	NSString * SiteId;
	NSString * UserId;
	NSString * MembershipId;
	NSString * EncryptedPassword;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_NewSocialAccountResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) NSString * SiteId;
@property (nonatomic, retain) NSString * UserId;
@property (nonatomic, retain) NSString * MembershipId;
@property (nonatomic, retain) NSString * EncryptedPassword;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_NewSocialAccountResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_NewSocialAccountResult * NewSocialAccountResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_NewSocialAccountResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_NewSocialAccountResult * NewSocialAccountResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_NewAccount : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountName;
	NSString * DistributorCode;
	NSString * DistributorPassword;
	NSString * Pgp;
	DSAccountManagementService_CreditCardInformation * CreditCardInformation;
	DSAccountManagementService_ReferralInformation * ReferralInformation;
	DSAccountManagementService_AccountSettings * AccountSettings;
	DSAccountManagementService_Member * Member;
	DSAccountManagementService_AddressInformation * AddressInformation;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_NewAccount *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountName;
@property (nonatomic, retain) NSString * DistributorCode;
@property (nonatomic, retain) NSString * DistributorPassword;
@property (nonatomic, retain) NSString * Pgp;
@property (nonatomic, retain) DSAccountManagementService_CreditCardInformation * CreditCardInformation;
@property (nonatomic, retain) DSAccountManagementService_ReferralInformation * ReferralInformation;
@property (nonatomic, retain) DSAccountManagementService_AccountSettings * AccountSettings;
@property (nonatomic, retain) DSAccountManagementService_Member * Member;
@property (nonatomic, retain) DSAccountManagementService_AddressInformation * AddressInformation;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_NewAccountResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
	NSString * SiteId;
	NSString * UserId;
	NSString * MembershipId;
	NSString * EncryptedPassword;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_NewAccountResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) NSString * SiteId;
@property (nonatomic, retain) NSString * UserId;
@property (nonatomic, retain) NSString * MembershipId;
@property (nonatomic, retain) NSString * EncryptedPassword;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_NewAccountResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_NewAccountResult * NewAccountResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_NewAccountResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_NewAccountResult * NewAccountResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_ArrayOfMember : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *Member;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_ArrayOfMember *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addMember:(DSAccountManagementService_Member *)toAdd;
@property (nonatomic, readonly) NSMutableArray * Member;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_AddMembersToAccount : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
	DSAccountManagementService_ArrayOfMember * Members;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_AddMembersToAccount *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) DSAccountManagementService_ArrayOfMember * Members;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_MemberResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * UserId;
	NSString * EncryptedPassword;
	NSString * MembershipId;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_MemberResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * UserId;
@property (nonatomic, retain) NSString * EncryptedPassword;
@property (nonatomic, retain) NSString * MembershipId;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_ArrayOfMemberResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *Member;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_ArrayOfMemberResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addMember:(DSAccountManagementService_MemberResult *)toAdd;
@property (nonatomic, readonly) NSMutableArray * Member;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_AddMembersToAccountResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_ArrayOfMemberResult * Members;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_AddMembersToAccountResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_ArrayOfMemberResult * Members;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_AddMembersToAccountResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_AddMembersToAccountResult * AddMembersToAccountResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_AddMembersToAccountResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_AddMembersToAccountResult * AddMembersToAccountResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetPlanPricingInformation : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * DistributorCode;
	NSString * DistributorPassword;
	NSString * Pgp;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetPlanPricingInformation *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * DistributorCode;
@property (nonatomic, retain) NSString * DistributorPassword;
@property (nonatomic, retain) NSString * Pgp;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAccountManagementService_PaymentCycle_none = 0,
	DSAccountManagementService_PaymentCycle_Monthly,
	DSAccountManagementService_PaymentCycle_Annually,
} DSAccountManagementService_PaymentCycle;
DSAccountManagementService_PaymentCycle DSAccountManagementService_PaymentCycle_enumFromString(NSString *string);
NSString * DSAccountManagementService_PaymentCycle_stringFromEnum(DSAccountManagementService_PaymentCycle enumValue);
typedef enum {
	DSAccountManagementService_PaymentMethod_none = 0,
	DSAccountManagementService_PaymentMethod_CreditCard,
	DSAccountManagementService_PaymentMethod_PurchaseOrder,
	DSAccountManagementService_PaymentMethod_Premium,
	DSAccountManagementService_PaymentMethod_Freemium,
	DSAccountManagementService_PaymentMethod_FreeTrial,
} DSAccountManagementService_PaymentMethod;
DSAccountManagementService_PaymentMethod DSAccountManagementService_PaymentMethod_enumFromString(NSString *string);
NSString * DSAccountManagementService_PaymentMethod_stringFromEnum(DSAccountManagementService_PaymentMethod enumValue);
@interface DSAccountManagementService_SeatDiscount : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSNumber * BeginSeatCount;
	NSNumber * EndSeatCount;
	NSDecimalNumber * SeatDiscountPercent;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_SeatDiscount *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSNumber * BeginSeatCount;
@property (nonatomic, retain) NSNumber * EndSeatCount;
@property (nonatomic, retain) NSDecimalNumber * SeatDiscountPercent;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_ArrayOfSeatDiscount : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *SeatDiscount;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_ArrayOfSeatDiscount *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addSeatDiscount:(DSAccountManagementService_SeatDiscount *)toAdd;
@property (nonatomic, readonly) NSMutableArray * SeatDiscount;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_Plan : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * PlanName;
	DSAccountManagementService_PaymentCycle PaymentCycle;
	DSAccountManagementService_PaymentMethod PaymentMethod;
	NSDecimalNumber * PerSeatPrice;
	NSDecimalNumber * OtherDiscountPercent;
	NSDecimalNumber * SupportIncidentFee;
	NSDecimalNumber * SupportPlanFee;
	NSNumber * IncludedSeats;
	USBoolean * EnableSupport;
	NSString * PgpId;
	DSAccountManagementService_ArrayOfSeatDiscount * SeatDiscounts;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_Plan *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * PlanName;
@property (nonatomic, assign) DSAccountManagementService_PaymentCycle PaymentCycle;
@property (nonatomic, assign) DSAccountManagementService_PaymentMethod PaymentMethod;
@property (nonatomic, retain) NSDecimalNumber * PerSeatPrice;
@property (nonatomic, retain) NSDecimalNumber * OtherDiscountPercent;
@property (nonatomic, retain) NSDecimalNumber * SupportIncidentFee;
@property (nonatomic, retain) NSDecimalNumber * SupportPlanFee;
@property (nonatomic, retain) NSNumber * IncludedSeats;
@property (nonatomic, retain) USBoolean * EnableSupport;
@property (nonatomic, retain) NSString * PgpId;
@property (nonatomic, retain) DSAccountManagementService_ArrayOfSeatDiscount * SeatDiscounts;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetPlanPricingInformationResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_Plan * Plan;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetPlanPricingInformationResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_Plan * Plan;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetPlanPricingInformationResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_GetPlanPricingInformationResult * GetPlanPricingInformationResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetPlanPricingInformationResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_GetPlanPricingInformationResult * GetPlanPricingInformationResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetSuccessorPlanInformation : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * DistributorCode;
	NSString * DistributorPassword;
	NSString * AccountId;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetSuccessorPlanInformation *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * DistributorCode;
@property (nonatomic, retain) NSString * DistributorPassword;
@property (nonatomic, retain) NSString * AccountId;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_ArrayOfPlan : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *SuccessorPlan;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_ArrayOfPlan *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addSuccessorPlan:(DSAccountManagementService_Plan *)toAdd;
@property (nonatomic, readonly) NSMutableArray * SuccessorPlan;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetSuccessorPlanInformationResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_Plan * CurrentPlan;
	DSAccountManagementService_ArrayOfPlan * SuccessorPlans;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetSuccessorPlanInformationResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_Plan * CurrentPlan;
@property (nonatomic, retain) DSAccountManagementService_ArrayOfPlan * SuccessorPlans;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetSuccessorPlanInformationResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_GetSuccessorPlanInformationResult * GetSuccessorPlanInformationResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetSuccessorPlanInformationResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_GetSuccessorPlanInformationResult * GetSuccessorPlanInformationResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetPlanGroupInformation : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * DistributorCode;
	NSString * DistributorPassword;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetPlanGroupInformation *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * DistributorCode;
@property (nonatomic, retain) NSString * DistributorPassword;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_PlanGroupPlan : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * PlanName;
	NSString * Pgp;
	DSAccountManagementService_PaymentMethod PaymentMethod;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_PlanGroupPlan *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * PlanName;
@property (nonatomic, retain) NSString * Pgp;
@property (nonatomic, assign) DSAccountManagementService_PaymentMethod PaymentMethod;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_ArrayOfPlanGroupPlan : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *PlanGroupPlan;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_ArrayOfPlanGroupPlan *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addPlanGroupPlan:(DSAccountManagementService_PlanGroupPlan *)toAdd;
@property (nonatomic, readonly) NSMutableArray * PlanGroupPlan;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_PlanGroup : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * PlanGroupName;
	DSAccountManagementService_ArrayOfPlanGroupPlan * PlanGroupPlans;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_PlanGroup *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * PlanGroupName;
@property (nonatomic, retain) DSAccountManagementService_ArrayOfPlanGroupPlan * PlanGroupPlans;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_ArrayOfPlanGroup : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *PlanGroup;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_ArrayOfPlanGroup *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addPlanGroup:(DSAccountManagementService_PlanGroup *)toAdd;
@property (nonatomic, readonly) NSMutableArray * PlanGroup;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetPlanGroupInformationResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_ArrayOfPlanGroup * PlanGroups;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetPlanGroupInformationResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_ArrayOfPlanGroup * PlanGroups;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetPlanGroupInformationResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_GetPlanGroupInformationResult * GetPlanGroupInformationResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetPlanGroupInformationResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_GetPlanGroupInformationResult * GetPlanGroupInformationResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetMembershipSummary : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * Email;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetMembershipSummary *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * Email;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAccountManagementService_UserType_none = 0,
	DSAccountManagementService_UserType_CompanyUser,
	DSAccountManagementService_UserType_Recipient,
} DSAccountManagementService_UserType;
DSAccountManagementService_UserType DSAccountManagementService_UserType_enumFromString(NSString *string);
NSString * DSAccountManagementService_UserType_stringFromEnum(DSAccountManagementService_UserType enumValue);
typedef enum {
	DSAccountManagementService_UserStatus_none = 0,
	DSAccountManagementService_UserStatus_Created,
	DSAccountManagementService_UserStatus_Active,
	DSAccountManagementService_UserStatus_Closed,
} DSAccountManagementService_UserStatus;
DSAccountManagementService_UserStatus DSAccountManagementService_UserStatus_enumFromString(NSString *string);
NSString * DSAccountManagementService_UserStatus_stringFromEnum(DSAccountManagementService_UserStatus enumValue);
@interface DSAccountManagementService_MembershipSummary : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountName;
	NSString * AccountId;
	NSString * UserName;
	NSString * UserId;
	DSAccountManagementService_UserType UserType;
	DSAccountManagementService_UserStatus UserStatus;
	NSString * PlanName;
	NSString * Pgp;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_MembershipSummary *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountName;
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) NSString * UserName;
@property (nonatomic, retain) NSString * UserId;
@property (nonatomic, assign) DSAccountManagementService_UserType UserType;
@property (nonatomic, assign) DSAccountManagementService_UserStatus UserStatus;
@property (nonatomic, retain) NSString * PlanName;
@property (nonatomic, retain) NSString * Pgp;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_ArrayOfMembershipSummary : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *MembershipSummary;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_ArrayOfMembershipSummary *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addMembershipSummary:(DSAccountManagementService_MembershipSummary *)toAdd;
@property (nonatomic, readonly) NSMutableArray * MembershipSummary;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetMembershipSummaryResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_ArrayOfMembershipSummary * MembershipSummaries;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetMembershipSummaryResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_ArrayOfMembershipSummary * MembershipSummaries;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetMembershipSummaryResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_GetMembershipSummaryResult * GetMembershipSummaryResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetMembershipSummaryResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_GetMembershipSummaryResult * GetMembershipSummaryResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_ChangeAccountPricePlan : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * DistributorCode;
	NSString * DistributorPassword;
	NSString * AccountId;
	NSString * Pgp;
	USBoolean * EnableSupport;
	NSNumber * IncludedSeats;
	DSAccountManagementService_CreditCardInformation * CreditCardInformation;
	DSAccountManagementService_AddressInformation * AddressInformation;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_ChangeAccountPricePlan *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * DistributorCode;
@property (nonatomic, retain) NSString * DistributorPassword;
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) NSString * Pgp;
@property (nonatomic, retain) USBoolean * EnableSupport;
@property (nonatomic, retain) NSNumber * IncludedSeats;
@property (nonatomic, retain) DSAccountManagementService_CreditCardInformation * CreditCardInformation;
@property (nonatomic, retain) DSAccountManagementService_AddressInformation * AddressInformation;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_ChangeAccountPricePlanResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_ChangeAccountPricePlanResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_ChangeAccountPricePlanResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_ChangeAccountPricePlanResult * ChangeAccountPricePlanResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_ChangeAccountPricePlanResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_ChangeAccountPricePlanResult * ChangeAccountPricePlanResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetProvisioningInformation : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AppToken;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetProvisioningInformation *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AppToken;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetProvisioningInformationResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * DistributorCode;
	NSString * DistributorPassword;
	NSString * Pgp;
	NSString * PlanPromoText;
	NSNumber * DefaultConnectConfigurationId;
	NSString * PasswordRuleText;
	USBoolean * PurchaseOrderOrPromoAllowed;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetProvisioningInformationResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * DistributorCode;
@property (nonatomic, retain) NSString * DistributorPassword;
@property (nonatomic, retain) NSString * Pgp;
@property (nonatomic, retain) NSString * PlanPromoText;
@property (nonatomic, retain) NSNumber * DefaultConnectConfigurationId;
@property (nonatomic, retain) NSString * PasswordRuleText;
@property (nonatomic, retain) USBoolean * PurchaseOrderOrPromoAllowed;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetProvisioningInformationResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_GetProvisioningInformationResult * GetProvisioningInformationResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetProvisioningInformationResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_GetProvisioningInformationResult * GetProvisioningInformationResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_SetConnectCredentials : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
	NSString * ConnectUsername;
	NSString * ConnectPassword;
	NSNumber * ConnectConfigurationId;
	NSString * SalesforceEnvironment;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_SetConnectCredentials *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) NSString * ConnectUsername;
@property (nonatomic, retain) NSString * ConnectPassword;
@property (nonatomic, retain) NSNumber * ConnectConfigurationId;
@property (nonatomic, retain) NSString * SalesforceEnvironment;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_SetConnectCredentialsResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * ConnectTestResult;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_SetConnectCredentialsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * ConnectTestResult;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_SetConnectCredentialsResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_SetConnectCredentialsResult * SetConnectCredentialsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_SetConnectCredentialsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_SetConnectCredentialsResult * SetConnectCredentialsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetPlanType : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetPlanType *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetPlanTypeResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * LogicalPlanType;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetPlanTypeResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * LogicalPlanType;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetPlanTypeResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_GetPlanTypeResult * GetPlanTypeResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetPlanTypeResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_GetPlanTypeResult * GetPlanTypeResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetAccountInformation : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetAccountInformation *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetAccountInformationResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * CurrentPlanId;
	NSString * CurrentPlanName;
	NSDate * CurrentPlanStartDate;
	NSDate * CurrentPlanEndDate;
	NSDate * CurrentBillingPeriodStartDate;
	NSDate * CurrentBillingPeriodEndDate;
	NSNumber * CurrentBillingPeriodEnvelopesSent;
	NSNumber * CurrentBillingPeriodEnvelopesAllowed;
	NSString * AccountSuspensionStatus;
	NSDate * AccountSuspensionDate;
	NSString * AccountName;
	NSString * ExternalAccountId;
	NSString * ConnectPermission;
	NSString * DocusignLandingUrl;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetAccountInformationResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * CurrentPlanId;
@property (nonatomic, retain) NSString * CurrentPlanName;
@property (nonatomic, retain) NSDate * CurrentPlanStartDate;
@property (nonatomic, retain) NSDate * CurrentPlanEndDate;
@property (nonatomic, retain) NSDate * CurrentBillingPeriodStartDate;
@property (nonatomic, retain) NSDate * CurrentBillingPeriodEndDate;
@property (nonatomic, retain) NSNumber * CurrentBillingPeriodEnvelopesSent;
@property (nonatomic, retain) NSNumber * CurrentBillingPeriodEnvelopesAllowed;
@property (nonatomic, retain) NSString * AccountSuspensionStatus;
@property (nonatomic, retain) NSDate * AccountSuspensionDate;
@property (nonatomic, retain) NSString * AccountName;
@property (nonatomic, retain) NSString * ExternalAccountId;
@property (nonatomic, retain) NSString * ConnectPermission;
@property (nonatomic, retain) NSString * DocusignLandingUrl;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetAccountInformationResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_GetAccountInformationResult * GetAccountInformationResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetAccountInformationResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_GetAccountInformationResult * GetAccountInformationResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetAccountDistributorCode : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetAccountDistributorCode *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetAccountDistributorCodeResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * DistributorCode;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetAccountDistributorCodeResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * DistributorCode;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetAccountDistributorCodeResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_GetAccountDistributorCodeResult * GetAccountDistributorCodeResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetAccountDistributorCodeResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_GetAccountDistributorCodeResult * GetAccountDistributorCodeResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetConnectCredentials : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetConnectCredentials *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetConnectCredentialsResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * ConnectUserName;
	NSString * ConnectConfig;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetConnectCredentialsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * ConnectUserName;
@property (nonatomic, retain) NSString * ConnectConfig;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetConnectCredentialsResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_GetConnectCredentialsResult * GetConnectCredentialsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetConnectCredentialsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_GetConnectCredentialsResult * GetConnectCredentialsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetEncryptedPassword : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetEncryptedPassword *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetEncryptedPasswordResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EncryptedPassword;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetEncryptedPasswordResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EncryptedPassword;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetEncryptedPasswordResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_GetEncryptedPasswordResult * GetEncryptedPasswordResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetEncryptedPasswordResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_GetEncryptedPasswordResult * GetEncryptedPasswordResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetAccountSettings : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetAccountSettings *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetAccountSettingsResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_AccountSettings * AccountSettings;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetAccountSettingsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_AccountSettings * AccountSettings;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetAccountSettingsResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_GetAccountSettingsResult * GetAccountSettingsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetAccountSettingsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_GetAccountSettingsResult * GetAccountSettingsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_UpdateAccountSettings : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
	DSAccountManagementService_AccountSettings * AccountSettings;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_UpdateAccountSettings *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) DSAccountManagementService_AccountSettings * AccountSettings;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_UpdateAccountSettingsResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_UpdateAccountSettingsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_UpdateAccountSettingsResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_UpdateAccountSettingsResult * UpdateAccountSettingsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_UpdateAccountSettingsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_UpdateAccountSettingsResult * UpdateAccountSettingsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_AuthenticateMember : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_AuthenticateMember *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_AuthenticateMemberResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * UserId;
	NSString * AccountId;
	USBoolean * UsesAPI;
	DSAccountManagementService_MemberSettings * MemberSettings;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_AuthenticateMemberResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * UserId;
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) USBoolean * UsesAPI;
@property (nonatomic, retain) DSAccountManagementService_MemberSettings * MemberSettings;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_AuthenticateMemberResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_AuthenticateMemberResult * AuthenticateMemberResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_AuthenticateMemberResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_AuthenticateMemberResult * AuthenticateMemberResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_AuthenticateMemberEx : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_AuthenticateMemberEx *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_AuthenticateMemberExResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * UserId;
	NSString * AccountId;
	USBoolean * UsesAPI;
	DSAccountManagementService_MemberSettings * MemberSettings;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_AuthenticateMemberExResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * UserId;
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) USBoolean * UsesAPI;
@property (nonatomic, retain) DSAccountManagementService_MemberSettings * MemberSettings;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_AuthenticateMemberExResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_AuthenticateMemberExResult * AuthenticateMemberExResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_AuthenticateMemberExResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_AuthenticateMemberExResult * AuthenticateMemberExResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetMemberSettings : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
	NSString * UserId;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetMemberSettings *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) NSString * UserId;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetMemberSettingsResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_MemberSettings * MemberSettings;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetMemberSettingsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_MemberSettings * MemberSettings;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetMemberSettingsResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_GetMemberSettingsResult * GetMemberSettingsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetMemberSettingsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_GetMemberSettingsResult * GetMemberSettingsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_UpdateMemberSettings : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
	NSString * UserId;
	DSAccountManagementService_MemberSettings * MemberSettings;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_UpdateMemberSettings *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) NSString * UserId;
@property (nonatomic, retain) DSAccountManagementService_MemberSettings * MemberSettings;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_UpdateMemberSettingsResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_UpdateMemberSettingsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_UpdateMemberSettingsResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_UpdateMemberSettingsResult * UpdateMemberSettingsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_UpdateMemberSettingsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_UpdateMemberSettingsResult * UpdateMemberSettingsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_ArrayOfString : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *string;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_ArrayOfString *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addString:(NSString *)toAdd;
@property (nonatomic, readonly) NSMutableArray * string;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_CloseMembers : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
	DSAccountManagementService_ArrayOfString * UserIds;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_CloseMembers *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) DSAccountManagementService_ArrayOfString * UserIds;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_CloseMembersResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * Success;
	DSAccountManagementService_ArrayOfMemberResult * Members;
	NSDate * DateStamp;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_CloseMembersResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_ArrayOfMemberResult * Members;
@property (nonatomic, retain) NSDate * DateStamp;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_CloseMembersResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_CloseMembersResult * CloseMembersResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_CloseMembersResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_CloseMembersResult * CloseMembersResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_CheckAccountMember : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
	NSString * Email;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_CheckAccountMember *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) NSString * Email;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_CheckAccountMemberResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * UserId;
	NSString * Status;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_CheckAccountMemberResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * UserId;
@property (nonatomic, retain) NSString * Status;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_CheckAccountMemberResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_CheckAccountMemberResult * CheckAccountMemberResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_CheckAccountMemberResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_CheckAccountMemberResult * CheckAccountMemberResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_ActivateSalesforceInstance : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
	NSString * ExternalInstanceId;
	NSString * ConnectUsername;
	NSString * ConnectPassword;
	NSString * SalesforceEnvironment;
	DSAccountManagementService_Member * Member;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_ActivateSalesforceInstance *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) NSString * ExternalInstanceId;
@property (nonatomic, retain) NSString * ConnectUsername;
@property (nonatomic, retain) NSString * ConnectPassword;
@property (nonatomic, retain) NSString * SalesforceEnvironment;
@property (nonatomic, retain) DSAccountManagementService_Member * Member;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_ActivateSalesforceInstanceResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
	NSString * SiteId;
	NSString * UserId;
	NSString * MembershipId;
	NSString * EncryptedPassword;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_ActivateSalesforceInstanceResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) NSString * SiteId;
@property (nonatomic, retain) NSString * UserId;
@property (nonatomic, retain) NSString * MembershipId;
@property (nonatomic, retain) NSString * EncryptedPassword;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_ActivateSalesforceInstanceResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_ActivateSalesforceInstanceResult * ActivateSalesforceInstanceResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_ActivateSalesforceInstanceResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_ActivateSalesforceInstanceResult * ActivateSalesforceInstanceResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_ChangePasswordArg : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EmailAddress;
	NSString * OldPassword;
	NSString * NewPassword;
	NSString * ForgottenPasswordQuestion;
	NSString * ForgottenPasswordAnswer;
	NSString * ForgottenPasswordQuestion2;
	NSString * ForgottenPasswordAnswer2;
	NSString * ForgottenPasswordQuestion3;
	NSString * ForgottenPasswordAnswer3;
	NSString * ForgottenPasswordQuestion4;
	NSString * ForgottenPasswordAnswer4;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_ChangePasswordArg *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EmailAddress;
@property (nonatomic, retain) NSString * OldPassword;
@property (nonatomic, retain) NSString * NewPassword;
@property (nonatomic, retain) NSString * ForgottenPasswordQuestion;
@property (nonatomic, retain) NSString * ForgottenPasswordAnswer;
@property (nonatomic, retain) NSString * ForgottenPasswordQuestion2;
@property (nonatomic, retain) NSString * ForgottenPasswordAnswer2;
@property (nonatomic, retain) NSString * ForgottenPasswordQuestion3;
@property (nonatomic, retain) NSString * ForgottenPasswordAnswer3;
@property (nonatomic, retain) NSString * ForgottenPasswordQuestion4;
@property (nonatomic, retain) NSString * ForgottenPasswordAnswer4;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_ChangePassword : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_ChangePasswordArg * ChangePasswordArg;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_ChangePassword *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_ChangePasswordArg * ChangePasswordArg;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_ChangePasswordResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_ChangePasswordResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_ChangePasswordResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_ChangePasswordResult * ChangePasswordResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_ChangePasswordResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_ChangePasswordResult * ChangePasswordResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetSignaturesArg : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * IncludeBytes;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetSignaturesArg *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * IncludeBytes;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetSignatures : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_GetSignaturesArg * GetSignaturesArg;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetSignatures *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_GetSignaturesArg * GetSignaturesArg;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAccountManagementService_SignatureType_none = 0,
	DSAccountManagementService_SignatureType_RubberStamp,
	DSAccountManagementService_SignatureType_Imported,
	DSAccountManagementService_SignatureType_Drawn,
} DSAccountManagementService_SignatureType;
DSAccountManagementService_SignatureType DSAccountManagementService_SignatureType_enumFromString(NSString *string);
NSString * DSAccountManagementService_SignatureType_stringFromEnum(DSAccountManagementService_SignatureType enumValue);
@interface DSAccountManagementService_Image : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * MimeType;
	NSData * ImageData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_Image *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * MimeType;
@property (nonatomic, retain) NSData * ImageData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_Signature : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * StampFont;
	DSAccountManagementService_SignatureType SignatureType;
	NSString * SignatureName;
	NSString * SignatureText;
	DSAccountManagementService_Image * SignatureImage;
	NSString * InitialsText;
	DSAccountManagementService_Image * InitialsImage;
	NSDate * Created;
	NSDate * Adopted;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_Signature *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * StampFont;
@property (nonatomic, assign) DSAccountManagementService_SignatureType SignatureType;
@property (nonatomic, retain) NSString * SignatureName;
@property (nonatomic, retain) NSString * SignatureText;
@property (nonatomic, retain) DSAccountManagementService_Image * SignatureImage;
@property (nonatomic, retain) NSString * InitialsText;
@property (nonatomic, retain) DSAccountManagementService_Image * InitialsImage;
@property (nonatomic, retain) NSDate * Created;
@property (nonatomic, retain) NSDate * Adopted;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_ArrayOfSignature : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *Signature;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_ArrayOfSignature *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addSignature:(DSAccountManagementService_Signature *)toAdd;
@property (nonatomic, readonly) NSMutableArray * Signature;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetSignaturesResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * UserId;
	DSAccountManagementService_ArrayOfSignature * Signatures;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetSignaturesResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * UserId;
@property (nonatomic, retain) DSAccountManagementService_ArrayOfSignature * Signatures;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_GetSignaturesResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_GetSignaturesResult * GetSignaturesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_GetSignaturesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_GetSignaturesResult * GetSignaturesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_SetSignatureImagesArg : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * SignatureName;
	DSAccountManagementService_Image * SignatureImage;
	DSAccountManagementService_Image * InitialsImage;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_SetSignatureImagesArg *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * SignatureName;
@property (nonatomic, retain) DSAccountManagementService_Image * SignatureImage;
@property (nonatomic, retain) DSAccountManagementService_Image * InitialsImage;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_SetSignatureImages : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_SetSignatureImagesArg * SetSignatureImagesArg;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_SetSignatureImages *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_SetSignatureImagesArg * SetSignatureImagesArg;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_SetSignatureImagesResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * UserId;
	DSAccountManagementService_ArrayOfSignature * Signatures;
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_SetSignatureImagesResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * UserId;
@property (nonatomic, retain) DSAccountManagementService_ArrayOfSignature * Signatures;
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_SetSignatureImagesResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_SetSignatureImagesResult * SetSignatureImagesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_SetSignatureImagesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_SetSignatureImagesResult * SetSignatureImagesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_CloseSignature : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * SignatureName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_CloseSignature *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * SignatureName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_CloseSignatureResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_CloseSignatureResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_CloseSignatureResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_CloseSignatureResult * CloseSignatureResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_CloseSignatureResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_CloseSignatureResult * CloseSignatureResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_Ping : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_Ping *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_PingResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * PingResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_PingResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * PingResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_InitializeClientAccount : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AppName;
	NSString * PlatformName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_InitializeClientAccount *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AppName;
@property (nonatomic, retain) NSString * PlatformName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_InitializeClientAccountResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * Success;
	DSAccountManagementService_RequestError * Error;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_InitializeClientAccountResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAccountManagementService_RequestError * Error;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAccountManagementService_InitializeClientAccountResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAccountManagementService_InitializeClientAccountResult * InitializeClientAccountResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAccountManagementService_InitializeClientAccountResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAccountManagementService_InitializeClientAccountResult * InitializeClientAccountResult;
/* attributes */
- (NSDictionary *)attributes;
@end
/* Cookies handling provided by http://en.wikibooks.org/wiki/Programming:WebObjects/Web_Services/Web_Service_Provider */
#import <UIKit/UIKit.h>
#import <libxml/parser.h>
#import "xsd.h"
#import "DSAccountManagementService.h"
@class DSAccountManagementServiceSoapBinding;
@class DSAccountManagementServiceSoap12Binding;
@interface DSAccountManagementService : NSObject {
	
}
+ (DSAccountManagementServiceSoapBinding *)DSAccountManagementServiceSoapBinding;
+ (DSAccountManagementServiceSoap12Binding *)DSAccountManagementServiceSoap12Binding;
@end
@class USSoapResponse;
@class USSoapOperation;
@interface DSAccountManagementServiceSoapBinding : USSoapBinding {
}
- (USSoapResponse *)UpgradeRecipientAccountUsingParameters:(DSAccountManagementService_UpgradeRecipientAccount *)aParameters ;
- (USSoapOperation *)UpgradeRecipientAccountAsyncUsingParameters:(DSAccountManagementService_UpgradeRecipientAccount *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)NewSocialAccountUsingParameters:(DSAccountManagementService_NewSocialAccount *)aParameters ;
- (USSoapOperation *)NewSocialAccountAsyncUsingParameters:(DSAccountManagementService_NewSocialAccount *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)NewAccountUsingParameters:(DSAccountManagementService_NewAccount *)aParameters ;
- (USSoapOperation *)NewAccountAsyncUsingParameters:(DSAccountManagementService_NewAccount *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)AddMembersToAccountUsingParameters:(DSAccountManagementService_AddMembersToAccount *)aParameters ;
- (USSoapOperation *)AddMembersToAccountAsyncUsingParameters:(DSAccountManagementService_AddMembersToAccount *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetPlanPricingInformationUsingParameters:(DSAccountManagementService_GetPlanPricingInformation *)aParameters ;
- (USSoapOperation *)GetPlanPricingInformationAsyncUsingParameters:(DSAccountManagementService_GetPlanPricingInformation *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetSuccessorPlanInformationUsingParameters:(DSAccountManagementService_GetSuccessorPlanInformation *)aParameters ;
- (USSoapOperation *)GetSuccessorPlanInformationAsyncUsingParameters:(DSAccountManagementService_GetSuccessorPlanInformation *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetPlanGroupInformationUsingParameters:(DSAccountManagementService_GetPlanGroupInformation *)aParameters ;
- (USSoapOperation *)GetPlanGroupInformationAsyncUsingParameters:(DSAccountManagementService_GetPlanGroupInformation *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetMembershipSummaryUsingParameters:(DSAccountManagementService_GetMembershipSummary *)aParameters ;
- (USSoapOperation *)GetMembershipSummaryAsyncUsingParameters:(DSAccountManagementService_GetMembershipSummary *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)ChangeAccountPricePlanUsingParameters:(DSAccountManagementService_ChangeAccountPricePlan *)aParameters ;
- (USSoapOperation *)ChangeAccountPricePlanAsyncUsingParameters:(DSAccountManagementService_ChangeAccountPricePlan *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetProvisioningInformationUsingParameters:(DSAccountManagementService_GetProvisioningInformation *)aParameters ;
- (USSoapOperation *)GetProvisioningInformationAsyncUsingParameters:(DSAccountManagementService_GetProvisioningInformation *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)SetConnectCredentialsUsingParameters:(DSAccountManagementService_SetConnectCredentials *)aParameters ;
- (USSoapOperation *)SetConnectCredentialsAsyncUsingParameters:(DSAccountManagementService_SetConnectCredentials *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetPlanTypeUsingParameters:(DSAccountManagementService_GetPlanType *)aParameters ;
- (USSoapOperation *)GetPlanTypeAsyncUsingParameters:(DSAccountManagementService_GetPlanType *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetAccountInformationUsingParameters:(DSAccountManagementService_GetAccountInformation *)aParameters ;
- (USSoapOperation *)GetAccountInformationAsyncUsingParameters:(DSAccountManagementService_GetAccountInformation *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetAccountDistributorCodeUsingParameters:(DSAccountManagementService_GetAccountDistributorCode *)aParameters ;
- (USSoapOperation *)GetAccountDistributorCodeAsyncUsingParameters:(DSAccountManagementService_GetAccountDistributorCode *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetConnectCredentialsUsingParameters:(DSAccountManagementService_GetConnectCredentials *)aParameters ;
- (USSoapOperation *)GetConnectCredentialsAsyncUsingParameters:(DSAccountManagementService_GetConnectCredentials *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetEncryptedPasswordUsingParameters:(DSAccountManagementService_GetEncryptedPassword *)aParameters ;
- (USSoapOperation *)GetEncryptedPasswordAsyncUsingParameters:(DSAccountManagementService_GetEncryptedPassword *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetAccountSettingsUsingParameters:(DSAccountManagementService_GetAccountSettings *)aParameters ;
- (USSoapOperation *)GetAccountSettingsAsyncUsingParameters:(DSAccountManagementService_GetAccountSettings *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)UpdateAccountSettingsUsingParameters:(DSAccountManagementService_UpdateAccountSettings *)aParameters ;
- (USSoapOperation *)UpdateAccountSettingsAsyncUsingParameters:(DSAccountManagementService_UpdateAccountSettings *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)AuthenticateMemberUsingParameters:(DSAccountManagementService_AuthenticateMember *)aParameters ;
- (USSoapOperation *)AuthenticateMemberAsyncUsingParameters:(DSAccountManagementService_AuthenticateMember *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)AuthenticateMemberExUsingParameters:(DSAccountManagementService_AuthenticateMemberEx *)aParameters ;
- (USSoapOperation *)AuthenticateMemberExAsyncUsingParameters:(DSAccountManagementService_AuthenticateMemberEx *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetMemberSettingsUsingParameters:(DSAccountManagementService_GetMemberSettings *)aParameters ;
- (USSoapOperation *)GetMemberSettingsAsyncUsingParameters:(DSAccountManagementService_GetMemberSettings *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)UpdateMemberSettingsUsingParameters:(DSAccountManagementService_UpdateMemberSettings *)aParameters ;
- (USSoapOperation *)UpdateMemberSettingsAsyncUsingParameters:(DSAccountManagementService_UpdateMemberSettings *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)CloseMembersUsingParameters:(DSAccountManagementService_CloseMembers *)aParameters ;
- (USSoapOperation *)CloseMembersAsyncUsingParameters:(DSAccountManagementService_CloseMembers *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)CheckAccountMemberUsingParameters:(DSAccountManagementService_CheckAccountMember *)aParameters ;
- (USSoapOperation *)CheckAccountMemberAsyncUsingParameters:(DSAccountManagementService_CheckAccountMember *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)ActivateSalesforceInstanceUsingParameters:(DSAccountManagementService_ActivateSalesforceInstance *)aParameters ;
- (USSoapOperation *)ActivateSalesforceInstanceAsyncUsingParameters:(DSAccountManagementService_ActivateSalesforceInstance *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)ChangePasswordUsingParameters:(DSAccountManagementService_ChangePassword *)aParameters ;
- (USSoapOperation *)ChangePasswordAsyncUsingParameters:(DSAccountManagementService_ChangePassword *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetSignaturesUsingParameters:(DSAccountManagementService_GetSignatures *)aParameters ;
- (USSoapOperation *)GetSignaturesAsyncUsingParameters:(DSAccountManagementService_GetSignatures *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)SetSignatureImagesUsingParameters:(DSAccountManagementService_SetSignatureImages *)aParameters ;
- (USSoapOperation *)SetSignatureImagesAsyncUsingParameters:(DSAccountManagementService_SetSignatureImages *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)CloseSignatureUsingParameters:(DSAccountManagementService_CloseSignature *)aParameters ;
- (USSoapOperation *)CloseSignatureAsyncUsingParameters:(DSAccountManagementService_CloseSignature *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)PingUsingParameters:(DSAccountManagementService_Ping *)aParameters ;
- (USSoapOperation *)PingAsyncUsingParameters:(DSAccountManagementService_Ping *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)InitializeClientAccountUsingParameters:(DSAccountManagementService_InitializeClientAccount *)aParameters ;
- (USSoapOperation *)InitializeClientAccountAsyncUsingParameters:(DSAccountManagementService_InitializeClientAccount *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
@end
@interface DSAccountManagementServiceSoapBinding_UpgradeRecipientAccount : USSoapOperation {
	DSAccountManagementService_UpgradeRecipientAccount * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_UpgradeRecipientAccount * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_UpgradeRecipientAccount *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_NewSocialAccount : USSoapOperation {
	DSAccountManagementService_NewSocialAccount * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_NewSocialAccount * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_NewSocialAccount *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_NewAccount : USSoapOperation {
	DSAccountManagementService_NewAccount * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_NewAccount * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_NewAccount *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_AddMembersToAccount : USSoapOperation {
	DSAccountManagementService_AddMembersToAccount * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_AddMembersToAccount * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_AddMembersToAccount *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_GetPlanPricingInformation : USSoapOperation {
	DSAccountManagementService_GetPlanPricingInformation * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetPlanPricingInformation * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetPlanPricingInformation *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_GetSuccessorPlanInformation : USSoapOperation {
	DSAccountManagementService_GetSuccessorPlanInformation * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetSuccessorPlanInformation * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetSuccessorPlanInformation *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_GetPlanGroupInformation : USSoapOperation {
	DSAccountManagementService_GetPlanGroupInformation * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetPlanGroupInformation * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetPlanGroupInformation *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_GetMembershipSummary : USSoapOperation {
	DSAccountManagementService_GetMembershipSummary * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetMembershipSummary * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetMembershipSummary *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_ChangeAccountPricePlan : USSoapOperation {
	DSAccountManagementService_ChangeAccountPricePlan * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_ChangeAccountPricePlan * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_ChangeAccountPricePlan *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_GetProvisioningInformation : USSoapOperation {
	DSAccountManagementService_GetProvisioningInformation * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetProvisioningInformation * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetProvisioningInformation *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_SetConnectCredentials : USSoapOperation {
	DSAccountManagementService_SetConnectCredentials * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_SetConnectCredentials * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_SetConnectCredentials *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_GetPlanType : USSoapOperation {
	DSAccountManagementService_GetPlanType * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetPlanType * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetPlanType *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_GetAccountInformation : USSoapOperation {
	DSAccountManagementService_GetAccountInformation * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetAccountInformation * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetAccountInformation *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_GetAccountDistributorCode : USSoapOperation {
	DSAccountManagementService_GetAccountDistributorCode * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetAccountDistributorCode * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetAccountDistributorCode *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_GetConnectCredentials : USSoapOperation {
	DSAccountManagementService_GetConnectCredentials * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetConnectCredentials * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetConnectCredentials *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_GetEncryptedPassword : USSoapOperation {
	DSAccountManagementService_GetEncryptedPassword * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetEncryptedPassword * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetEncryptedPassword *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_GetAccountSettings : USSoapOperation {
	DSAccountManagementService_GetAccountSettings * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetAccountSettings * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetAccountSettings *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_UpdateAccountSettings : USSoapOperation {
	DSAccountManagementService_UpdateAccountSettings * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_UpdateAccountSettings * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_UpdateAccountSettings *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_AuthenticateMember : USSoapOperation {
	DSAccountManagementService_AuthenticateMember * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_AuthenticateMember * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_AuthenticateMember *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_AuthenticateMemberEx : USSoapOperation {
	DSAccountManagementService_AuthenticateMemberEx * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_AuthenticateMemberEx * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_AuthenticateMemberEx *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_GetMemberSettings : USSoapOperation {
	DSAccountManagementService_GetMemberSettings * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetMemberSettings * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetMemberSettings *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_UpdateMemberSettings : USSoapOperation {
	DSAccountManagementService_UpdateMemberSettings * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_UpdateMemberSettings * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_UpdateMemberSettings *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_CloseMembers : USSoapOperation {
	DSAccountManagementService_CloseMembers * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_CloseMembers * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_CloseMembers *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_CheckAccountMember : USSoapOperation {
	DSAccountManagementService_CheckAccountMember * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_CheckAccountMember * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_CheckAccountMember *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_ActivateSalesforceInstance : USSoapOperation {
	DSAccountManagementService_ActivateSalesforceInstance * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_ActivateSalesforceInstance * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_ActivateSalesforceInstance *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_ChangePassword : USSoapOperation {
	DSAccountManagementService_ChangePassword * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_ChangePassword * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_ChangePassword *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_GetSignatures : USSoapOperation {
	DSAccountManagementService_GetSignatures * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetSignatures * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetSignatures *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_SetSignatureImages : USSoapOperation {
	DSAccountManagementService_SetSignatureImages * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_SetSignatureImages * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_SetSignatureImages *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_CloseSignature : USSoapOperation {
	DSAccountManagementService_CloseSignature * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_CloseSignature * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_CloseSignature *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_Ping : USSoapOperation {
	DSAccountManagementService_Ping * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_Ping * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_Ping *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_InitializeClientAccount : USSoapOperation {
	DSAccountManagementService_InitializeClientAccount * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_InitializeClientAccount * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_InitializeClientAccount *)aParameters
;
@end
@interface DSAccountManagementServiceSoapBinding_envelope : NSObject {
}
+ (DSAccountManagementServiceSoapBinding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements bodyKeys:(NSArray *)bodyKeys;
@end
@class USSoapResponse;
@class USSoapOperation;
@interface DSAccountManagementServiceSoap12Binding : USSoapBinding {
}
- (USSoapResponse *)UpgradeRecipientAccountUsingParameters:(DSAccountManagementService_UpgradeRecipientAccount *)aParameters ;
- (USSoapOperation *)UpgradeRecipientAccountAsyncUsingParameters:(DSAccountManagementService_UpgradeRecipientAccount *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)NewSocialAccountUsingParameters:(DSAccountManagementService_NewSocialAccount *)aParameters ;
- (USSoapOperation *)NewSocialAccountAsyncUsingParameters:(DSAccountManagementService_NewSocialAccount *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)NewAccountUsingParameters:(DSAccountManagementService_NewAccount *)aParameters ;
- (USSoapOperation *)NewAccountAsyncUsingParameters:(DSAccountManagementService_NewAccount *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)AddMembersToAccountUsingParameters:(DSAccountManagementService_AddMembersToAccount *)aParameters ;
- (USSoapOperation *)AddMembersToAccountAsyncUsingParameters:(DSAccountManagementService_AddMembersToAccount *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetPlanPricingInformationUsingParameters:(DSAccountManagementService_GetPlanPricingInformation *)aParameters ;
- (USSoapOperation *)GetPlanPricingInformationAsyncUsingParameters:(DSAccountManagementService_GetPlanPricingInformation *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetSuccessorPlanInformationUsingParameters:(DSAccountManagementService_GetSuccessorPlanInformation *)aParameters ;
- (USSoapOperation *)GetSuccessorPlanInformationAsyncUsingParameters:(DSAccountManagementService_GetSuccessorPlanInformation *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetPlanGroupInformationUsingParameters:(DSAccountManagementService_GetPlanGroupInformation *)aParameters ;
- (USSoapOperation *)GetPlanGroupInformationAsyncUsingParameters:(DSAccountManagementService_GetPlanGroupInformation *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetMembershipSummaryUsingParameters:(DSAccountManagementService_GetMembershipSummary *)aParameters ;
- (USSoapOperation *)GetMembershipSummaryAsyncUsingParameters:(DSAccountManagementService_GetMembershipSummary *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)ChangeAccountPricePlanUsingParameters:(DSAccountManagementService_ChangeAccountPricePlan *)aParameters ;
- (USSoapOperation *)ChangeAccountPricePlanAsyncUsingParameters:(DSAccountManagementService_ChangeAccountPricePlan *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetProvisioningInformationUsingParameters:(DSAccountManagementService_GetProvisioningInformation *)aParameters ;
- (USSoapOperation *)GetProvisioningInformationAsyncUsingParameters:(DSAccountManagementService_GetProvisioningInformation *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)SetConnectCredentialsUsingParameters:(DSAccountManagementService_SetConnectCredentials *)aParameters ;
- (USSoapOperation *)SetConnectCredentialsAsyncUsingParameters:(DSAccountManagementService_SetConnectCredentials *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetPlanTypeUsingParameters:(DSAccountManagementService_GetPlanType *)aParameters ;
- (USSoapOperation *)GetPlanTypeAsyncUsingParameters:(DSAccountManagementService_GetPlanType *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetAccountInformationUsingParameters:(DSAccountManagementService_GetAccountInformation *)aParameters ;
- (USSoapOperation *)GetAccountInformationAsyncUsingParameters:(DSAccountManagementService_GetAccountInformation *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetAccountDistributorCodeUsingParameters:(DSAccountManagementService_GetAccountDistributorCode *)aParameters ;
- (USSoapOperation *)GetAccountDistributorCodeAsyncUsingParameters:(DSAccountManagementService_GetAccountDistributorCode *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetConnectCredentialsUsingParameters:(DSAccountManagementService_GetConnectCredentials *)aParameters ;
- (USSoapOperation *)GetConnectCredentialsAsyncUsingParameters:(DSAccountManagementService_GetConnectCredentials *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetEncryptedPasswordUsingParameters:(DSAccountManagementService_GetEncryptedPassword *)aParameters ;
- (USSoapOperation *)GetEncryptedPasswordAsyncUsingParameters:(DSAccountManagementService_GetEncryptedPassword *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetAccountSettingsUsingParameters:(DSAccountManagementService_GetAccountSettings *)aParameters ;
- (USSoapOperation *)GetAccountSettingsAsyncUsingParameters:(DSAccountManagementService_GetAccountSettings *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)UpdateAccountSettingsUsingParameters:(DSAccountManagementService_UpdateAccountSettings *)aParameters ;
- (USSoapOperation *)UpdateAccountSettingsAsyncUsingParameters:(DSAccountManagementService_UpdateAccountSettings *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)AuthenticateMemberUsingParameters:(DSAccountManagementService_AuthenticateMember *)aParameters ;
- (USSoapOperation *)AuthenticateMemberAsyncUsingParameters:(DSAccountManagementService_AuthenticateMember *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)AuthenticateMemberExUsingParameters:(DSAccountManagementService_AuthenticateMemberEx *)aParameters ;
- (USSoapOperation *)AuthenticateMemberExAsyncUsingParameters:(DSAccountManagementService_AuthenticateMemberEx *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetMemberSettingsUsingParameters:(DSAccountManagementService_GetMemberSettings *)aParameters ;
- (USSoapOperation *)GetMemberSettingsAsyncUsingParameters:(DSAccountManagementService_GetMemberSettings *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)UpdateMemberSettingsUsingParameters:(DSAccountManagementService_UpdateMemberSettings *)aParameters ;
- (USSoapOperation *)UpdateMemberSettingsAsyncUsingParameters:(DSAccountManagementService_UpdateMemberSettings *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)CloseMembersUsingParameters:(DSAccountManagementService_CloseMembers *)aParameters ;
- (USSoapOperation *)CloseMembersAsyncUsingParameters:(DSAccountManagementService_CloseMembers *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)CheckAccountMemberUsingParameters:(DSAccountManagementService_CheckAccountMember *)aParameters ;
- (USSoapOperation *)CheckAccountMemberAsyncUsingParameters:(DSAccountManagementService_CheckAccountMember *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)ActivateSalesforceInstanceUsingParameters:(DSAccountManagementService_ActivateSalesforceInstance *)aParameters ;
- (USSoapOperation *)ActivateSalesforceInstanceAsyncUsingParameters:(DSAccountManagementService_ActivateSalesforceInstance *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)ChangePasswordUsingParameters:(DSAccountManagementService_ChangePassword *)aParameters ;
- (USSoapOperation *)ChangePasswordAsyncUsingParameters:(DSAccountManagementService_ChangePassword *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetSignaturesUsingParameters:(DSAccountManagementService_GetSignatures *)aParameters ;
- (USSoapOperation *)GetSignaturesAsyncUsingParameters:(DSAccountManagementService_GetSignatures *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)SetSignatureImagesUsingParameters:(DSAccountManagementService_SetSignatureImages *)aParameters ;
- (USSoapOperation *)SetSignatureImagesAsyncUsingParameters:(DSAccountManagementService_SetSignatureImages *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)CloseSignatureUsingParameters:(DSAccountManagementService_CloseSignature *)aParameters ;
- (USSoapOperation *)CloseSignatureAsyncUsingParameters:(DSAccountManagementService_CloseSignature *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)PingUsingParameters:(DSAccountManagementService_Ping *)aParameters ;
- (USSoapOperation *)PingAsyncUsingParameters:(DSAccountManagementService_Ping *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)InitializeClientAccountUsingParameters:(DSAccountManagementService_InitializeClientAccount *)aParameters ;
- (USSoapOperation *)InitializeClientAccountAsyncUsingParameters:(DSAccountManagementService_InitializeClientAccount *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
@end
@interface DSAccountManagementServiceSoap12Binding_UpgradeRecipientAccount : USSoapOperation {
	DSAccountManagementService_UpgradeRecipientAccount * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_UpgradeRecipientAccount * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_UpgradeRecipientAccount *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_NewSocialAccount : USSoapOperation {
	DSAccountManagementService_NewSocialAccount * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_NewSocialAccount * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_NewSocialAccount *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_NewAccount : USSoapOperation {
	DSAccountManagementService_NewAccount * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_NewAccount * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_NewAccount *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_AddMembersToAccount : USSoapOperation {
	DSAccountManagementService_AddMembersToAccount * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_AddMembersToAccount * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_AddMembersToAccount *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_GetPlanPricingInformation : USSoapOperation {
	DSAccountManagementService_GetPlanPricingInformation * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetPlanPricingInformation * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetPlanPricingInformation *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_GetSuccessorPlanInformation : USSoapOperation {
	DSAccountManagementService_GetSuccessorPlanInformation * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetSuccessorPlanInformation * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetSuccessorPlanInformation *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_GetPlanGroupInformation : USSoapOperation {
	DSAccountManagementService_GetPlanGroupInformation * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetPlanGroupInformation * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetPlanGroupInformation *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_GetMembershipSummary : USSoapOperation {
	DSAccountManagementService_GetMembershipSummary * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetMembershipSummary * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetMembershipSummary *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_ChangeAccountPricePlan : USSoapOperation {
	DSAccountManagementService_ChangeAccountPricePlan * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_ChangeAccountPricePlan * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_ChangeAccountPricePlan *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_GetProvisioningInformation : USSoapOperation {
	DSAccountManagementService_GetProvisioningInformation * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetProvisioningInformation * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetProvisioningInformation *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_SetConnectCredentials : USSoapOperation {
	DSAccountManagementService_SetConnectCredentials * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_SetConnectCredentials * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_SetConnectCredentials *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_GetPlanType : USSoapOperation {
	DSAccountManagementService_GetPlanType * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetPlanType * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetPlanType *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_GetAccountInformation : USSoapOperation {
	DSAccountManagementService_GetAccountInformation * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetAccountInformation * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetAccountInformation *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_GetAccountDistributorCode : USSoapOperation {
	DSAccountManagementService_GetAccountDistributorCode * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetAccountDistributorCode * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetAccountDistributorCode *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_GetConnectCredentials : USSoapOperation {
	DSAccountManagementService_GetConnectCredentials * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetConnectCredentials * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetConnectCredentials *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_GetEncryptedPassword : USSoapOperation {
	DSAccountManagementService_GetEncryptedPassword * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetEncryptedPassword * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetEncryptedPassword *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_GetAccountSettings : USSoapOperation {
	DSAccountManagementService_GetAccountSettings * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetAccountSettings * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetAccountSettings *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_UpdateAccountSettings : USSoapOperation {
	DSAccountManagementService_UpdateAccountSettings * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_UpdateAccountSettings * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_UpdateAccountSettings *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_AuthenticateMember : USSoapOperation {
	DSAccountManagementService_AuthenticateMember * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_AuthenticateMember * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_AuthenticateMember *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_AuthenticateMemberEx : USSoapOperation {
	DSAccountManagementService_AuthenticateMemberEx * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_AuthenticateMemberEx * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_AuthenticateMemberEx *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_GetMemberSettings : USSoapOperation {
	DSAccountManagementService_GetMemberSettings * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetMemberSettings * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetMemberSettings *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_UpdateMemberSettings : USSoapOperation {
	DSAccountManagementService_UpdateMemberSettings * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_UpdateMemberSettings * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_UpdateMemberSettings *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_CloseMembers : USSoapOperation {
	DSAccountManagementService_CloseMembers * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_CloseMembers * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_CloseMembers *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_CheckAccountMember : USSoapOperation {
	DSAccountManagementService_CheckAccountMember * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_CheckAccountMember * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_CheckAccountMember *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_ActivateSalesforceInstance : USSoapOperation {
	DSAccountManagementService_ActivateSalesforceInstance * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_ActivateSalesforceInstance * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_ActivateSalesforceInstance *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_ChangePassword : USSoapOperation {
	DSAccountManagementService_ChangePassword * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_ChangePassword * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_ChangePassword *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_GetSignatures : USSoapOperation {
	DSAccountManagementService_GetSignatures * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_GetSignatures * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_GetSignatures *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_SetSignatureImages : USSoapOperation {
	DSAccountManagementService_SetSignatureImages * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_SetSignatureImages * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_SetSignatureImages *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_CloseSignature : USSoapOperation {
	DSAccountManagementService_CloseSignature * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_CloseSignature * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_CloseSignature *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_Ping : USSoapOperation {
	DSAccountManagementService_Ping * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_Ping * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_Ping *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_InitializeClientAccount : USSoapOperation {
	DSAccountManagementService_InitializeClientAccount * parameters;
}
@property (nonatomic, retain) DSAccountManagementService_InitializeClientAccount * parameters;
- (id)initWithBinding:(DSAccountManagementServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAccountManagementService_InitializeClientAccount *)aParameters
;
@end
@interface DSAccountManagementServiceSoap12Binding_envelope : NSObject {
}
+ (DSAccountManagementServiceSoap12Binding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements bodyKeys:(NSArray *)bodyKeys;
@end
