#import <Foundation/Foundation.h>
#import "USAdditions.h"
#import <libxml/tree.h>
#import "USGlobals.h"
#import <objc/runtime.h>
@class DSAPIService_CreateEnvelope;
@class DSAPIService_Envelope;
@class DSAPIService_ArrayOfDocument;
@class DSAPIService_ArrayOfRecipient;
@class DSAPIService_ArrayOfTab;
@class DSAPIService_ArrayOfCustomField;
@class DSAPIService_VaultingOptions;
@class DSAPIService_Notification;
@class DSAPIService_ArrayOfAttachment;
@class DSAPIService_EventNotification;
@class DSAPIService_Document;
@class DSAPIService_ArrayOfMatchBox;
@class DSAPIService_MatchBox;
@class DSAPIService_Recipient;
@class DSAPIService_RecipientPhoneAuthentication;
@class DSAPIService_RecipientSignatureInfo;
@class DSAPIService_RecipientCaptiveInfo;
@class DSAPIService_ArrayOfString1;
@class DSAPIService_IDCheckInformationInput;
@class DSAPIService_RecipientEmailNotification;
@class DSAPIService_ArrayOfString;
@class DSAPIService_AddressInformationInput;
@class DSAPIService_DOBInformationInput;
@class DSAPIService_SSN4InformationInput;
@class DSAPIService_SSN9InformationInput;
@class DSAPIService_AddressInformation;
@class DSAPIService_DOBInformation;
@class DSAPIService_SSN4Information;
@class DSAPIService_SSN9Information;
@class DSAPIService_Attachment;
@class DSAPIService_Tab;
@class DSAPIService_AnchorTab;
@class DSAPIService_CustomField;
@class DSAPIService_Reminders;
@class DSAPIService_Expirations;
@class DSAPIService_ArrayOfEnvelopeEvent;
@class DSAPIService_EnvelopeEvent;
@class DSAPIService_CreateEnvelopeResponse;
@class DSAPIService_EnvelopeStatus;
@class DSAPIService_ArrayOfRecipientStatus;
@class DSAPIService_VaultingDetails;
@class DSAPIService_ArrayOfDocumentStatus;
@class DSAPIService_FormData;
@class DSAPIService_RecipientStatus;
@class DSAPIService_IDCheckInformation;
@class DSAPIService_AuthenticationStatus;
@class DSAPIService_ArrayOfTabStatus;
@class DSAPIService_RecipientStatusEsignAgreementInformation;
@class DSAPIService_EventResult;
@class DSAPIService_TabStatus;
@class DSAPIService_FormDataXfdf;
@class DSAPIService_ArrayOfFormDataXfdfField;
@class DSAPIService_FormDataXfdfField;
@class DSAPIService_DocumentStatus;
@class DSAPIService_CreateAndSendEnvelope;
@class DSAPIService_CreateAndSendEnvelopeResponse;
@class DSAPIService_SendEnvelope;
@class DSAPIService_SendEnvelopeResponse;
@class DSAPIService_CorrectAndResendEnvelope;
@class DSAPIService_Correction;
@class DSAPIService_EnvelopeSettings;
@class DSAPIService_ArrayOfRecipientCorrection;
@class DSAPIService_RecipientCorrection;
@class DSAPIService_RecipientCorrectionCorrectedCaptiveInfo;
@class DSAPIService_CorrectAndResendEnvelopeResponse;
@class DSAPIService_CorrectionStatus;
@class DSAPIService_ArrayOfRecipientCorrectionStatus;
@class DSAPIService_RecipientCorrectionStatus;
@class DSAPIService_RequestPDFNoWaterMark;
@class DSAPIService_RequestPDFNoWaterMarkResponse;
@class DSAPIService_EnvelopePDF;
@class DSAPIService_RequestPDF;
@class DSAPIService_RequestPDFResponse;
@class DSAPIService_RequestPDFWithCert;
@class DSAPIService_RequestPDFWithCertResponse;
@class DSAPIService_RequestCertificate;
@class DSAPIService_RequestCertificateResponse;
@class DSAPIService_DocumentPDFs;
@class DSAPIService_DocumentPDF;
@class DSAPIService_RequestDocumentPDFs;
@class DSAPIService_RequestDocumentPDFsResponse;
@class DSAPIService_RequestDocumentPDFsEx;
@class DSAPIService_RequestDocumentPDFsExResponse;
@class DSAPIService_RequestDocumentPDFsRecipientsView;
@class DSAPIService_RequestDocumentPDFsRecipientsViewResponse;
@class DSAPIService_RequestStatusEx;
@class DSAPIService_RequestStatusExResponse;
@class DSAPIService_RequestStatus;
@class DSAPIService_RequestStatusResponse;
@class DSAPIService_RequestStatusCodes;
@class DSAPIService_EnvelopeStatusFilter;
@class DSAPIService_UserInfo;
@class DSAPIService_EnvelopeStatusFilterBeginDateTime;
@class DSAPIService_ArrayOfEnvelopeStatusCode;
@class DSAPIService_ArrayOfString2;
@class DSAPIService_RequestStatusCodesResponse;
@class DSAPIService_FilteredEnvelopeStatusChanges;
@class DSAPIService_ArrayOfEnvelopeStatusChange;
@class DSAPIService_EnvelopeStatusChange;
@class DSAPIService_RequestStatusChanges;
@class DSAPIService_EnvelopeStatusChangeFilter;
@class DSAPIService_RequestStatusChangesResponse;
@class DSAPIService_RequestStatusesEx;
@class DSAPIService_RequestStatusesExResponse;
@class DSAPIService_FilteredEnvelopeStatuses;
@class DSAPIService_ArrayOfEnvelopeStatus;
@class DSAPIService_RequestStatuses;
@class DSAPIService_RequestStatusesResponse;
@class DSAPIService_GetRecipientEsignList;
@class DSAPIService_GetRecipientEsignListResponse;
@class DSAPIService_RecipientEsignList;
@class DSAPIService_ArrayOfRecipientEsign;
@class DSAPIService_RecipientEsign;
@class DSAPIService_GetRecipientList;
@class DSAPIService_GetRecipientListResponse;
@class DSAPIService_RecipientList;
@class DSAPIService_ArrayOfString3;
@class DSAPIService_GetRecipientAuthenticationStatusEx;
@class DSAPIService_GetRecipientAuthenticationStatusExArg;
@class DSAPIService_GetRecipientAuthenticationStatusExResponse;
@class DSAPIService_RecipientAuthenticationStatusEx;
@class DSAPIService_VoidEnvelope;
@class DSAPIService_VoidEnvelopeResponse;
@class DSAPIService_VoidEnvelopeStatus;
@class DSAPIService_MoveEnvelopes;
@class DSAPIService_MoveEnvelopesArg;
@class DSAPIService_FolderTypeInfo;
@class DSAPIService_MoveEnvelopesResponse;
@class DSAPIService_DeleteEnvelopes;
@class DSAPIService_DeleteEnvelopesArg;
@class DSAPIService_DeleteEnvelopesResponse;
@class DSAPIService_RequestRecipientToken;
@class DSAPIService_RequestRecipientTokenAuthenticationAssertion;
@class DSAPIService_RequestRecipientTokenClientURLs;
@class DSAPIService_RequestRecipientTokenResponse;
@class DSAPIService_TransferEnvelope;
@class DSAPIService_TransferEnvelopeResponse;
@class DSAPIService_TransferEnvelopeStatus;
@class DSAPIService_GetAccountMembershipFeaturesList;
@class DSAPIService_GetAccountMembershipFeaturesListResponse;
@class DSAPIService_AccountMembershipFeaturesList;
@class DSAPIService_ArrayOfString4;
@class DSAPIService_GetAccountSettingsList;
@class DSAPIService_GetAccountSettingsListResponse;
@class DSAPIService_AccountSettingsList;
@class DSAPIService_AccountSetting;
@class DSAPIService_AcknowledgeAuthoritativeCopyExport;
@class DSAPIService_AcknowledgeAuthoritativeCopyExportResponse;
@class DSAPIService_AuthoritativeCopyExportStatus;
@class DSAPIService_ExportAuthoritativeCopy;
@class DSAPIService_ExportAuthoritativeCopyResponse;
@class DSAPIService_AuthoritativeCopyExportDocuments;
@class DSAPIService_EnvelopeAuditEvents;
@class DSAPIService_EnvelopeAuditEventsResponse;
@class DSAPIService_EnvelopeAuditEventsResult;
@class DSAPIService_Ping;
@class DSAPIService_PingResponse;
@class DSAPIService_CreateEnvelopeFromTemplates;
@class DSAPIService_ArrayOfTemplateReference;
@class DSAPIService_ArrayOfRecipient1;
@class DSAPIService_EnvelopeInformation;
@class DSAPIService_TemplateReference;
@class DSAPIService_ArrayOfTemplateReferenceRoleAssignment;
@class DSAPIService_TemplateReferenceFieldData;
@class DSAPIService_TemplateReferenceRoleAssignment;
@class DSAPIService_ArrayOfTemplateReferenceFieldDataDataValue;
@class DSAPIService_TemplateReferenceFieldDataDataValue;
@class DSAPIService_CreateEnvelopeFromTemplatesResponse;
@class DSAPIService_CreateEnvelopeFromTemplatesAndForms;
@class DSAPIService_ArrayOfCompositeTemplate;
@class DSAPIService_CompositeTemplate;
@class DSAPIService_ArrayOfServerTemplate;
@class DSAPIService_ArrayOfInlineTemplate;
@class DSAPIService_PDFMetaDataTemplate;
@class DSAPIService_ServerTemplate;
@class DSAPIService_InlineTemplate;
@class DSAPIService_CreateEnvelopeFromTemplatesAndFormsResponse;
@class DSAPIService_GetStatusInDocuSignConnectFormat;
@class DSAPIService_GetStatusInDocuSignConnectFormatResponse;
@class DSAPIService_DocuSignEnvelopeInformation;
@class DSAPIService_ArrayOfDocumentPDF;
@class DSAPIService_PurgeDocuments;
@class DSAPIService_PurgeDocumentsResponse;
@class DSAPIService_PurgeDocumentStatus;
@class DSAPIService_SaveTemplate;
@class DSAPIService_EnvelopeTemplate;
@class DSAPIService_EnvelopeTemplateDefinition;
@class DSAPIService_SaveTemplateResponse;
@class DSAPIService_SaveTemplateResult;
@class DSAPIService_UploadTemplate;
@class DSAPIService_UploadTemplateResponse;
@class DSAPIService_RequestTemplates;
@class DSAPIService_RequestTemplatesResponse;
@class DSAPIService_EnvelopeTemplates;
@class DSAPIService_RequestTemplate;
@class DSAPIService_RequestTemplateResponse;
@class DSAPIService_RequestTemplateList;
@class DSAPIService_ArrayOfString5;
@class DSAPIService_RequestTemplateListResponse;
@class DSAPIService_ArrayOfEnvelopeTemplate;
@class DSAPIService_GetAuthenticationToken;
@class DSAPIService_GetAuthenticationTokenResponse;
@class DSAPIService_GetAddressBookItems;
@class DSAPIService_GetAddressBookItemsResponse;
@class DSAPIService_ArrayOfAddressBookItem;
@class DSAPIService_AddressBookItem;
@class DSAPIService_AddressBookPhoneNumber;
@class DSAPIService_UpdateAddressBookItems;
@class DSAPIService_UpdateAddressBookItemsResponse;
@class DSAPIService_UpdateAddressBookResult;
@class DSAPIService_ArrayOfAddressBookItem1;
@class DSAPIService_RemoveAddressBookItems;
@class DSAPIService_ArrayOfAddressBookRemoveItem;
@class DSAPIService_AddressBookRemoveItem;
@class DSAPIService_RemoveAddressBookItemsResponse;
@class DSAPIService_SynchEnvelope;
@class DSAPIService_SynchEnvelopeResponse;
@class DSAPIService_SynchEnvelopeStatus;
@class DSAPIService_RequestSenderToken;
@class DSAPIService_RequestSenderTokenResponse;
@class DSAPIService_RequestCorrectToken;
@class DSAPIService_RequestCorrectTokenResponse;
@class DSAPIService_GetFolderItems;
@class DSAPIService_FolderFilter;
@class DSAPIService_GetFolderItemsResponse;
@class DSAPIService_FolderResults;
@class DSAPIService_ArrayOfFolderItem;
@class DSAPIService_FolderItem;
@class DSAPIService_GetFolderList;
@class DSAPIService_FoldersFilter;
@class DSAPIService_GetFolderListResponse;
@class DSAPIService_AvailableFolders;
@class DSAPIService_ArrayOfFolder;
@class DSAPIService_Folder;
@class DSAPIService_RequestEnvelope;
@class DSAPIService_RequestEnvelopeResponse;
@class DSAPIService_GetConnectFailures;
@class DSAPIService_ConnectFailuresFilter;
@class DSAPIService_GetConnectFailuresResponse;
@class DSAPIService_ArrayOfConnectFailure;
@class DSAPIService_ConnectFailure;
@class DSAPIService_PublishConnectFailures;
@class DSAPIService_PublishConnectFailuresFilter;
@class DSAPIService_PublishConnectFailuresResponse;
@class DSAPIService_ArrayOfPublishConnectFailuresResult;
@class DSAPIService_PublishConnectFailuresResult;
@interface DSAPIService_MatchBox : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSNumber * PageNumber;
	NSNumber * XPosition;
	NSNumber * YPosition;
	NSNumber * Width;
	NSNumber * Height;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_MatchBox *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSNumber * PageNumber;
@property (nonatomic, retain) NSNumber * XPosition;
@property (nonatomic, retain) NSNumber * YPosition;
@property (nonatomic, retain) NSNumber * Width;
@property (nonatomic, retain) NSNumber * Height;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfMatchBox : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *MatchBox;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfMatchBox *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addMatchBox:(DSAPIService_MatchBox *)toAdd;
@property (nonatomic, readonly) NSMutableArray * MatchBox;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_Document : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSNumber * ID_;
	NSString * Name;
	NSData * PDFBytes;
	NSString * Password;
	USBoolean * TransformPdfFields;
	NSString * FileExtension;
	DSAPIService_ArrayOfMatchBox * MatchBoxes;
	NSString * AttachmentDescription;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_Document *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSNumber * ID_;
@property (nonatomic, retain) NSString * Name;
@property (nonatomic, retain) NSData * PDFBytes;
@property (nonatomic, retain) NSString * Password;
@property (nonatomic, retain) USBoolean * TransformPdfFields;
@property (nonatomic, retain) NSString * FileExtension;
@property (nonatomic, retain) DSAPIService_ArrayOfMatchBox * MatchBoxes;
@property (nonatomic, retain) NSString * AttachmentDescription;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfDocument : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *Document;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfDocument *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addDocument:(DSAPIService_Document *)toAdd;
@property (nonatomic, readonly) NSMutableArray * Document;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAPIService_RecipientTypeCode_none = 0,
	DSAPIService_RecipientTypeCode_Signer,
	DSAPIService_RecipientTypeCode_Agent,
	DSAPIService_RecipientTypeCode_Editor,
	DSAPIService_RecipientTypeCode_CarbonCopy,
	DSAPIService_RecipientTypeCode_CertifiedDelivery,
	DSAPIService_RecipientTypeCode_InPersonSigner,
} DSAPIService_RecipientTypeCode;
DSAPIService_RecipientTypeCode DSAPIService_RecipientTypeCode_enumFromString(NSString *string);
NSString * DSAPIService_RecipientTypeCode_stringFromEnum(DSAPIService_RecipientTypeCode enumValue);
@interface DSAPIService_ArrayOfString : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *SenderProvidedNumber;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfString *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addSenderProvidedNumber:(NSString *)toAdd;
@property (nonatomic, readonly) NSMutableArray * SenderProvidedNumber;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RecipientPhoneAuthentication : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * RecipMayProvideNumber;
	USBoolean * ValidateRecipProvidedNumber;
	USBoolean * RecordVoicePrint;
	DSAPIService_ArrayOfString * SenderProvidedNumbers;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RecipientPhoneAuthentication *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * RecipMayProvideNumber;
@property (nonatomic, retain) USBoolean * ValidateRecipProvidedNumber;
@property (nonatomic, retain) USBoolean * RecordVoicePrint;
@property (nonatomic, retain) DSAPIService_ArrayOfString * SenderProvidedNumbers;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAPIService_FontStyleCode_none = 0,
	DSAPIService_FontStyleCode_RageItalic,
	DSAPIService_FontStyleCode_Mistral,
	DSAPIService_FontStyleCode_BradleyHandITC,
	DSAPIService_FontStyleCode_KaufmannBT,
	DSAPIService_FontStyleCode_Freehand575,
	DSAPIService_FontStyleCode_LuciaBT,
	DSAPIService_FontStyleCode_DocuSign1,
	DSAPIService_FontStyleCode_DocuSign2,
	DSAPIService_FontStyleCode_DocuSign3,
	DSAPIService_FontStyleCode_DocuSign4,
	DSAPIService_FontStyleCode_DocuSign5,
	DSAPIService_FontStyleCode_DocuSign6,
	DSAPIService_FontStyleCode_DocuSign7,
	DSAPIService_FontStyleCode_DocuSign8,
} DSAPIService_FontStyleCode;
DSAPIService_FontStyleCode DSAPIService_FontStyleCode_enumFromString(NSString *string);
NSString * DSAPIService_FontStyleCode_stringFromEnum(DSAPIService_FontStyleCode enumValue);
@interface DSAPIService_RecipientSignatureInfo : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * SignatureName;
	NSString * SignatureInitials;
	DSAPIService_FontStyleCode FontStyle;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RecipientSignatureInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * SignatureName;
@property (nonatomic, retain) NSString * SignatureInitials;
@property (nonatomic, assign) DSAPIService_FontStyleCode FontStyle;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RecipientCaptiveInfo : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * ClientUserId;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RecipientCaptiveInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * ClientUserId;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfString1 : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *CustomField;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfString1 *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addCustomField:(NSString *)toAdd;
@property (nonatomic, readonly) NSMutableArray * CustomField;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_AddressInformation : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * Street1;
	NSString * Street2;
	NSString * City;
	NSString * State;
	NSString * Zip;
	NSString * ZipPlus4;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_AddressInformation *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * Street1;
@property (nonatomic, retain) NSString * Street2;
@property (nonatomic, retain) NSString * City;
@property (nonatomic, retain) NSString * State;
@property (nonatomic, retain) NSString * Zip;
@property (nonatomic, retain) NSString * ZipPlus4;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAPIService_DisplayLevelCode_none = 0,
	DSAPIService_DisplayLevelCode_ReadOnly,
	DSAPIService_DisplayLevelCode_Editable,
	DSAPIService_DisplayLevelCode_DoNotDisplay,
} DSAPIService_DisplayLevelCode;
DSAPIService_DisplayLevelCode DSAPIService_DisplayLevelCode_enumFromString(NSString *string);
NSString * DSAPIService_DisplayLevelCode_stringFromEnum(DSAPIService_DisplayLevelCode enumValue);
@interface DSAPIService_AddressInformationInput : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_AddressInformation * AddressInformation;
	DSAPIService_DisplayLevelCode DisplayLevel;
	USBoolean * ReceiveInResponse;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_AddressInformationInput *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_AddressInformation * AddressInformation;
@property (nonatomic, assign) DSAPIService_DisplayLevelCode DisplayLevel;
@property (nonatomic, retain) USBoolean * ReceiveInResponse;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_DOBInformation : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSDate * DOB;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_DOBInformation *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSDate * DOB;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_DOBInformationInput : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_DOBInformation * DOBInformation;
	DSAPIService_DisplayLevelCode DisplayLevel;
	USBoolean * ReceiveInResponse;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_DOBInformationInput *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_DOBInformation * DOBInformation;
@property (nonatomic, assign) DSAPIService_DisplayLevelCode DisplayLevel;
@property (nonatomic, retain) USBoolean * ReceiveInResponse;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_SSN4Information : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * SSN4;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_SSN4Information *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * SSN4;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_SSN4InformationInput : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_SSN4Information * SSN4Information;
	DSAPIService_DisplayLevelCode DisplayLevel;
	USBoolean * ReceiveInResponse;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_SSN4InformationInput *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_SSN4Information * SSN4Information;
@property (nonatomic, assign) DSAPIService_DisplayLevelCode DisplayLevel;
@property (nonatomic, retain) USBoolean * ReceiveInResponse;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_SSN9Information : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * SSN9;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_SSN9Information *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * SSN9;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_SSN9InformationInput : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_SSN9Information * SSN9Information;
	DSAPIService_DisplayLevelCode DisplayLevel;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_SSN9InformationInput *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_SSN9Information * SSN9Information;
@property (nonatomic, assign) DSAPIService_DisplayLevelCode DisplayLevel;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_IDCheckInformationInput : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_AddressInformationInput * AddressInformationInput;
	DSAPIService_DOBInformationInput * DOBInformationInput;
	DSAPIService_SSN4InformationInput * SSN4InformationInput;
	DSAPIService_SSN9InformationInput * SSN9InformationInput;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_IDCheckInformationInput *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_AddressInformationInput * AddressInformationInput;
@property (nonatomic, retain) DSAPIService_DOBInformationInput * DOBInformationInput;
@property (nonatomic, retain) DSAPIService_SSN4InformationInput * SSN4InformationInput;
@property (nonatomic, retain) DSAPIService_SSN9InformationInput * SSN9InformationInput;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_Attachment : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSData * Data;
	NSString * Label;
	NSString * Type;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_Attachment *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSData * Data;
@property (nonatomic, retain) NSString * Label;
@property (nonatomic, retain) NSString * Type;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfAttachment : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *Attachment;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfAttachment *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addAttachment:(DSAPIService_Attachment *)toAdd;
@property (nonatomic, readonly) NSMutableArray * Attachment;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAPIService_SupportedLanguage_none = 0,
	DSAPIService_SupportedLanguage_ar,
	DSAPIService_SupportedLanguage_bg,
	DSAPIService_SupportedLanguage_cs,
	DSAPIService_SupportedLanguage_da,
	DSAPIService_SupportedLanguage_de,
	DSAPIService_SupportedLanguage_el,
	DSAPIService_SupportedLanguage_en,
	DSAPIService_SupportedLanguage_en_GB,
	DSAPIService_SupportedLanguage_es,
	DSAPIService_SupportedLanguage_es_MX,
	DSAPIService_SupportedLanguage_et,
	DSAPIService_SupportedLanguage_fa,
	DSAPIService_SupportedLanguage_fi,
	DSAPIService_SupportedLanguage_fr,
	DSAPIService_SupportedLanguage_fr_CA,
	DSAPIService_SupportedLanguage_he,
	DSAPIService_SupportedLanguage_hi,
	DSAPIService_SupportedLanguage_hr,
	DSAPIService_SupportedLanguage_hu,
	DSAPIService_SupportedLanguage_it,
	DSAPIService_SupportedLanguage_ja,
	DSAPIService_SupportedLanguage_ko,
	DSAPIService_SupportedLanguage_lt,
	DSAPIService_SupportedLanguage_lv,
	DSAPIService_SupportedLanguage_nl,
	DSAPIService_SupportedLanguage_no,
	DSAPIService_SupportedLanguage_pl,
	DSAPIService_SupportedLanguage_pt,
	DSAPIService_SupportedLanguage_pt_BR,
	DSAPIService_SupportedLanguage_ro,
	DSAPIService_SupportedLanguage_ru,
	DSAPIService_SupportedLanguage_sk,
	DSAPIService_SupportedLanguage_sl,
	DSAPIService_SupportedLanguage_sr,
	DSAPIService_SupportedLanguage_sv,
	DSAPIService_SupportedLanguage_tr,
	DSAPIService_SupportedLanguage_uk,
	DSAPIService_SupportedLanguage_zh_CN,
	DSAPIService_SupportedLanguage_zh_TW,
} DSAPIService_SupportedLanguage;
DSAPIService_SupportedLanguage DSAPIService_SupportedLanguage_enumFromString(NSString *string);
NSString * DSAPIService_SupportedLanguage_stringFromEnum(DSAPIService_SupportedLanguage enumValue);
@interface DSAPIService_RecipientEmailNotification : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * Subject;
	NSString * EmailBlurb;
	DSAPIService_SupportedLanguage Language;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RecipientEmailNotification *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * Subject;
@property (nonatomic, retain) NSString * EmailBlurb;
@property (nonatomic, assign) DSAPIService_SupportedLanguage Language;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_Recipient : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSNumber * ID_;
	NSString * UserName;
	NSString * SignerName;
	NSString * Email;
	DSAPIService_RecipientTypeCode Type;
	NSString * AccessCode;
	USBoolean * AddAccessCodeToEmail;
	USBoolean * RequireIDLookup;
	NSString * IDCheckConfigurationName;
	USBoolean * LiveIDRecipientAuthentication;
	USBoolean * FacebookRecipientAuthentication;
	USBoolean * LinkedinRecipientAuthentication;
	USBoolean * GoogleRecipientAuthentication;
	USBoolean * SalesforceRecipientAuthentication;
	USBoolean * TwitterRecipientAuthentication;
	USBoolean * YahooRecipientAuthentication;
	USBoolean * OpenIDRecipientAuthentication;
	USBoolean * AnySocialIDRecipientAuthentication;
	DSAPIService_RecipientPhoneAuthentication * PhoneAuthentication;
	DSAPIService_RecipientSignatureInfo * SignatureInfo;
	DSAPIService_RecipientCaptiveInfo * CaptiveInfo;
	DSAPIService_ArrayOfString1 * CustomFields;
	NSNumber * RoutingOrder;
	DSAPIService_IDCheckInformationInput * IDCheckInformationInput;
	USBoolean * AutoNavigation;
	DSAPIService_ArrayOfAttachment * RecipientAttachment;
	NSString * Note;
	NSString * RoleName;
	USBoolean * TemplateLocked;
	USBoolean * TemplateRequired;
	USBoolean * TemplateAccessCodeRequired;
	USBoolean * DefaultRecipient;
	DSAPIService_RecipientEmailNotification * EmailNotification;
	USBoolean * AgentCanEditEmail;
	USBoolean * AgentCanEditName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_Recipient *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSNumber * ID_;
@property (nonatomic, retain) NSString * UserName;
@property (nonatomic, retain) NSString * SignerName;
@property (nonatomic, retain) NSString * Email;
@property (nonatomic, assign) DSAPIService_RecipientTypeCode Type;
@property (nonatomic, retain) NSString * AccessCode;
@property (nonatomic, retain) USBoolean * AddAccessCodeToEmail;
@property (nonatomic, retain) USBoolean * RequireIDLookup;
@property (nonatomic, retain) NSString * IDCheckConfigurationName;
@property (nonatomic, retain) USBoolean * LiveIDRecipientAuthentication;
@property (nonatomic, retain) USBoolean * FacebookRecipientAuthentication;
@property (nonatomic, retain) USBoolean * LinkedinRecipientAuthentication;
@property (nonatomic, retain) USBoolean * GoogleRecipientAuthentication;
@property (nonatomic, retain) USBoolean * SalesforceRecipientAuthentication;
@property (nonatomic, retain) USBoolean * TwitterRecipientAuthentication;
@property (nonatomic, retain) USBoolean * YahooRecipientAuthentication;
@property (nonatomic, retain) USBoolean * OpenIDRecipientAuthentication;
@property (nonatomic, retain) USBoolean * AnySocialIDRecipientAuthentication;
@property (nonatomic, retain) DSAPIService_RecipientPhoneAuthentication * PhoneAuthentication;
@property (nonatomic, retain) DSAPIService_RecipientSignatureInfo * SignatureInfo;
@property (nonatomic, retain) DSAPIService_RecipientCaptiveInfo * CaptiveInfo;
@property (nonatomic, retain) DSAPIService_ArrayOfString1 * CustomFields;
@property (nonatomic, retain) NSNumber * RoutingOrder;
@property (nonatomic, retain) DSAPIService_IDCheckInformationInput * IDCheckInformationInput;
@property (nonatomic, retain) USBoolean * AutoNavigation;
@property (nonatomic, retain) DSAPIService_ArrayOfAttachment * RecipientAttachment;
@property (nonatomic, retain) NSString * Note;
@property (nonatomic, retain) NSString * RoleName;
@property (nonatomic, retain) USBoolean * TemplateLocked;
@property (nonatomic, retain) USBoolean * TemplateRequired;
@property (nonatomic, retain) USBoolean * TemplateAccessCodeRequired;
@property (nonatomic, retain) USBoolean * DefaultRecipient;
@property (nonatomic, retain) DSAPIService_RecipientEmailNotification * EmailNotification;
@property (nonatomic, retain) USBoolean * AgentCanEditEmail;
@property (nonatomic, retain) USBoolean * AgentCanEditName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfRecipient : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *Recipient;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfRecipient *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addRecipient:(DSAPIService_Recipient *)toAdd;
@property (nonatomic, readonly) NSMutableArray * Recipient;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAPIService_UnitTypeCode_none = 0,
	DSAPIService_UnitTypeCode_Pixels,
	DSAPIService_UnitTypeCode_Mms,
	DSAPIService_UnitTypeCode_Cms,
	DSAPIService_UnitTypeCode_Inches,
} DSAPIService_UnitTypeCode;
DSAPIService_UnitTypeCode DSAPIService_UnitTypeCode_enumFromString(NSString *string);
NSString * DSAPIService_UnitTypeCode_stringFromEnum(DSAPIService_UnitTypeCode enumValue);
@interface DSAPIService_AnchorTab : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AnchorTabString;
	NSNumber * XOffset;
	NSNumber * YOffset;
	DSAPIService_UnitTypeCode Unit;
	USBoolean * IgnoreIfNotPresent;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_AnchorTab *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AnchorTabString;
@property (nonatomic, retain) NSNumber * XOffset;
@property (nonatomic, retain) NSNumber * YOffset;
@property (nonatomic, assign) DSAPIService_UnitTypeCode Unit;
@property (nonatomic, retain) USBoolean * IgnoreIfNotPresent;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAPIService_TabTypeCode_none = 0,
	DSAPIService_TabTypeCode_InitialHere,
	DSAPIService_TabTypeCode_SignHere,
	DSAPIService_TabTypeCode_FullName,
	DSAPIService_TabTypeCode_Company,
	DSAPIService_TabTypeCode_Title,
	DSAPIService_TabTypeCode_DateSigned,
	DSAPIService_TabTypeCode_InitialHereOptional,
	DSAPIService_TabTypeCode_EnvelopeID,
	DSAPIService_TabTypeCode_Custom,
	DSAPIService_TabTypeCode_SignerAttachment,
	DSAPIService_TabTypeCode_SignHereOptional,
	DSAPIService_TabTypeCode_Approve,
	DSAPIService_TabTypeCode_Decline,
} DSAPIService_TabTypeCode;
DSAPIService_TabTypeCode DSAPIService_TabTypeCode_enumFromString(NSString *string);
NSString * DSAPIService_TabTypeCode_stringFromEnum(DSAPIService_TabTypeCode enumValue);
typedef enum {
	DSAPIService_CustomTabType_none = 0,
	DSAPIService_CustomTabType_Text,
	DSAPIService_CustomTabType_Checkbox,
	DSAPIService_CustomTabType_Radio,
	DSAPIService_CustomTabType_List,
	DSAPIService_CustomTabType_Date,
	DSAPIService_CustomTabType_Number,
	DSAPIService_CustomTabType_SSN,
	DSAPIService_CustomTabType_ZIP5,
	DSAPIService_CustomTabType_ZIP5DASH4,
	DSAPIService_CustomTabType_Email,
	DSAPIService_CustomTabType_Note,
} DSAPIService_CustomTabType;
DSAPIService_CustomTabType DSAPIService_CustomTabType_enumFromString(NSString *string);
NSString * DSAPIService_CustomTabType_stringFromEnum(DSAPIService_CustomTabType enumValue);
typedef enum {
	DSAPIService_Font_none = 0,
	DSAPIService_Font_Arial,
	DSAPIService_Font_ArialNarrow,
	DSAPIService_Font_Calibri,
	DSAPIService_Font_CourierNew,
	DSAPIService_Font_Garamond,
	DSAPIService_Font_Georgia,
	DSAPIService_Font_Helvetica,
	DSAPIService_Font_LucidaConsole,
	DSAPIService_Font_Tahoma,
	DSAPIService_Font_TimesNewRoman,
	DSAPIService_Font_Trebuchet,
	DSAPIService_Font_Verdana,
} DSAPIService_Font;
DSAPIService_Font DSAPIService_Font_enumFromString(NSString *string);
NSString * DSAPIService_Font_stringFromEnum(DSAPIService_Font enumValue);
typedef enum {
	DSAPIService_FontColor_none = 0,
	DSAPIService_FontColor_Black,
	DSAPIService_FontColor_BrightBlue,
	DSAPIService_FontColor_BrightRed,
	DSAPIService_FontColor_DarkRed,
	DSAPIService_FontColor_DarkGreen,
	DSAPIService_FontColor_Gold,
	DSAPIService_FontColor_Green,
	DSAPIService_FontColor_NavyBlue,
	DSAPIService_FontColor_Purple,
	DSAPIService_FontColor_White,
} DSAPIService_FontColor;
DSAPIService_FontColor DSAPIService_FontColor_enumFromString(NSString *string);
NSString * DSAPIService_FontColor_stringFromEnum(DSAPIService_FontColor enumValue);
typedef enum {
	DSAPIService_FontSize_none = 0,
	DSAPIService_FontSize_Size7,
	DSAPIService_FontSize_Size8,
	DSAPIService_FontSize_Size9,
	DSAPIService_FontSize_Size10,
	DSAPIService_FontSize_Size11,
	DSAPIService_FontSize_Size12,
	DSAPIService_FontSize_Size14,
	DSAPIService_FontSize_Size16,
	DSAPIService_FontSize_Size18,
	DSAPIService_FontSize_Size20,
	DSAPIService_FontSize_Size22,
	DSAPIService_FontSize_Size24,
	DSAPIService_FontSize_Size26,
	DSAPIService_FontSize_Size28,
	DSAPIService_FontSize_Size36,
	DSAPIService_FontSize_Size48,
	DSAPIService_FontSize_Size72,
} DSAPIService_FontSize;
DSAPIService_FontSize DSAPIService_FontSize_enumFromString(NSString *string);
NSString * DSAPIService_FontSize_stringFromEnum(DSAPIService_FontSize enumValue);
@interface DSAPIService_Tab : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSNumber * DocumentID;
	NSNumber * RecipientID;
	NSNumber * PageNumber;
	NSNumber * XPosition;
	NSNumber * YPosition;
	NSDecimalNumber * ScaleValue;
	DSAPIService_AnchorTab * AnchorTabItem;
	DSAPIService_TabTypeCode Type;
	NSString * Name;
	NSString * TabLabel;
	NSString * Value;
	DSAPIService_CustomTabType CustomTabType;
	NSNumber * CustomTabWidth;
	NSNumber * CustomTabHeight;
	USBoolean * CustomTabRequired;
	USBoolean * CustomTabLocked;
	USBoolean * CustomTabDisableAutoSize;
	NSString * CustomTabListItems;
	NSString * CustomTabListValues;
	NSString * CustomTabListSelectedValue;
	NSString * CustomTabRadioGroupName;
	NSString * CustomTabValidationPattern;
	NSString * CustomTabValidationMessage;
	USBoolean * TemplateLocked;
	USBoolean * TemplateRequired;
	NSString * ConditionalParentLabel;
	NSString * ConditionalParentValue;
	USBoolean * SharedTab;
	USBoolean * RequireInitialOnSharedTabChange;
	USBoolean * ConcealValueOnDocument;
	DSAPIService_Font Font;
	USBoolean * Bold;
	USBoolean * Italic;
	USBoolean * Underline;
	DSAPIService_FontColor FontColor;
	DSAPIService_FontSize FontSize;
	NSString * MergeFieldXml;
	USBoolean * IncludeNoteInEmail;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_Tab *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSNumber * DocumentID;
@property (nonatomic, retain) NSNumber * RecipientID;
@property (nonatomic, retain) NSNumber * PageNumber;
@property (nonatomic, retain) NSNumber * XPosition;
@property (nonatomic, retain) NSNumber * YPosition;
@property (nonatomic, retain) NSDecimalNumber * ScaleValue;
@property (nonatomic, retain) DSAPIService_AnchorTab * AnchorTabItem;
@property (nonatomic, assign) DSAPIService_TabTypeCode Type;
@property (nonatomic, retain) NSString * Name;
@property (nonatomic, retain) NSString * TabLabel;
@property (nonatomic, retain) NSString * Value;
@property (nonatomic, assign) DSAPIService_CustomTabType CustomTabType;
@property (nonatomic, retain) NSNumber * CustomTabWidth;
@property (nonatomic, retain) NSNumber * CustomTabHeight;
@property (nonatomic, retain) USBoolean * CustomTabRequired;
@property (nonatomic, retain) USBoolean * CustomTabLocked;
@property (nonatomic, retain) USBoolean * CustomTabDisableAutoSize;
@property (nonatomic, retain) NSString * CustomTabListItems;
@property (nonatomic, retain) NSString * CustomTabListValues;
@property (nonatomic, retain) NSString * CustomTabListSelectedValue;
@property (nonatomic, retain) NSString * CustomTabRadioGroupName;
@property (nonatomic, retain) NSString * CustomTabValidationPattern;
@property (nonatomic, retain) NSString * CustomTabValidationMessage;
@property (nonatomic, retain) USBoolean * TemplateLocked;
@property (nonatomic, retain) USBoolean * TemplateRequired;
@property (nonatomic, retain) NSString * ConditionalParentLabel;
@property (nonatomic, retain) NSString * ConditionalParentValue;
@property (nonatomic, retain) USBoolean * SharedTab;
@property (nonatomic, retain) USBoolean * RequireInitialOnSharedTabChange;
@property (nonatomic, retain) USBoolean * ConcealValueOnDocument;
@property (nonatomic, assign) DSAPIService_Font Font;
@property (nonatomic, retain) USBoolean * Bold;
@property (nonatomic, retain) USBoolean * Italic;
@property (nonatomic, retain) USBoolean * Underline;
@property (nonatomic, assign) DSAPIService_FontColor FontColor;
@property (nonatomic, assign) DSAPIService_FontSize FontSize;
@property (nonatomic, retain) NSString * MergeFieldXml;
@property (nonatomic, retain) USBoolean * IncludeNoteInEmail;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfTab : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *Tab;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfTab *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addTab:(DSAPIService_Tab *)toAdd;
@property (nonatomic, readonly) NSMutableArray * Tab;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAPIService_SigningLocationCode_none = 0,
	DSAPIService_SigningLocationCode_InPerson,
	DSAPIService_SigningLocationCode_Online,
} DSAPIService_SigningLocationCode;
DSAPIService_SigningLocationCode DSAPIService_SigningLocationCode_enumFromString(NSString *string);
NSString * DSAPIService_SigningLocationCode_stringFromEnum(DSAPIService_SigningLocationCode enumValue);
typedef enum {
	DSAPIService_CustomFieldType_none = 0,
	DSAPIService_CustomFieldType_Text,
	DSAPIService_CustomFieldType_List,
} DSAPIService_CustomFieldType;
DSAPIService_CustomFieldType DSAPIService_CustomFieldType_enumFromString(NSString *string);
NSString * DSAPIService_CustomFieldType_stringFromEnum(DSAPIService_CustomFieldType enumValue);
@interface DSAPIService_CustomField : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * Name;
	NSString * Show;
	NSString * Required;
	NSString * Value;
	DSAPIService_CustomFieldType CustomFieldType;
	NSString * ListItems;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_CustomField *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * Name;
@property (nonatomic, retain) NSString * Show;
@property (nonatomic, retain) NSString * Required;
@property (nonatomic, retain) NSString * Value;
@property (nonatomic, assign) DSAPIService_CustomFieldType CustomFieldType;
@property (nonatomic, retain) NSString * ListItems;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfCustomField : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *CustomField;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfCustomField *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addCustomField:(DSAPIService_CustomField *)toAdd;
@property (nonatomic, readonly) NSMutableArray * CustomField;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAPIService_VaultingModeCode_none = 0,
	DSAPIService_VaultingModeCode_None,
	DSAPIService_VaultingModeCode_EODeStore,
	DSAPIService_VaultingModeCode_EODAuthoritativeCopy,
} DSAPIService_VaultingModeCode;
DSAPIService_VaultingModeCode DSAPIService_VaultingModeCode_enumFromString(NSString *string);
NSString * DSAPIService_VaultingModeCode_stringFromEnum(DSAPIService_VaultingModeCode enumValue);
@interface DSAPIService_VaultingOptions : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_VaultingModeCode VaultingMode;
	NSString * EODTransactionName;
	NSString * EODDocumentName;
	NSString * EODDocumentDescription;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_VaultingOptions *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, assign) DSAPIService_VaultingModeCode VaultingMode;
@property (nonatomic, retain) NSString * EODTransactionName;
@property (nonatomic, retain) NSString * EODDocumentName;
@property (nonatomic, retain) NSString * EODDocumentDescription;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_Reminders : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * ReminderEnabled;
	NSNumber * ReminderDelay;
	NSNumber * ReminderFrequency;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_Reminders *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * ReminderEnabled;
@property (nonatomic, retain) NSNumber * ReminderDelay;
@property (nonatomic, retain) NSNumber * ReminderFrequency;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_Expirations : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * ExpireEnabled;
	NSNumber * ExpireAfter;
	NSNumber * ExpireWarn;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_Expirations *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * ExpireEnabled;
@property (nonatomic, retain) NSNumber * ExpireAfter;
@property (nonatomic, retain) NSNumber * ExpireWarn;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_Notification : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * UseAccountDefaults;
	DSAPIService_Reminders * Reminders;
	DSAPIService_Expirations * Expirations;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_Notification *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * UseAccountDefaults;
@property (nonatomic, retain) DSAPIService_Reminders * Reminders;
@property (nonatomic, retain) DSAPIService_Expirations * Expirations;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAPIService_EnvelopeEventStatusCode_none = 0,
	DSAPIService_EnvelopeEventStatusCode_Sent,
	DSAPIService_EnvelopeEventStatusCode_Delivered,
	DSAPIService_EnvelopeEventStatusCode_Completed,
	DSAPIService_EnvelopeEventStatusCode_Declined,
	DSAPIService_EnvelopeEventStatusCode_Voided,
} DSAPIService_EnvelopeEventStatusCode;
DSAPIService_EnvelopeEventStatusCode DSAPIService_EnvelopeEventStatusCode_enumFromString(NSString *string);
NSString * DSAPIService_EnvelopeEventStatusCode_stringFromEnum(DSAPIService_EnvelopeEventStatusCode enumValue);
@interface DSAPIService_EnvelopeEvent : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopeEventStatusCode EnvelopeEventStatusCode;
	USBoolean * IncludeDocuments;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_EnvelopeEvent *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, assign) DSAPIService_EnvelopeEventStatusCode EnvelopeEventStatusCode;
@property (nonatomic, retain) USBoolean * IncludeDocuments;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfEnvelopeEvent : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *EnvelopeEvent;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfEnvelopeEvent *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addEnvelopeEvent:(DSAPIService_EnvelopeEvent *)toAdd;
@property (nonatomic, readonly) NSMutableArray * EnvelopeEvent;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_EventNotification : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * URL;
	USBoolean * LoggingEnabled;
	USBoolean * RequireAcknowledgment;
	USBoolean * UseSoapInterface;
	NSString * SoapNameSpace;
	USBoolean * IncludeCertificateWithSoap;
	DSAPIService_ArrayOfEnvelopeEvent * EnvelopeEvents;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_EventNotification *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * URL;
@property (nonatomic, retain) USBoolean * LoggingEnabled;
@property (nonatomic, retain) USBoolean * RequireAcknowledgment;
@property (nonatomic, retain) USBoolean * UseSoapInterface;
@property (nonatomic, retain) NSString * SoapNameSpace;
@property (nonatomic, retain) USBoolean * IncludeCertificateWithSoap;
@property (nonatomic, retain) DSAPIService_ArrayOfEnvelopeEvent * EnvelopeEvents;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_Envelope : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * TransactionID;
	USBoolean * Asynchronous;
	NSString * AccountId;
	DSAPIService_ArrayOfDocument * Documents;
	DSAPIService_ArrayOfRecipient * Recipients;
	DSAPIService_ArrayOfTab * Tabs;
	NSString * Subject;
	NSString * EmailBlurb;
	DSAPIService_SigningLocationCode SigningLocation;
	DSAPIService_ArrayOfCustomField * CustomFields;
	DSAPIService_VaultingOptions * VaultingOptions;
	USBoolean * AutoNavigation;
	USBoolean * EnvelopeIdStamping;
	USBoolean * AuthoritativeCopy;
	DSAPIService_Notification * Notification;
	DSAPIService_ArrayOfAttachment * EnvelopeAttachment;
	USBoolean * EnforceSignerVisibility;
	USBoolean * EnableWetSign;
	USBoolean * AllowMarkup;
	DSAPIService_EventNotification * EventNotification;
	USBoolean * AllowReassign;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_Envelope *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * TransactionID;
@property (nonatomic, retain) USBoolean * Asynchronous;
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) DSAPIService_ArrayOfDocument * Documents;
@property (nonatomic, retain) DSAPIService_ArrayOfRecipient * Recipients;
@property (nonatomic, retain) DSAPIService_ArrayOfTab * Tabs;
@property (nonatomic, retain) NSString * Subject;
@property (nonatomic, retain) NSString * EmailBlurb;
@property (nonatomic, assign) DSAPIService_SigningLocationCode SigningLocation;
@property (nonatomic, retain) DSAPIService_ArrayOfCustomField * CustomFields;
@property (nonatomic, retain) DSAPIService_VaultingOptions * VaultingOptions;
@property (nonatomic, retain) USBoolean * AutoNavigation;
@property (nonatomic, retain) USBoolean * EnvelopeIdStamping;
@property (nonatomic, retain) USBoolean * AuthoritativeCopy;
@property (nonatomic, retain) DSAPIService_Notification * Notification;
@property (nonatomic, retain) DSAPIService_ArrayOfAttachment * EnvelopeAttachment;
@property (nonatomic, retain) USBoolean * EnforceSignerVisibility;
@property (nonatomic, retain) USBoolean * EnableWetSign;
@property (nonatomic, retain) USBoolean * AllowMarkup;
@property (nonatomic, retain) DSAPIService_EventNotification * EventNotification;
@property (nonatomic, retain) USBoolean * AllowReassign;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_CreateEnvelope : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_Envelope * Envelope;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_CreateEnvelope *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_Envelope * Envelope;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAPIService_RecipientStatusCode_none = 0,
	DSAPIService_RecipientStatusCode_Created,
	DSAPIService_RecipientStatusCode_Sent,
	DSAPIService_RecipientStatusCode_Delivered,
	DSAPIService_RecipientStatusCode_Signed,
	DSAPIService_RecipientStatusCode_Declined,
	DSAPIService_RecipientStatusCode_Completed,
	DSAPIService_RecipientStatusCode_FaxPending,
} DSAPIService_RecipientStatusCode;
DSAPIService_RecipientStatusCode DSAPIService_RecipientStatusCode_enumFromString(NSString *string);
NSString * DSAPIService_RecipientStatusCode_stringFromEnum(DSAPIService_RecipientStatusCode enumValue);
@interface DSAPIService_IDCheckInformation : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_AddressInformation * AddressInformation;
	DSAPIService_DOBInformation * DOBInformation;
	DSAPIService_SSN4Information * SSN4Information;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_IDCheckInformation *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_AddressInformation * AddressInformation;
@property (nonatomic, retain) DSAPIService_DOBInformation * DOBInformation;
@property (nonatomic, retain) DSAPIService_SSN4Information * SSN4Information;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAPIService_EventStatusCode_none = 0,
	DSAPIService_EventStatusCode_Passed,
	DSAPIService_EventStatusCode_Failed,
} DSAPIService_EventStatusCode;
DSAPIService_EventStatusCode DSAPIService_EventStatusCode_enumFromString(NSString *string);
NSString * DSAPIService_EventStatusCode_stringFromEnum(DSAPIService_EventStatusCode enumValue);
@interface DSAPIService_EventResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EventStatusCode Status;
	NSDate * EventTimestamp;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_EventResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, assign) DSAPIService_EventStatusCode Status;
@property (nonatomic, retain) NSDate * EventTimestamp;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_AuthenticationStatus : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EventResult * AccessCodeResult;
	DSAPIService_EventResult * IDQuestionsResult;
	DSAPIService_EventResult * IDLookupResult;
	DSAPIService_EventResult * AgeVerifyResult;
	DSAPIService_EventResult * STANPinResult;
	DSAPIService_EventResult * OFACResult;
	DSAPIService_EventResult * PhoneAuthResult;
	DSAPIService_EventResult * LiveIDResult;
	DSAPIService_EventResult * FacebookResult;
	DSAPIService_EventResult * GoogleResult;
	DSAPIService_EventResult * LinkedinResult;
	DSAPIService_EventResult * SalesforceResult;
	DSAPIService_EventResult * TwitterResult;
	DSAPIService_EventResult * OpenIDResult;
	DSAPIService_EventResult * AnySocialIDResult;
	DSAPIService_EventResult * YahooResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_AuthenticationStatus *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EventResult * AccessCodeResult;
@property (nonatomic, retain) DSAPIService_EventResult * IDQuestionsResult;
@property (nonatomic, retain) DSAPIService_EventResult * IDLookupResult;
@property (nonatomic, retain) DSAPIService_EventResult * AgeVerifyResult;
@property (nonatomic, retain) DSAPIService_EventResult * STANPinResult;
@property (nonatomic, retain) DSAPIService_EventResult * OFACResult;
@property (nonatomic, retain) DSAPIService_EventResult * PhoneAuthResult;
@property (nonatomic, retain) DSAPIService_EventResult * LiveIDResult;
@property (nonatomic, retain) DSAPIService_EventResult * FacebookResult;
@property (nonatomic, retain) DSAPIService_EventResult * GoogleResult;
@property (nonatomic, retain) DSAPIService_EventResult * LinkedinResult;
@property (nonatomic, retain) DSAPIService_EventResult * SalesforceResult;
@property (nonatomic, retain) DSAPIService_EventResult * TwitterResult;
@property (nonatomic, retain) DSAPIService_EventResult * OpenIDResult;
@property (nonatomic, retain) DSAPIService_EventResult * AnySocialIDResult;
@property (nonatomic, retain) DSAPIService_EventResult * YahooResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_TabStatus : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_TabTypeCode TabType;
	NSString * Status;
	NSNumber * XPosition;
	NSNumber * YPosition;
	NSDate * Signed_;
	NSString * TabLabel;
	NSString * TabName;
	NSString * TabValue;
	NSNumber * DocumentID;
	NSNumber * PageNumber;
	NSString * OriginalValue;
	NSString * ValidationPattern;
	NSString * RoleName;
	NSString * ListValues;
	NSString * ListSelectedValue;
	NSDecimalNumber * ScaleValue;
	DSAPIService_CustomTabType CustomTabType;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_TabStatus *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, assign) DSAPIService_TabTypeCode TabType;
@property (nonatomic, retain) NSString * Status;
@property (nonatomic, retain) NSNumber * XPosition;
@property (nonatomic, retain) NSNumber * YPosition;
@property (nonatomic, retain) NSDate * Signed_;
@property (nonatomic, retain) NSString * TabLabel;
@property (nonatomic, retain) NSString * TabName;
@property (nonatomic, retain) NSString * TabValue;
@property (nonatomic, retain) NSNumber * DocumentID;
@property (nonatomic, retain) NSNumber * PageNumber;
@property (nonatomic, retain) NSString * OriginalValue;
@property (nonatomic, retain) NSString * ValidationPattern;
@property (nonatomic, retain) NSString * RoleName;
@property (nonatomic, retain) NSString * ListValues;
@property (nonatomic, retain) NSString * ListSelectedValue;
@property (nonatomic, retain) NSDecimalNumber * ScaleValue;
@property (nonatomic, assign) DSAPIService_CustomTabType CustomTabType;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfTabStatus : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *TabStatus;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfTabStatus *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addTabStatus:(DSAPIService_TabStatus *)toAdd;
@property (nonatomic, readonly) NSMutableArray * TabStatus;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RecipientStatusEsignAgreementInformation : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountEsignId;
	NSString * UserEsignId;
	NSDate * AgreementDate;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RecipientStatusEsignAgreementInformation *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountEsignId;
@property (nonatomic, retain) NSString * UserEsignId;
@property (nonatomic, retain) NSDate * AgreementDate;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_FormDataXfdfField : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * value;
/* attributes */
	NSString * name;
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_FormDataXfdfField *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * value;
/* attributes */
- (NSDictionary *)attributes;
@property (nonatomic, retain) NSString * name;
@end
@interface DSAPIService_ArrayOfFormDataXfdfField : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *field;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfFormDataXfdfField *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addField:(DSAPIService_FormDataXfdfField *)toAdd;
@property (nonatomic, readonly) NSMutableArray * field;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_FormDataXfdf : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_ArrayOfFormDataXfdfField * fields;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_FormDataXfdf *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_ArrayOfFormDataXfdfField * fields;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_FormData : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_FormDataXfdf * xfdf;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_FormData *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_FormDataXfdf * xfdf;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RecipientStatus : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_RecipientTypeCode Type;
	NSString * Email;
	NSString * UserName;
	NSNumber * RoutingOrder;
	NSDate * Sent;
	NSDate * Delivered;
	NSDate * Signed_;
	NSDate * Declined;
	NSString * DeclineReason;
	DSAPIService_RecipientStatusCode Status;
	NSString * RecipientIPAddress;
	NSString * ClientUserId;
	USBoolean * AutoNavigation;
	DSAPIService_IDCheckInformation * IDCheckInformation;
	DSAPIService_AuthenticationStatus * RecipientAuthenticationStatus;
	DSAPIService_ArrayOfString1 * CustomFields;
	DSAPIService_ArrayOfTabStatus * TabStatuses;
	DSAPIService_ArrayOfAttachment * RecipientAttachment;
	NSString * AccountStatus;
	DSAPIService_RecipientStatusEsignAgreementInformation * EsignAgreementInformation;
	DSAPIService_FormData * FormData;
	NSString * RecipientId;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RecipientStatus *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, assign) DSAPIService_RecipientTypeCode Type;
@property (nonatomic, retain) NSString * Email;
@property (nonatomic, retain) NSString * UserName;
@property (nonatomic, retain) NSNumber * RoutingOrder;
@property (nonatomic, retain) NSDate * Sent;
@property (nonatomic, retain) NSDate * Delivered;
@property (nonatomic, retain) NSDate * Signed_;
@property (nonatomic, retain) NSDate * Declined;
@property (nonatomic, retain) NSString * DeclineReason;
@property (nonatomic, assign) DSAPIService_RecipientStatusCode Status;
@property (nonatomic, retain) NSString * RecipientIPAddress;
@property (nonatomic, retain) NSString * ClientUserId;
@property (nonatomic, retain) USBoolean * AutoNavigation;
@property (nonatomic, retain) DSAPIService_IDCheckInformation * IDCheckInformation;
@property (nonatomic, retain) DSAPIService_AuthenticationStatus * RecipientAuthenticationStatus;
@property (nonatomic, retain) DSAPIService_ArrayOfString1 * CustomFields;
@property (nonatomic, retain) DSAPIService_ArrayOfTabStatus * TabStatuses;
@property (nonatomic, retain) DSAPIService_ArrayOfAttachment * RecipientAttachment;
@property (nonatomic, retain) NSString * AccountStatus;
@property (nonatomic, retain) DSAPIService_RecipientStatusEsignAgreementInformation * EsignAgreementInformation;
@property (nonatomic, retain) DSAPIService_FormData * FormData;
@property (nonatomic, retain) NSString * RecipientId;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfRecipientStatus : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *RecipientStatus;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfRecipientStatus *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addRecipientStatus:(DSAPIService_RecipientStatus *)toAdd;
@property (nonatomic, readonly) NSMutableArray * RecipientStatus;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAPIService_EnvelopeStatusCode_none = 0,
	DSAPIService_EnvelopeStatusCode_Any,
	DSAPIService_EnvelopeStatusCode_Voided,
	DSAPIService_EnvelopeStatusCode_Created,
	DSAPIService_EnvelopeStatusCode_Deleted,
	DSAPIService_EnvelopeStatusCode_Sent,
	DSAPIService_EnvelopeStatusCode_Delivered,
	DSAPIService_EnvelopeStatusCode_Signed,
	DSAPIService_EnvelopeStatusCode_Completed,
	DSAPIService_EnvelopeStatusCode_Declined,
	DSAPIService_EnvelopeStatusCode_TimedOut,
	DSAPIService_EnvelopeStatusCode_Template,
	DSAPIService_EnvelopeStatusCode_Processing,
} DSAPIService_EnvelopeStatusCode;
DSAPIService_EnvelopeStatusCode DSAPIService_EnvelopeStatusCode_enumFromString(NSString *string);
NSString * DSAPIService_EnvelopeStatusCode_stringFromEnum(DSAPIService_EnvelopeStatusCode enumValue);
@interface DSAPIService_VaultingDetails : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EODTransactionName;
	NSString * EODTransactionID;
	NSString * EODDocumentProfileID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_VaultingDetails *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EODTransactionName;
@property (nonatomic, retain) NSString * EODTransactionID;
@property (nonatomic, retain) NSString * EODDocumentProfileID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_DocumentStatus : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSNumber * ID_;
	NSString * Name;
	NSString * TemplateName;
	NSNumber * Sequence;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_DocumentStatus *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSNumber * ID_;
@property (nonatomic, retain) NSString * Name;
@property (nonatomic, retain) NSString * TemplateName;
@property (nonatomic, retain) NSNumber * Sequence;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfDocumentStatus : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *DocumentStatus;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfDocumentStatus *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addDocumentStatus:(DSAPIService_DocumentStatus *)toAdd;
@property (nonatomic, readonly) NSMutableArray * DocumentStatus;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_EnvelopeStatus : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_ArrayOfRecipientStatus * RecipientStatuses;
	NSDate * TimeGenerated;
	NSString * EnvelopeID;
	NSString * Subject;
	NSString * UserName;
	NSString * Email;
	DSAPIService_EnvelopeStatusCode Status;
	NSDate * Created;
	NSDate * Deleted;
	NSDate * Sent;
	NSDate * Delivered;
	NSDate * Signed_;
	NSDate * Completed;
	NSDate * Declined;
	NSDate * TimedOut;
	NSString * ACStatus;
	NSDate * ACStatusDate;
	NSString * ACHolder;
	NSString * ACHolderEmail;
	NSString * ACHolderLocation;
	DSAPIService_SigningLocationCode SigningLocation;
	NSString * SenderIPAddress;
	NSString * EnvelopePDFHash;
	DSAPIService_ArrayOfCustomField * CustomFields;
	DSAPIService_VaultingDetails * VaultingDetails;
	USBoolean * AutoNavigation;
	USBoolean * EnvelopeIdStamping;
	USBoolean * AuthoritativeCopy;
	DSAPIService_ArrayOfAttachment * EnvelopeAttachment;
	DSAPIService_ArrayOfDocumentStatus * DocumentStatuses;
	DSAPIService_FormData * FormData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_EnvelopeStatus *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_ArrayOfRecipientStatus * RecipientStatuses;
@property (nonatomic, retain) NSDate * TimeGenerated;
@property (nonatomic, retain) NSString * EnvelopeID;
@property (nonatomic, retain) NSString * Subject;
@property (nonatomic, retain) NSString * UserName;
@property (nonatomic, retain) NSString * Email;
@property (nonatomic, assign) DSAPIService_EnvelopeStatusCode Status;
@property (nonatomic, retain) NSDate * Created;
@property (nonatomic, retain) NSDate * Deleted;
@property (nonatomic, retain) NSDate * Sent;
@property (nonatomic, retain) NSDate * Delivered;
@property (nonatomic, retain) NSDate * Signed_;
@property (nonatomic, retain) NSDate * Completed;
@property (nonatomic, retain) NSDate * Declined;
@property (nonatomic, retain) NSDate * TimedOut;
@property (nonatomic, retain) NSString * ACStatus;
@property (nonatomic, retain) NSDate * ACStatusDate;
@property (nonatomic, retain) NSString * ACHolder;
@property (nonatomic, retain) NSString * ACHolderEmail;
@property (nonatomic, retain) NSString * ACHolderLocation;
@property (nonatomic, assign) DSAPIService_SigningLocationCode SigningLocation;
@property (nonatomic, retain) NSString * SenderIPAddress;
@property (nonatomic, retain) NSString * EnvelopePDFHash;
@property (nonatomic, retain) DSAPIService_ArrayOfCustomField * CustomFields;
@property (nonatomic, retain) DSAPIService_VaultingDetails * VaultingDetails;
@property (nonatomic, retain) USBoolean * AutoNavigation;
@property (nonatomic, retain) USBoolean * EnvelopeIdStamping;
@property (nonatomic, retain) USBoolean * AuthoritativeCopy;
@property (nonatomic, retain) DSAPIService_ArrayOfAttachment * EnvelopeAttachment;
@property (nonatomic, retain) DSAPIService_ArrayOfDocumentStatus * DocumentStatuses;
@property (nonatomic, retain) DSAPIService_FormData * FormData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_CreateEnvelopeResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopeStatus * CreateEnvelopeResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_CreateEnvelopeResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopeStatus * CreateEnvelopeResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_CreateAndSendEnvelope : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_Envelope * Envelope;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_CreateAndSendEnvelope *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_Envelope * Envelope;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_CreateAndSendEnvelopeResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopeStatus * CreateAndSendEnvelopeResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_CreateAndSendEnvelopeResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopeStatus * CreateAndSendEnvelopeResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_SendEnvelope : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeId;
	NSString * AccountId;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_SendEnvelope *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeId;
@property (nonatomic, retain) NSString * AccountId;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_SendEnvelopeResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopeStatus * SendEnvelopeResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_SendEnvelopeResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopeStatus * SendEnvelopeResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_EnvelopeSettings : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * AutoNavigation;
	USBoolean * EnvelopeIdStamping;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_EnvelopeSettings *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * AutoNavigation;
@property (nonatomic, retain) USBoolean * EnvelopeIdStamping;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RecipientCorrectionCorrectedCaptiveInfo : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * ClientUserId;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RecipientCorrectionCorrectedCaptiveInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * ClientUserId;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RecipientCorrection : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * PreviousUserName;
	NSString * PreviousEmail;
	NSNumber * PreviousRoutingOrder;
	NSString * PreviousSignerName;
	NSString * CorrectedUserName;
	NSString * CorrectedSignerName;
	NSString * CorrectedEmail;
	DSAPIService_RecipientCorrectionCorrectedCaptiveInfo * CorrectedCaptiveInfo;
	NSString * CorrectedAccessCode;
	USBoolean * CorrectedAccessCodeRequired;
	USBoolean * CorrectedRequireIDLookup;
	NSString * CorrectedIDCheckConfigurationName;
	NSNumber * CorrectedRoutingOrder;
	USBoolean * CorrectedAutoNavigation;
	DSAPIService_IDCheckInformationInput * CorrectedIDCheckInformationInput;
	USBoolean * Resend;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RecipientCorrection *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * PreviousUserName;
@property (nonatomic, retain) NSString * PreviousEmail;
@property (nonatomic, retain) NSNumber * PreviousRoutingOrder;
@property (nonatomic, retain) NSString * PreviousSignerName;
@property (nonatomic, retain) NSString * CorrectedUserName;
@property (nonatomic, retain) NSString * CorrectedSignerName;
@property (nonatomic, retain) NSString * CorrectedEmail;
@property (nonatomic, retain) DSAPIService_RecipientCorrectionCorrectedCaptiveInfo * CorrectedCaptiveInfo;
@property (nonatomic, retain) NSString * CorrectedAccessCode;
@property (nonatomic, retain) USBoolean * CorrectedAccessCodeRequired;
@property (nonatomic, retain) USBoolean * CorrectedRequireIDLookup;
@property (nonatomic, retain) NSString * CorrectedIDCheckConfigurationName;
@property (nonatomic, retain) NSNumber * CorrectedRoutingOrder;
@property (nonatomic, retain) USBoolean * CorrectedAutoNavigation;
@property (nonatomic, retain) DSAPIService_IDCheckInformationInput * CorrectedIDCheckInformationInput;
@property (nonatomic, retain) USBoolean * Resend;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfRecipientCorrection : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *RecipientCorrection;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfRecipientCorrection *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addRecipientCorrection:(DSAPIService_RecipientCorrection *)toAdd;
@property (nonatomic, readonly) NSMutableArray * RecipientCorrection;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_Correction : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeID;
	DSAPIService_EnvelopeSettings * EnvelopeSettingsCorrection;
	DSAPIService_ArrayOfRecipientCorrection * RecipientCorrections;
	DSAPIService_Reminders * Reminders;
	DSAPIService_Expirations * Expirations;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_Correction *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeID;
@property (nonatomic, retain) DSAPIService_EnvelopeSettings * EnvelopeSettingsCorrection;
@property (nonatomic, retain) DSAPIService_ArrayOfRecipientCorrection * RecipientCorrections;
@property (nonatomic, retain) DSAPIService_Reminders * Reminders;
@property (nonatomic, retain) DSAPIService_Expirations * Expirations;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_CorrectAndResendEnvelope : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_Correction * Correction;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_CorrectAndResendEnvelope *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_Correction * Correction;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RecipientCorrectionStatus : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * CorrectionSucceeded;
	DSAPIService_RecipientCorrection * RecipientCorrection;
	DSAPIService_RecipientStatus * RecipientStatus;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RecipientCorrectionStatus *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * CorrectionSucceeded;
@property (nonatomic, retain) DSAPIService_RecipientCorrection * RecipientCorrection;
@property (nonatomic, retain) DSAPIService_RecipientStatus * RecipientStatus;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfRecipientCorrectionStatus : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *RecipientCorrectionStatus;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfRecipientCorrectionStatus *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addRecipientCorrectionStatus:(DSAPIService_RecipientCorrectionStatus *)toAdd;
@property (nonatomic, readonly) NSMutableArray * RecipientCorrectionStatus;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_CorrectionStatus : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopeSettings * EnvelopeSettingsCorrectionStatus;
	DSAPIService_ArrayOfRecipientCorrectionStatus * RecipientCorrectionStatuses;
	DSAPIService_Reminders * Reminders;
	DSAPIService_Expirations * Expirations;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_CorrectionStatus *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopeSettings * EnvelopeSettingsCorrectionStatus;
@property (nonatomic, retain) DSAPIService_ArrayOfRecipientCorrectionStatus * RecipientCorrectionStatuses;
@property (nonatomic, retain) DSAPIService_Reminders * Reminders;
@property (nonatomic, retain) DSAPIService_Expirations * Expirations;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_CorrectAndResendEnvelopeResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_CorrectionStatus * CorrectAndResendEnvelopeResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_CorrectAndResendEnvelopeResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_CorrectionStatus * CorrectAndResendEnvelopeResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestPDFNoWaterMark : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestPDFNoWaterMark *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_EnvelopePDF : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeID;
	NSData * PDFBytes;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_EnvelopePDF *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeID;
@property (nonatomic, retain) NSData * PDFBytes;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestPDFNoWaterMarkResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopePDF * RequestPDFNoWaterMarkResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestPDFNoWaterMarkResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopePDF * RequestPDFNoWaterMarkResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestPDF : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestPDF *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestPDFResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopePDF * RequestPDFResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestPDFResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopePDF * RequestPDFResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestPDFWithCert : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeID;
	USBoolean * AddWaterMark;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestPDFWithCert *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeID;
@property (nonatomic, retain) USBoolean * AddWaterMark;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestPDFWithCertResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopePDF * RequestPDFWithCertResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestPDFWithCertResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopePDF * RequestPDFWithCertResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestCertificate : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestCertificate *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeID;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAPIService_DocumentType_none = 0,
	DSAPIService_DocumentType_SUMMARY,
	DSAPIService_DocumentType_CONTENT,
} DSAPIService_DocumentType;
DSAPIService_DocumentType DSAPIService_DocumentType_enumFromString(NSString *string);
NSString * DSAPIService_DocumentType_stringFromEnum(DSAPIService_DocumentType enumValue);
@interface DSAPIService_DocumentPDF : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * Name;
	NSData * PDFBytes;
	NSNumber * DocumentID;
	DSAPIService_DocumentType DocumentType;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_DocumentPDF *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * Name;
@property (nonatomic, retain) NSData * PDFBytes;
@property (nonatomic, retain) NSNumber * DocumentID;
@property (nonatomic, assign) DSAPIService_DocumentType DocumentType;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_DocumentPDFs : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeId;
	NSMutableArray *DocumentPDF;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_DocumentPDFs *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeId;
- (void)addDocumentPDF:(DSAPIService_DocumentPDF *)toAdd;
@property (nonatomic, readonly) NSMutableArray * DocumentPDF;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestCertificateResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_DocumentPDFs * RequestCertificateResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestCertificateResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_DocumentPDFs * RequestCertificateResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestDocumentPDFs : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestDocumentPDFs *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestDocumentPDFsResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_DocumentPDFs * RequestDocumentPDFsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestDocumentPDFsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_DocumentPDFs * RequestDocumentPDFsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestDocumentPDFsEx : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestDocumentPDFsEx *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestDocumentPDFsExResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_DocumentPDFs * RequestDocumentPDFsExResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestDocumentPDFsExResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_DocumentPDFs * RequestDocumentPDFsExResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestDocumentPDFsRecipientsView : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeID;
	NSString * RecipientName;
	NSString * RecipientEmail;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestDocumentPDFsRecipientsView *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeID;
@property (nonatomic, retain) NSString * RecipientName;
@property (nonatomic, retain) NSString * RecipientEmail;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestDocumentPDFsRecipientsViewResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_DocumentPDFs * RequestDocumentPDFsRecipientsViewResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestDocumentPDFsRecipientsViewResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_DocumentPDFs * RequestDocumentPDFsRecipientsViewResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestStatusEx : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestStatusEx *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestStatusExResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopeStatus * RequestStatusExResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestStatusExResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopeStatus * RequestStatusExResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestStatus : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestStatus *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestStatusResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopeStatus * RequestStatusResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestStatusResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopeStatus * RequestStatusResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_UserInfo : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * UserName;
	NSString * Email;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_UserInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * UserName;
@property (nonatomic, retain) NSString * Email;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_EnvelopeStatusFilterBeginDateTime : NSDate {
/* elements */
/* attributes */
	NSString * statusQualifier;
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_EnvelopeStatusFilterBeginDateTime *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@property (nonatomic, retain) NSString * statusQualifier;
@end
@interface DSAPIService_ArrayOfEnvelopeStatusCode : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *Status;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfEnvelopeStatusCode *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addStatus:(DSAPIService_EnvelopeStatusCode)toAdd;
@property (nonatomic, readonly) NSMutableArray * Status;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfString2 : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *EnvelopeId;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfString2 *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addEnvelopeId:(NSString *)toAdd;
@property (nonatomic, readonly) NSMutableArray * EnvelopeId;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAPIService_EnvelopeACStatusCode_none = 0,
	DSAPIService_EnvelopeACStatusCode_Unknown,
	DSAPIService_EnvelopeACStatusCode_Original,
	DSAPIService_EnvelopeACStatusCode_Transferred,
	DSAPIService_EnvelopeACStatusCode_AuthoritativeCopy,
	DSAPIService_EnvelopeACStatusCode_AuthoritativeCopyExportPending,
	DSAPIService_EnvelopeACStatusCode_AuthoritativeCopyExported,
	DSAPIService_EnvelopeACStatusCode_DepositPending,
	DSAPIService_EnvelopeACStatusCode_Deposited,
	DSAPIService_EnvelopeACStatusCode_DepositedEO,
	DSAPIService_EnvelopeACStatusCode_DepositFailed,
} DSAPIService_EnvelopeACStatusCode;
DSAPIService_EnvelopeACStatusCode DSAPIService_EnvelopeACStatusCode_enumFromString(NSString *string);
NSString * DSAPIService_EnvelopeACStatusCode_stringFromEnum(DSAPIService_EnvelopeACStatusCode enumValue);
@interface DSAPIService_EnvelopeStatusFilter : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_UserInfo * UserInfo;
	NSString * AccountId;
	DSAPIService_EnvelopeStatusFilterBeginDateTime * BeginDateTime;
	NSDate * EndDateTime;
	DSAPIService_ArrayOfEnvelopeStatusCode * Statuses;
	DSAPIService_ArrayOfString2 * EnvelopeIds;
	NSNumber * StartAtIndex;
	DSAPIService_EnvelopeACStatusCode ACStatus;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_EnvelopeStatusFilter *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_UserInfo * UserInfo;
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) DSAPIService_EnvelopeStatusFilterBeginDateTime * BeginDateTime;
@property (nonatomic, retain) NSDate * EndDateTime;
@property (nonatomic, retain) DSAPIService_ArrayOfEnvelopeStatusCode * Statuses;
@property (nonatomic, retain) DSAPIService_ArrayOfString2 * EnvelopeIds;
@property (nonatomic, retain) NSNumber * StartAtIndex;
@property (nonatomic, assign) DSAPIService_EnvelopeACStatusCode ACStatus;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestStatusCodes : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopeStatusFilter * EnvelopeStatusFilter;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestStatusCodes *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopeStatusFilter * EnvelopeStatusFilter;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_EnvelopeStatusChange : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeID;
	DSAPIService_EnvelopeStatusCode Status;
	NSDate * StatusChanged;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_EnvelopeStatusChange *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeID;
@property (nonatomic, assign) DSAPIService_EnvelopeStatusCode Status;
@property (nonatomic, retain) NSDate * StatusChanged;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfEnvelopeStatusChange : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *EnvelopeStatusChange;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfEnvelopeStatusChange *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addEnvelopeStatusChange:(DSAPIService_EnvelopeStatusChange *)toAdd;
@property (nonatomic, readonly) NSMutableArray * EnvelopeStatusChange;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_FilteredEnvelopeStatusChanges : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSNumber * ResultSetSize;
	DSAPIService_ArrayOfEnvelopeStatusChange * EnvelopeStatusChanges;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_FilteredEnvelopeStatusChanges *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSNumber * ResultSetSize;
@property (nonatomic, retain) DSAPIService_ArrayOfEnvelopeStatusChange * EnvelopeStatusChanges;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestStatusCodesResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_FilteredEnvelopeStatusChanges * RequestStatusCodesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestStatusCodesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_FilteredEnvelopeStatusChanges * RequestStatusCodesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_EnvelopeStatusChangeFilter : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
	DSAPIService_UserInfo * UserInfo;
	NSDate * StatusChangedSince;
	DSAPIService_ArrayOfEnvelopeStatusCode * Statuses;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_EnvelopeStatusChangeFilter *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) DSAPIService_UserInfo * UserInfo;
@property (nonatomic, retain) NSDate * StatusChangedSince;
@property (nonatomic, retain) DSAPIService_ArrayOfEnvelopeStatusCode * Statuses;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestStatusChanges : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopeStatusChangeFilter * EnvelopeStatusChangeFilter;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestStatusChanges *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopeStatusChangeFilter * EnvelopeStatusChangeFilter;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestStatusChangesResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_FilteredEnvelopeStatusChanges * RequestStatusChangesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestStatusChangesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_FilteredEnvelopeStatusChanges * RequestStatusChangesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestStatusesEx : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopeStatusFilter * EnvelopeStatusFilter;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestStatusesEx *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopeStatusFilter * EnvelopeStatusFilter;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfEnvelopeStatus : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *EnvelopeStatus;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfEnvelopeStatus *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addEnvelopeStatus:(DSAPIService_EnvelopeStatus *)toAdd;
@property (nonatomic, readonly) NSMutableArray * EnvelopeStatus;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_FilteredEnvelopeStatuses : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSNumber * ResultSetSize;
	DSAPIService_EnvelopeStatusFilter * EnvelopeStatusFilter;
	DSAPIService_ArrayOfEnvelopeStatus * EnvelopeStatuses;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_FilteredEnvelopeStatuses *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSNumber * ResultSetSize;
@property (nonatomic, retain) DSAPIService_EnvelopeStatusFilter * EnvelopeStatusFilter;
@property (nonatomic, retain) DSAPIService_ArrayOfEnvelopeStatus * EnvelopeStatuses;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestStatusesExResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_FilteredEnvelopeStatuses * RequestStatusesExResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestStatusesExResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_FilteredEnvelopeStatuses * RequestStatusesExResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestStatuses : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopeStatusFilter * EnvelopeStatusFilter;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestStatuses *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopeStatusFilter * EnvelopeStatusFilter;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestStatusesResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_FilteredEnvelopeStatuses * RequestStatusesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestStatusesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_FilteredEnvelopeStatuses * RequestStatusesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetRecipientEsignList : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * UserName;
	NSString * SenderEmail;
	NSString * SenderAccountId;
	NSString * RecipientEmail;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetRecipientEsignList *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * UserName;
@property (nonatomic, retain) NSString * SenderEmail;
@property (nonatomic, retain) NSString * SenderAccountId;
@property (nonatomic, retain) NSString * RecipientEmail;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RecipientEsign : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * UserName;
	NSString * Email;
	USBoolean * Esign;
	USBoolean * ReservedRecipientEmail;
	NSString * ReservedRecipientNames;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RecipientEsign *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * UserName;
@property (nonatomic, retain) NSString * Email;
@property (nonatomic, retain) USBoolean * Esign;
@property (nonatomic, retain) USBoolean * ReservedRecipientEmail;
@property (nonatomic, retain) NSString * ReservedRecipientNames;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfRecipientEsign : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *RecipientEsign;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfRecipientEsign *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addRecipientEsign:(DSAPIService_RecipientEsign *)toAdd;
@property (nonatomic, readonly) NSMutableArray * RecipientEsign;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RecipientEsignList : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
	DSAPIService_ArrayOfRecipientEsign * RecipientEsign;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RecipientEsignList *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) DSAPIService_ArrayOfRecipientEsign * RecipientEsign;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetRecipientEsignListResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_RecipientEsignList * GetRecipientEsignListResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetRecipientEsignListResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_RecipientEsignList * GetRecipientEsignListResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetRecipientList : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * SenderAccountId;
	NSString * RecipientEmail;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetRecipientList *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * SenderAccountId;
@property (nonatomic, retain) NSString * RecipientEmail;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfString3 : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *RecipientName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfString3 *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addRecipientName:(NSString *)toAdd;
@property (nonatomic, readonly) NSMutableArray * RecipientName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RecipientList : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * ReservedRecipientEmail;
	USBoolean * MultipleUsers;
	DSAPIService_ArrayOfString3 * RecipientName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RecipientList *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * ReservedRecipientEmail;
@property (nonatomic, retain) USBoolean * MultipleUsers;
@property (nonatomic, retain) DSAPIService_ArrayOfString3 * RecipientName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetRecipientListResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_RecipientList * GetRecipientListResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetRecipientListResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_RecipientList * GetRecipientListResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetRecipientAuthenticationStatusExArg : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeId;
	NSString * RecipientName;
	NSString * RecipientEmail;
	NSNumber * RoutingOrder;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetRecipientAuthenticationStatusExArg *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeId;
@property (nonatomic, retain) NSString * RecipientName;
@property (nonatomic, retain) NSString * RecipientEmail;
@property (nonatomic, retain) NSNumber * RoutingOrder;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetRecipientAuthenticationStatusEx : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_GetRecipientAuthenticationStatusExArg * Arg;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetRecipientAuthenticationStatusEx *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_GetRecipientAuthenticationStatusExArg * Arg;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RecipientAuthenticationStatusEx : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_AuthenticationStatus * Status;
	NSString * FailureDescription;
	NSString * VendorFailureStatusCode;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RecipientAuthenticationStatusEx *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_AuthenticationStatus * Status;
@property (nonatomic, retain) NSString * FailureDescription;
@property (nonatomic, retain) NSString * VendorFailureStatusCode;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetRecipientAuthenticationStatusExResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_RecipientAuthenticationStatusEx * GetRecipientAuthenticationStatusExResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetRecipientAuthenticationStatusExResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_RecipientAuthenticationStatusEx * GetRecipientAuthenticationStatusExResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_VoidEnvelope : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeID;
	NSString * Reason;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_VoidEnvelope *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeID;
@property (nonatomic, retain) NSString * Reason;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_VoidEnvelopeStatus : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * VoidSuccess;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_VoidEnvelopeStatus *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * VoidSuccess;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_VoidEnvelopeResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_VoidEnvelopeStatus * VoidEnvelopeResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_VoidEnvelopeResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_VoidEnvelopeStatus * VoidEnvelopeResult;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAPIService_FolderType_none = 0,
	DSAPIService_FolderType_RecycleBin,
	DSAPIService_FolderType_Draft,
	DSAPIService_FolderType_Inbox,
	DSAPIService_FolderType_SentItems,
	DSAPIService_FolderType_Normal,
} DSAPIService_FolderType;
DSAPIService_FolderType DSAPIService_FolderType_enumFromString(NSString *string);
NSString * DSAPIService_FolderType_stringFromEnum(DSAPIService_FolderType enumValue);
@interface DSAPIService_FolderTypeInfo : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_FolderType FolderType;
	NSString * FolderName;
	NSString * FolderPath;
	NSString * FolderId;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_FolderTypeInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, assign) DSAPIService_FolderType FolderType;
@property (nonatomic, retain) NSString * FolderName;
@property (nonatomic, retain) NSString * FolderPath;
@property (nonatomic, retain) NSString * FolderId;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_MoveEnvelopesArg : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_ArrayOfString2 * EnvelopeIds;
	NSString * AccountId;
	DSAPIService_FolderTypeInfo * FolderFrom;
	DSAPIService_FolderTypeInfo * FolderTo;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_MoveEnvelopesArg *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_ArrayOfString2 * EnvelopeIds;
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) DSAPIService_FolderTypeInfo * FolderFrom;
@property (nonatomic, retain) DSAPIService_FolderTypeInfo * FolderTo;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_MoveEnvelopes : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_MoveEnvelopesArg * Arg;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_MoveEnvelopes *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_MoveEnvelopesArg * Arg;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_MoveEnvelopesResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * MoveEnvelopesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_MoveEnvelopesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * MoveEnvelopesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_DeleteEnvelopesArg : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_ArrayOfString2 * EnvelopeIds;
	NSString * AccountId;
	DSAPIService_FolderTypeInfo * FolderFrom;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_DeleteEnvelopesArg *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_ArrayOfString2 * EnvelopeIds;
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) DSAPIService_FolderTypeInfo * FolderFrom;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_DeleteEnvelopes : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_DeleteEnvelopesArg * Arg;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_DeleteEnvelopes *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_DeleteEnvelopesArg * Arg;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_DeleteEnvelopesResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * DeleteEnvelopesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_DeleteEnvelopesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * DeleteEnvelopesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod_none = 0,
	DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod_Password,
	DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod_Email,
	DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod_PaperDocuments,
	DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod_HTTPBasicAuth,
	DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod_SSLMutualAuth,
	DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod_X509Certificate,
	DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod_Kerberos,
	DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod_SingleSignOn_CASiteminder,
	DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod_SingleSignOn_InfoCard,
	DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod_SingleSignOn_MicrosoftActiveDirectory,
	DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod_SingleSignOn_Passport,
	DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod_SingleSignOn_SAML,
	DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod_SingleSignOn_Other,
	DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod_Smartcard,
	DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod_RSASecureID,
	DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod_Biometric,
	DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod_None,
	DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod_KnowledgeBasedAuth,
} DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod;
DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod_enumFromString(NSString *string);
NSString * DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod_stringFromEnum(DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod enumValue);
@interface DSAPIService_RequestRecipientTokenAuthenticationAssertion : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AssertionID;
	NSDate * AuthenticationInstant;
	DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod AuthenticationMethod;
	NSString * SecurityDomain;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestRecipientTokenAuthenticationAssertion *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AssertionID;
@property (nonatomic, retain) NSDate * AuthenticationInstant;
@property (nonatomic, assign) DSAPIService_RequestRecipientTokenAuthenticationAssertionAuthenticationMethod AuthenticationMethod;
@property (nonatomic, retain) NSString * SecurityDomain;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestRecipientTokenClientURLs : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * OnSigningComplete;
	NSString * OnViewingComplete;
	NSString * OnCancel;
	NSString * OnDecline;
	NSString * OnSessionTimeout;
	NSString * OnTTLExpired;
	NSString * OnException;
	NSString * OnAccessCodeFailed;
	NSString * OnIdCheckFailed;
	NSString * OnFaxPending;
	USBoolean * GenerateSignedDocumentAsynch;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestRecipientTokenClientURLs *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * OnSigningComplete;
@property (nonatomic, retain) NSString * OnViewingComplete;
@property (nonatomic, retain) NSString * OnCancel;
@property (nonatomic, retain) NSString * OnDecline;
@property (nonatomic, retain) NSString * OnSessionTimeout;
@property (nonatomic, retain) NSString * OnTTLExpired;
@property (nonatomic, retain) NSString * OnException;
@property (nonatomic, retain) NSString * OnAccessCodeFailed;
@property (nonatomic, retain) NSString * OnIdCheckFailed;
@property (nonatomic, retain) NSString * OnFaxPending;
@property (nonatomic, retain) USBoolean * GenerateSignedDocumentAsynch;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestRecipientToken : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeID;
	NSString * ClientUserID;
	NSString * Username;
	NSString * Email;
	DSAPIService_RequestRecipientTokenAuthenticationAssertion * AuthenticationAssertion;
	DSAPIService_RequestRecipientTokenClientURLs * ClientURLs;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestRecipientToken *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeID;
@property (nonatomic, retain) NSString * ClientUserID;
@property (nonatomic, retain) NSString * Username;
@property (nonatomic, retain) NSString * Email;
@property (nonatomic, retain) DSAPIService_RequestRecipientTokenAuthenticationAssertion * AuthenticationAssertion;
@property (nonatomic, retain) DSAPIService_RequestRecipientTokenClientURLs * ClientURLs;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestRecipientTokenResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * RequestRecipientTokenResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestRecipientTokenResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * RequestRecipientTokenResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_TransferEnvelope : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeID;
	NSString * AccountID;
	NSString * UserID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_TransferEnvelope *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeID;
@property (nonatomic, retain) NSString * AccountID;
@property (nonatomic, retain) NSString * UserID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_TransferEnvelopeStatus : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * TransferEnvelopeSuccess;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_TransferEnvelopeStatus *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * TransferEnvelopeSuccess;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_TransferEnvelopeResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_TransferEnvelopeStatus * TransferEnvelopeResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_TransferEnvelopeResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_TransferEnvelopeStatus * TransferEnvelopeResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetAccountMembershipFeaturesList : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetAccountMembershipFeaturesList *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfString4 : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *EnabledFeatures;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfString4 *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addEnabledFeatures:(NSString *)toAdd;
@property (nonatomic, readonly) NSMutableArray * EnabledFeatures;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_AccountMembershipFeaturesList : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * Email;
	NSString * UserName;
	DSAPIService_ArrayOfString4 * EnabledFeaturesSet;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_AccountMembershipFeaturesList *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * Email;
@property (nonatomic, retain) NSString * UserName;
@property (nonatomic, retain) DSAPIService_ArrayOfString4 * EnabledFeaturesSet;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetAccountMembershipFeaturesListResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_AccountMembershipFeaturesList * GetAccountMembershipFeaturesListResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetAccountMembershipFeaturesListResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_AccountMembershipFeaturesList * GetAccountMembershipFeaturesListResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetAccountSettingsList : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetAccountSettingsList *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_AccountSetting : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * Name;
	NSString * Value;
	NSString * Type;
	NSString * TestSetting;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_AccountSetting *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * Name;
@property (nonatomic, retain) NSString * Value;
@property (nonatomic, retain) NSString * Type;
@property (nonatomic, retain) NSString * TestSetting;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_AccountSettingsList : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *AccountSetting;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_AccountSettingsList *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addAccountSetting:(DSAPIService_AccountSetting *)toAdd;
@property (nonatomic, readonly) NSMutableArray * AccountSetting;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetAccountSettingsListResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_AccountSettingsList * GetAccountSettingsListResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetAccountSettingsListResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_AccountSettingsList * GetAccountSettingsListResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_AcknowledgeAuthoritativeCopyExport : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeId;
	NSString * TransactionId;
	NSData * checkSumHash;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_AcknowledgeAuthoritativeCopyExport *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeId;
@property (nonatomic, retain) NSString * TransactionId;
@property (nonatomic, retain) NSData * checkSumHash;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_AuthoritativeCopyExportStatus : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * AuthoritativeCopyExportSuccess;
	NSString * EnvelopeId;
	NSString * ExportKey;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_AuthoritativeCopyExportStatus *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * AuthoritativeCopyExportSuccess;
@property (nonatomic, retain) NSString * EnvelopeId;
@property (nonatomic, retain) NSString * ExportKey;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_AcknowledgeAuthoritativeCopyExportResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_AuthoritativeCopyExportStatus * AcknowledgeAuthoritativeCopyExportResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_AcknowledgeAuthoritativeCopyExportResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_AuthoritativeCopyExportStatus * AcknowledgeAuthoritativeCopyExportResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ExportAuthoritativeCopy : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeId;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ExportAuthoritativeCopy *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeId;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_AuthoritativeCopyExportDocuments : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeId;
	NSString * TransactionId;
	NSNumber * Count;
	NSMutableArray *DocumentPDF;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_AuthoritativeCopyExportDocuments *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeId;
@property (nonatomic, retain) NSString * TransactionId;
@property (nonatomic, retain) NSNumber * Count;
- (void)addDocumentPDF:(DSAPIService_DocumentPDF *)toAdd;
@property (nonatomic, readonly) NSMutableArray * DocumentPDF;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ExportAuthoritativeCopyResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_AuthoritativeCopyExportDocuments * ExportAuthoritativeCopyResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ExportAuthoritativeCopyResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_AuthoritativeCopyExportDocuments * ExportAuthoritativeCopyResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_EnvelopeAuditEvents : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeId;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_EnvelopeAuditEvents *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeId;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_EnvelopeAuditEventsResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_EnvelopeAuditEventsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_EnvelopeAuditEventsResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopeAuditEventsResult * EnvelopeAuditEventsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_EnvelopeAuditEventsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopeAuditEventsResult * EnvelopeAuditEventsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_Ping : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_Ping *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_PingResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * PingResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_PingResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * PingResult;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAPIService_TemplateLocationCode_none = 0,
	DSAPIService_TemplateLocationCode_SOAP,
	DSAPIService_TemplateLocationCode_PDFMetaData,
	DSAPIService_TemplateLocationCode_Server,
} DSAPIService_TemplateLocationCode;
DSAPIService_TemplateLocationCode DSAPIService_TemplateLocationCode_enumFromString(NSString *string);
NSString * DSAPIService_TemplateLocationCode_stringFromEnum(DSAPIService_TemplateLocationCode enumValue);
@interface DSAPIService_TemplateReferenceRoleAssignment : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * RoleName;
	NSNumber * RecipientID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_TemplateReferenceRoleAssignment *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * RoleName;
@property (nonatomic, retain) NSNumber * RecipientID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfTemplateReferenceRoleAssignment : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *RoleAssignment;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfTemplateReferenceRoleAssignment *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addRoleAssignment:(DSAPIService_TemplateReferenceRoleAssignment *)toAdd;
@property (nonatomic, readonly) NSMutableArray * RoleAssignment;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_TemplateReferenceFieldDataDataValue : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * TabLabel;
	NSString * Value;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_TemplateReferenceFieldDataDataValue *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * TabLabel;
@property (nonatomic, retain) NSString * Value;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfTemplateReferenceFieldDataDataValue : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *DataValue;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfTemplateReferenceFieldDataDataValue *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addDataValue:(DSAPIService_TemplateReferenceFieldDataDataValue *)toAdd;
@property (nonatomic, readonly) NSMutableArray * DataValue;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_TemplateReferenceFieldData : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_ArrayOfTemplateReferenceFieldDataDataValue * DataValues;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_TemplateReferenceFieldData *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_ArrayOfTemplateReferenceFieldDataDataValue * DataValues;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_TemplateReference : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_TemplateLocationCode TemplateLocation;
	NSString * Template;
	DSAPIService_Document * Document;
	DSAPIService_ArrayOfTemplateReferenceRoleAssignment * RoleAssignments;
	DSAPIService_TemplateReferenceFieldData * FieldData;
	DSAPIService_ArrayOfTab * AdditionalTabs;
	NSNumber * Sequence;
	DSAPIService_ArrayOfAttachment * TemplateAttachments;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_TemplateReference *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, assign) DSAPIService_TemplateLocationCode TemplateLocation;
@property (nonatomic, retain) NSString * Template;
@property (nonatomic, retain) DSAPIService_Document * Document;
@property (nonatomic, retain) DSAPIService_ArrayOfTemplateReferenceRoleAssignment * RoleAssignments;
@property (nonatomic, retain) DSAPIService_TemplateReferenceFieldData * FieldData;
@property (nonatomic, retain) DSAPIService_ArrayOfTab * AdditionalTabs;
@property (nonatomic, retain) NSNumber * Sequence;
@property (nonatomic, retain) DSAPIService_ArrayOfAttachment * TemplateAttachments;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfTemplateReference : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *TemplateReference;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfTemplateReference *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addTemplateReference:(DSAPIService_TemplateReference *)toAdd;
@property (nonatomic, readonly) NSMutableArray * TemplateReference;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfRecipient1 : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *Recipient;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfRecipient1 *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addRecipient:(DSAPIService_Recipient *)toAdd;
@property (nonatomic, readonly) NSMutableArray * Recipient;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_EnvelopeInformation : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * TransactionID;
	USBoolean * Asynchronous;
	NSString * AccountId;
	NSString * EmailBlurb;
	NSString * Subject;
	DSAPIService_SigningLocationCode SigningLocation;
	DSAPIService_ArrayOfCustomField * CustomFields;
	DSAPIService_VaultingOptions * VaultingOptions;
	USBoolean * AutoNavigation;
	USBoolean * EnvelopeIdStamping;
	USBoolean * AuthoritativeCopy;
	DSAPIService_Notification * Notification;
	USBoolean * EnforceSignerVisibility;
	USBoolean * EnableWetSign;
	USBoolean * AllowRecipientRecursion;
	USBoolean * AllowMarkup;
	DSAPIService_EventNotification * EventNotification;
	USBoolean * AllowReassign;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_EnvelopeInformation *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * TransactionID;
@property (nonatomic, retain) USBoolean * Asynchronous;
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) NSString * EmailBlurb;
@property (nonatomic, retain) NSString * Subject;
@property (nonatomic, assign) DSAPIService_SigningLocationCode SigningLocation;
@property (nonatomic, retain) DSAPIService_ArrayOfCustomField * CustomFields;
@property (nonatomic, retain) DSAPIService_VaultingOptions * VaultingOptions;
@property (nonatomic, retain) USBoolean * AutoNavigation;
@property (nonatomic, retain) USBoolean * EnvelopeIdStamping;
@property (nonatomic, retain) USBoolean * AuthoritativeCopy;
@property (nonatomic, retain) DSAPIService_Notification * Notification;
@property (nonatomic, retain) USBoolean * EnforceSignerVisibility;
@property (nonatomic, retain) USBoolean * EnableWetSign;
@property (nonatomic, retain) USBoolean * AllowRecipientRecursion;
@property (nonatomic, retain) USBoolean * AllowMarkup;
@property (nonatomic, retain) DSAPIService_EventNotification * EventNotification;
@property (nonatomic, retain) USBoolean * AllowReassign;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_CreateEnvelopeFromTemplates : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_ArrayOfTemplateReference * TemplateReferences;
	DSAPIService_ArrayOfRecipient1 * Recipients;
	DSAPIService_EnvelopeInformation * EnvelopeInformation;
	USBoolean * ActivateEnvelope;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_CreateEnvelopeFromTemplates *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_ArrayOfTemplateReference * TemplateReferences;
@property (nonatomic, retain) DSAPIService_ArrayOfRecipient1 * Recipients;
@property (nonatomic, retain) DSAPIService_EnvelopeInformation * EnvelopeInformation;
@property (nonatomic, retain) USBoolean * ActivateEnvelope;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_CreateEnvelopeFromTemplatesResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopeStatus * CreateEnvelopeFromTemplatesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_CreateEnvelopeFromTemplatesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopeStatus * CreateEnvelopeFromTemplatesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ServerTemplate : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSNumber * Sequence;
	NSString * TemplateID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ServerTemplate *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSNumber * Sequence;
@property (nonatomic, retain) NSString * TemplateID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfServerTemplate : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *ServerTemplate;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfServerTemplate *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addServerTemplate:(DSAPIService_ServerTemplate *)toAdd;
@property (nonatomic, readonly) NSMutableArray * ServerTemplate;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_InlineTemplate : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSNumber * Sequence;
	DSAPIService_Envelope * Envelope;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_InlineTemplate *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSNumber * Sequence;
@property (nonatomic, retain) DSAPIService_Envelope * Envelope;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfInlineTemplate : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *InlineTemplate;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfInlineTemplate *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addInlineTemplate:(DSAPIService_InlineTemplate *)toAdd;
@property (nonatomic, readonly) NSMutableArray * InlineTemplate;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_PDFMetaDataTemplate : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSNumber * Sequence;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_PDFMetaDataTemplate *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSNumber * Sequence;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_CompositeTemplate : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_ArrayOfServerTemplate * ServerTemplates;
	DSAPIService_ArrayOfInlineTemplate * InlineTemplates;
	DSAPIService_PDFMetaDataTemplate * PDFMetaDataTemplate;
	DSAPIService_Document * Document;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_CompositeTemplate *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_ArrayOfServerTemplate * ServerTemplates;
@property (nonatomic, retain) DSAPIService_ArrayOfInlineTemplate * InlineTemplates;
@property (nonatomic, retain) DSAPIService_PDFMetaDataTemplate * PDFMetaDataTemplate;
@property (nonatomic, retain) DSAPIService_Document * Document;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfCompositeTemplate : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *CompositeTemplate;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfCompositeTemplate *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addCompositeTemplate:(DSAPIService_CompositeTemplate *)toAdd;
@property (nonatomic, readonly) NSMutableArray * CompositeTemplate;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_CreateEnvelopeFromTemplatesAndForms : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopeInformation * EnvelopeInformation;
	DSAPIService_ArrayOfCompositeTemplate * CompositeTemplates;
	USBoolean * ActivateEnvelope;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_CreateEnvelopeFromTemplatesAndForms *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopeInformation * EnvelopeInformation;
@property (nonatomic, retain) DSAPIService_ArrayOfCompositeTemplate * CompositeTemplates;
@property (nonatomic, retain) USBoolean * ActivateEnvelope;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_CreateEnvelopeFromTemplatesAndFormsResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopeStatus * CreateEnvelopeFromTemplatesAndFormsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_CreateEnvelopeFromTemplatesAndFormsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopeStatus * CreateEnvelopeFromTemplatesAndFormsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetStatusInDocuSignConnectFormat : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetStatusInDocuSignConnectFormat *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfDocumentPDF : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *DocumentPDF;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfDocumentPDF *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addDocumentPDF:(DSAPIService_DocumentPDF *)toAdd;
@property (nonatomic, readonly) NSMutableArray * DocumentPDF;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_DocuSignEnvelopeInformation : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopeStatus * EnvelopeStatus;
	DSAPIService_ArrayOfDocumentPDF * DocumentPDFs;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_DocuSignEnvelopeInformation *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopeStatus * EnvelopeStatus;
@property (nonatomic, retain) DSAPIService_ArrayOfDocumentPDF * DocumentPDFs;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetStatusInDocuSignConnectFormatResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_DocuSignEnvelopeInformation * GetStatusInDocuSignConnectFormatResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetStatusInDocuSignConnectFormatResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_DocuSignEnvelopeInformation * GetStatusInDocuSignConnectFormatResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_PurgeDocuments : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_PurgeDocuments *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_PurgeDocumentStatus : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * PurgeDocumentSuccess;
	NSString * PurgeDocumentError;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_PurgeDocumentStatus *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * PurgeDocumentSuccess;
@property (nonatomic, retain) NSString * PurgeDocumentError;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_PurgeDocumentsResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_PurgeDocumentStatus * PurgeDocumentsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_PurgeDocumentsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_PurgeDocumentStatus * PurgeDocumentsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_EnvelopeTemplateDefinition : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * TemplateID;
	NSString * Name;
	USBoolean * Shared;
	NSString * TemplatePassword;
	NSString * TemplateDescription;
	NSDate * LastModified;
	NSNumber * PageCount;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_EnvelopeTemplateDefinition *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * TemplateID;
@property (nonatomic, retain) NSString * Name;
@property (nonatomic, retain) USBoolean * Shared;
@property (nonatomic, retain) NSString * TemplatePassword;
@property (nonatomic, retain) NSString * TemplateDescription;
@property (nonatomic, retain) NSDate * LastModified;
@property (nonatomic, retain) NSNumber * PageCount;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_EnvelopeTemplate : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopeTemplateDefinition * EnvelopeTemplateDefinition;
	DSAPIService_Envelope * Envelope;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_EnvelopeTemplate *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopeTemplateDefinition * EnvelopeTemplateDefinition;
@property (nonatomic, retain) DSAPIService_Envelope * Envelope;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_SaveTemplate : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopeTemplate * EnvelopeTemplate;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_SaveTemplate *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopeTemplate * EnvelopeTemplate;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_SaveTemplateResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * Success;
	NSString * TemplateID;
	NSString * Name;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_SaveTemplateResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) NSString * TemplateID;
@property (nonatomic, retain) NSString * Name;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_SaveTemplateResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_SaveTemplateResult * SaveTemplateResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_SaveTemplateResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_SaveTemplateResult * SaveTemplateResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_UploadTemplate : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * TemplateXML;
	NSString * AccountID;
	USBoolean * Shared;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_UploadTemplate *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * TemplateXML;
@property (nonatomic, retain) NSString * AccountID;
@property (nonatomic, retain) USBoolean * Shared;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_UploadTemplateResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_SaveTemplateResult * UploadTemplateResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_UploadTemplateResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_SaveTemplateResult * UploadTemplateResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestTemplates : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountID;
	USBoolean * IncludeAdvancedTemplates;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestTemplates *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountID;
@property (nonatomic, retain) USBoolean * IncludeAdvancedTemplates;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_EnvelopeTemplates : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *EnvelopeTemplateDefinition;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_EnvelopeTemplates *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addEnvelopeTemplateDefinition:(DSAPIService_EnvelopeTemplateDefinition *)toAdd;
@property (nonatomic, readonly) NSMutableArray * EnvelopeTemplateDefinition;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestTemplatesResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopeTemplates * RequestTemplatesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestTemplatesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopeTemplates * RequestTemplatesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestTemplate : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * TemplateID;
	USBoolean * IncludeDocumentBytes;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestTemplate *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * TemplateID;
@property (nonatomic, retain) USBoolean * IncludeDocumentBytes;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestTemplateResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopeTemplate * RequestTemplateResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestTemplateResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_EnvelopeTemplate * RequestTemplateResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfString5 : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *string;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfString5 *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addString:(NSString *)toAdd;
@property (nonatomic, readonly) NSMutableArray * string;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestTemplateList : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_ArrayOfString5 * TemplateIDs;
	USBoolean * IncludeDocumentBytes;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestTemplateList *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_ArrayOfString5 * TemplateIDs;
@property (nonatomic, retain) USBoolean * IncludeDocumentBytes;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfEnvelopeTemplate : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *EnvelopeTemplate;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfEnvelopeTemplate *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addEnvelopeTemplate:(DSAPIService_EnvelopeTemplate *)toAdd;
@property (nonatomic, readonly) NSMutableArray * EnvelopeTemplate;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestTemplateListResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_ArrayOfEnvelopeTemplate * RequestTemplateListResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestTemplateListResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_ArrayOfEnvelopeTemplate * RequestTemplateListResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetAuthenticationToken : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * GoToEnvelopeID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetAuthenticationToken *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * GoToEnvelopeID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetAuthenticationTokenResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * GetAuthenticationTokenResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetAuthenticationTokenResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * GetAuthenticationTokenResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetAddressBookItems : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetAddressBookItems *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountID;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAPIService_PhoneNumberDesignation_none = 0,
	DSAPIService_PhoneNumberDesignation_Home,
	DSAPIService_PhoneNumberDesignation_Mobile,
	DSAPIService_PhoneNumberDesignation_Work,
	DSAPIService_PhoneNumberDesignation_Other,
} DSAPIService_PhoneNumberDesignation;
DSAPIService_PhoneNumberDesignation DSAPIService_PhoneNumberDesignation_enumFromString(NSString *string);
NSString * DSAPIService_PhoneNumberDesignation_stringFromEnum(DSAPIService_PhoneNumberDesignation enumValue);
@interface DSAPIService_AddressBookPhoneNumber : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * PhoneNumber;
	DSAPIService_PhoneNumberDesignation Designation;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_AddressBookPhoneNumber *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * PhoneNumber;
@property (nonatomic, assign) DSAPIService_PhoneNumberDesignation Designation;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_AddressBookItem : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AddressBookID;
	NSString * Email;
	NSString * UserName;
	NSString * AccountName;
	USBoolean * Shared;
	NSDate * Created;
	USBoolean * Owner;
	DSAPIService_AddressBookPhoneNumber * Phone1;
	DSAPIService_AddressBookPhoneNumber * Phone2;
	DSAPIService_AddressBookPhoneNumber * Phone3;
	DSAPIService_AddressBookPhoneNumber * Phone4;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_AddressBookItem *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AddressBookID;
@property (nonatomic, retain) NSString * Email;
@property (nonatomic, retain) NSString * UserName;
@property (nonatomic, retain) NSString * AccountName;
@property (nonatomic, retain) USBoolean * Shared;
@property (nonatomic, retain) NSDate * Created;
@property (nonatomic, retain) USBoolean * Owner;
@property (nonatomic, retain) DSAPIService_AddressBookPhoneNumber * Phone1;
@property (nonatomic, retain) DSAPIService_AddressBookPhoneNumber * Phone2;
@property (nonatomic, retain) DSAPIService_AddressBookPhoneNumber * Phone3;
@property (nonatomic, retain) DSAPIService_AddressBookPhoneNumber * Phone4;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfAddressBookItem : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *AddressBookItem;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfAddressBookItem *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addAddressBookItem:(DSAPIService_AddressBookItem *)toAdd;
@property (nonatomic, readonly) NSMutableArray * AddressBookItem;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetAddressBookItemsResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_ArrayOfAddressBookItem * GetAddressBookItemsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetAddressBookItemsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_ArrayOfAddressBookItem * GetAddressBookItemsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_UpdateAddressBookItems : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_ArrayOfAddressBookItem * AddressBookItems;
	USBoolean * ReturnAddressBook;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_UpdateAddressBookItems *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_ArrayOfAddressBookItem * AddressBookItems;
@property (nonatomic, retain) USBoolean * ReturnAddressBook;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfAddressBookItem1 : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *AddressBookItem;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfAddressBookItem1 *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addAddressBookItem:(DSAPIService_AddressBookItem *)toAdd;
@property (nonatomic, readonly) NSMutableArray * AddressBookItem;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_UpdateAddressBookResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	USBoolean * Success;
	DSAPIService_ArrayOfAddressBookItem1 * AddressBookItems;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_UpdateAddressBookResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) USBoolean * Success;
@property (nonatomic, retain) DSAPIService_ArrayOfAddressBookItem1 * AddressBookItems;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_UpdateAddressBookItemsResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_UpdateAddressBookResult * UpdateAddressBookItemsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_UpdateAddressBookItemsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_UpdateAddressBookResult * UpdateAddressBookItemsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_AddressBookRemoveItem : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AddressBookID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_AddressBookRemoveItem *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AddressBookID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfAddressBookRemoveItem : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *AddressBookRemoveItem;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfAddressBookRemoveItem *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addAddressBookRemoveItem:(DSAPIService_AddressBookRemoveItem *)toAdd;
@property (nonatomic, readonly) NSMutableArray * AddressBookRemoveItem;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RemoveAddressBookItems : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_ArrayOfAddressBookRemoveItem * AddressBookRemoveItems;
	USBoolean * ReturnAddressBook;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RemoveAddressBookItems *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_ArrayOfAddressBookRemoveItem * AddressBookRemoveItems;
@property (nonatomic, retain) USBoolean * ReturnAddressBook;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RemoveAddressBookItemsResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_UpdateAddressBookResult * RemoveAddressBookItemsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RemoveAddressBookItemsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_UpdateAddressBookResult * RemoveAddressBookItemsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_SynchEnvelope : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * TransactionID;
	NSString * AccountID;
	USBoolean * Block;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_SynchEnvelope *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * TransactionID;
@property (nonatomic, retain) NSString * AccountID;
@property (nonatomic, retain) USBoolean * Block;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_SynchEnvelopeStatus : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_EnvelopeStatusCode EnvelopeStatus;
	NSString * EnvelopeID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_SynchEnvelopeStatus *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, assign) DSAPIService_EnvelopeStatusCode EnvelopeStatus;
@property (nonatomic, retain) NSString * EnvelopeID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_SynchEnvelopeResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_SynchEnvelopeStatus * SynchEnvelopeResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_SynchEnvelopeResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_SynchEnvelopeStatus * SynchEnvelopeResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestSenderToken : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeID;
	NSString * AccountID;
	NSString * ReturnURL;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestSenderToken *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeID;
@property (nonatomic, retain) NSString * AccountID;
@property (nonatomic, retain) NSString * ReturnURL;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestSenderTokenResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * RequestSenderTokenResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestSenderTokenResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * RequestSenderTokenResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestCorrectToken : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeID;
	USBoolean * SuppressNavigation;
	NSString * ReturnURL;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestCorrectToken *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeID;
@property (nonatomic, retain) USBoolean * SuppressNavigation;
@property (nonatomic, retain) NSString * ReturnURL;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestCorrectTokenResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * RequestCorrectTokenResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestCorrectTokenResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * RequestCorrectTokenResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_FolderFilter : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
	DSAPIService_UserInfo * FolderOwner;
	DSAPIService_FolderTypeInfo * FolderTypeInfo;
	NSNumber * StartPosition;
	NSDate * FromDate;
	NSDate * ToDate;
	NSString * SearchText;
	DSAPIService_EnvelopeStatusCode Status;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_FolderFilter *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) DSAPIService_UserInfo * FolderOwner;
@property (nonatomic, retain) DSAPIService_FolderTypeInfo * FolderTypeInfo;
@property (nonatomic, retain) NSNumber * StartPosition;
@property (nonatomic, retain) NSDate * FromDate;
@property (nonatomic, retain) NSDate * ToDate;
@property (nonatomic, retain) NSString * SearchText;
@property (nonatomic, assign) DSAPIService_EnvelopeStatusCode Status;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetFolderItems : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_FolderFilter * FolderFilter;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetFolderItems *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_FolderFilter * FolderFilter;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_FolderItem : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSNumber * EnvelopeId;
	DSAPIService_EnvelopeStatusCode Status;
	NSString * Owner;
	NSString * SenderName;
	NSString * SenderEmail;
	NSString * SenderCompany;
	DSAPIService_ArrayOfRecipientStatus * RecipientStatuses;
	DSAPIService_ArrayOfCustomField * CustomFields;
	NSDate * Created;
	NSDate * Sent;
	NSDate * Completed;
	NSString * Subject;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_FolderItem *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSNumber * EnvelopeId;
@property (nonatomic, assign) DSAPIService_EnvelopeStatusCode Status;
@property (nonatomic, retain) NSString * Owner;
@property (nonatomic, retain) NSString * SenderName;
@property (nonatomic, retain) NSString * SenderEmail;
@property (nonatomic, retain) NSString * SenderCompany;
@property (nonatomic, retain) DSAPIService_ArrayOfRecipientStatus * RecipientStatuses;
@property (nonatomic, retain) DSAPIService_ArrayOfCustomField * CustomFields;
@property (nonatomic, retain) NSDate * Created;
@property (nonatomic, retain) NSDate * Sent;
@property (nonatomic, retain) NSDate * Completed;
@property (nonatomic, retain) NSString * Subject;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfFolderItem : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *FolderItem;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfFolderItem *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addFolderItem:(DSAPIService_FolderItem *)toAdd;
@property (nonatomic, readonly) NSMutableArray * FolderItem;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_FolderResults : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSNumber * ResultSetSize;
	NSNumber * StartPosition;
	NSNumber * EndPosition;
	DSAPIService_FolderTypeInfo * FolderTypeInfo;
	DSAPIService_ArrayOfFolderItem * FolderItems;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_FolderResults *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSNumber * ResultSetSize;
@property (nonatomic, retain) NSNumber * StartPosition;
@property (nonatomic, retain) NSNumber * EndPosition;
@property (nonatomic, retain) DSAPIService_FolderTypeInfo * FolderTypeInfo;
@property (nonatomic, retain) DSAPIService_ArrayOfFolderItem * FolderItems;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetFolderItemsResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_FolderResults * GetFolderItemsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetFolderItemsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_FolderResults * GetFolderItemsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_FoldersFilter : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
	USBoolean * IncludeHierarchy;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_FoldersFilter *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) USBoolean * IncludeHierarchy;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetFolderList : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_FoldersFilter * FoldersFilter;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetFolderList *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_FoldersFilter * FoldersFilter;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_Folder : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_UserInfo * FolderOwner;
	DSAPIService_FolderTypeInfo * FolderTypeInfo;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_Folder *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_UserInfo * FolderOwner;
@property (nonatomic, retain) DSAPIService_FolderTypeInfo * FolderTypeInfo;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfFolder : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *Folder;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfFolder *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addFolder:(DSAPIService_Folder *)toAdd;
@property (nonatomic, readonly) NSMutableArray * Folder;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_AvailableFolders : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_ArrayOfFolder * Folders;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_AvailableFolders *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_ArrayOfFolder * Folders;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetFolderListResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_AvailableFolders * GetFolderListResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetFolderListResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_AvailableFolders * GetFolderListResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestEnvelope : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeID;
	USBoolean * IncludeDocumentBytes;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestEnvelope *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeID;
@property (nonatomic, retain) USBoolean * IncludeDocumentBytes;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_RequestEnvelopeResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_Envelope * RequestEnvelopeResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_RequestEnvelopeResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_Envelope * RequestEnvelopeResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ConnectFailuresFilter : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
	NSDate * DateFrom;
	NSDate * DateTo;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ConnectFailuresFilter *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) NSDate * DateFrom;
@property (nonatomic, retain) NSDate * DateTo;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetConnectFailures : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_ConnectFailuresFilter * ConnectFailuresFilter;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetConnectFailures *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_ConnectFailuresFilter * ConnectFailuresFilter;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ConnectFailure : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeId;
	NSString * AccountId;
	NSDate * Failed;
	NSDate * Retried;
	NSNumber * RetryCount;
	DSAPIService_EnvelopeStatusCode EnvelopeStatus;
	NSString * Sender;
	NSString * Email;
	NSString * Subject;
	NSString * Error;
	NSString * ConfigId;
	NSString * ConfigUrl;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ConnectFailure *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeId;
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) NSDate * Failed;
@property (nonatomic, retain) NSDate * Retried;
@property (nonatomic, retain) NSNumber * RetryCount;
@property (nonatomic, assign) DSAPIService_EnvelopeStatusCode EnvelopeStatus;
@property (nonatomic, retain) NSString * Sender;
@property (nonatomic, retain) NSString * Email;
@property (nonatomic, retain) NSString * Subject;
@property (nonatomic, retain) NSString * Error;
@property (nonatomic, retain) NSString * ConfigId;
@property (nonatomic, retain) NSString * ConfigUrl;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfConnectFailure : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *ConnectFailure;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfConnectFailure *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addConnectFailure:(DSAPIService_ConnectFailure *)toAdd;
@property (nonatomic, readonly) NSMutableArray * ConnectFailure;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_GetConnectFailuresResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_ArrayOfConnectFailure * GetConnectFailuresResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_GetConnectFailuresResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_ArrayOfConnectFailure * GetConnectFailuresResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_PublishConnectFailuresFilter : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * AccountId;
	USBoolean * Synchronous;
	DSAPIService_ArrayOfString2 * EnvelopeIds;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_PublishConnectFailuresFilter *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * AccountId;
@property (nonatomic, retain) USBoolean * Synchronous;
@property (nonatomic, retain) DSAPIService_ArrayOfString2 * EnvelopeIds;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_PublishConnectFailures : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_PublishConnectFailuresFilter * PublishConnectFailuresFilter;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_PublishConnectFailures *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_PublishConnectFailuresFilter * PublishConnectFailuresFilter;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	DSAPIService_ConnectPublishStatus_none = 0,
	DSAPIService_ConnectPublishStatus_Queued,
	DSAPIService_ConnectPublishStatus_Success,
	DSAPIService_ConnectPublishStatus_Fail,
} DSAPIService_ConnectPublishStatus;
DSAPIService_ConnectPublishStatus DSAPIService_ConnectPublishStatus_enumFromString(NSString *string);
NSString * DSAPIService_ConnectPublishStatus_stringFromEnum(DSAPIService_ConnectPublishStatus enumValue);
@interface DSAPIService_PublishConnectFailuresResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSString * EnvelopeId;
	NSString * ConfigId;
	NSString * ConfigUrl;
	DSAPIService_ConnectPublishStatus Status;
	NSString * StatusMessage;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_PublishConnectFailuresResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) NSString * EnvelopeId;
@property (nonatomic, retain) NSString * ConfigId;
@property (nonatomic, retain) NSString * ConfigUrl;
@property (nonatomic, assign) DSAPIService_ConnectPublishStatus Status;
@property (nonatomic, retain) NSString * StatusMessage;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_ArrayOfPublishConnectFailuresResult : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	NSMutableArray *PublishConnectFailuresResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_ArrayOfPublishConnectFailuresResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
- (void)addPublishConnectFailuresResult:(DSAPIService_PublishConnectFailuresResult *)toAdd;
@property (nonatomic, readonly) NSMutableArray * PublishConnectFailuresResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface DSAPIService_PublishConnectFailuresResponse : NSObject <NSCoding> {
SOAPSigner *soapSigner;
/* elements */
	DSAPIService_ArrayOfPublishConnectFailuresResult * PublishConnectFailuresResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (DSAPIService_PublishConnectFailuresResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
@property (retain) SOAPSigner *soapSigner;
/* elements */
@property (nonatomic, retain) DSAPIService_ArrayOfPublishConnectFailuresResult * PublishConnectFailuresResult;
/* attributes */
- (NSDictionary *)attributes;
@end
/* Cookies handling provided by http://en.wikibooks.org/wiki/Programming:WebObjects/Web_Services/Web_Service_Provider */
#import <UIKit/UIKit.h>
#import <libxml/parser.h>
#import "xsd.h"
#import "DSAPIService.h"
@class DSAPIServiceSoapBinding;
@class DSAPIServiceSoap12Binding;
@interface DSAPIService : NSObject {
	
}
+ (DSAPIServiceSoapBinding *)DSAPIServiceSoapBinding;
+ (DSAPIServiceSoap12Binding *)DSAPIServiceSoap12Binding;
@end
@class USSoapResponse;
@class USSoapOperation;
@interface DSAPIServiceSoapBinding : USSoapBinding {
}
- (USSoapResponse *)CreateEnvelopeUsingParameters:(DSAPIService_CreateEnvelope *)aParameters ;
- (USSoapOperation *)CreateEnvelopeAsyncUsingParameters:(DSAPIService_CreateEnvelope *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)CreateAndSendEnvelopeUsingParameters:(DSAPIService_CreateAndSendEnvelope *)aParameters ;
- (USSoapOperation *)CreateAndSendEnvelopeAsyncUsingParameters:(DSAPIService_CreateAndSendEnvelope *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)SendEnvelopeUsingParameters:(DSAPIService_SendEnvelope *)aParameters ;
- (USSoapOperation *)SendEnvelopeAsyncUsingParameters:(DSAPIService_SendEnvelope *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)CorrectAndResendEnvelopeUsingParameters:(DSAPIService_CorrectAndResendEnvelope *)aParameters ;
- (USSoapOperation *)CorrectAndResendEnvelopeAsyncUsingParameters:(DSAPIService_CorrectAndResendEnvelope *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestPDFNoWaterMarkUsingParameters:(DSAPIService_RequestPDFNoWaterMark *)aParameters ;
- (USSoapOperation *)RequestPDFNoWaterMarkAsyncUsingParameters:(DSAPIService_RequestPDFNoWaterMark *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestPDFUsingParameters:(DSAPIService_RequestPDF *)aParameters ;
- (USSoapOperation *)RequestPDFAsyncUsingParameters:(DSAPIService_RequestPDF *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestPDFWithCertUsingParameters:(DSAPIService_RequestPDFWithCert *)aParameters ;
- (USSoapOperation *)RequestPDFWithCertAsyncUsingParameters:(DSAPIService_RequestPDFWithCert *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestCertificateUsingParameters:(DSAPIService_RequestCertificate *)aParameters ;
- (USSoapOperation *)RequestCertificateAsyncUsingParameters:(DSAPIService_RequestCertificate *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestDocumentPDFsUsingParameters:(DSAPIService_RequestDocumentPDFs *)aParameters ;
- (USSoapOperation *)RequestDocumentPDFsAsyncUsingParameters:(DSAPIService_RequestDocumentPDFs *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestDocumentPDFsExUsingParameters:(DSAPIService_RequestDocumentPDFsEx *)aParameters ;
- (USSoapOperation *)RequestDocumentPDFsExAsyncUsingParameters:(DSAPIService_RequestDocumentPDFsEx *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestDocumentPDFsRecipientsViewUsingParameters:(DSAPIService_RequestDocumentPDFsRecipientsView *)aParameters ;
- (USSoapOperation *)RequestDocumentPDFsRecipientsViewAsyncUsingParameters:(DSAPIService_RequestDocumentPDFsRecipientsView *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestStatusExUsingParameters:(DSAPIService_RequestStatusEx *)aParameters ;
- (USSoapOperation *)RequestStatusExAsyncUsingParameters:(DSAPIService_RequestStatusEx *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestStatusUsingParameters:(DSAPIService_RequestStatus *)aParameters ;
- (USSoapOperation *)RequestStatusAsyncUsingParameters:(DSAPIService_RequestStatus *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestStatusCodesUsingParameters:(DSAPIService_RequestStatusCodes *)aParameters ;
- (USSoapOperation *)RequestStatusCodesAsyncUsingParameters:(DSAPIService_RequestStatusCodes *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestStatusChangesUsingParameters:(DSAPIService_RequestStatusChanges *)aParameters ;
- (USSoapOperation *)RequestStatusChangesAsyncUsingParameters:(DSAPIService_RequestStatusChanges *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestStatusesExUsingParameters:(DSAPIService_RequestStatusesEx *)aParameters ;
- (USSoapOperation *)RequestStatusesExAsyncUsingParameters:(DSAPIService_RequestStatusesEx *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestStatusesUsingParameters:(DSAPIService_RequestStatuses *)aParameters ;
- (USSoapOperation *)RequestStatusesAsyncUsingParameters:(DSAPIService_RequestStatuses *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetRecipientEsignListUsingParameters:(DSAPIService_GetRecipientEsignList *)aParameters ;
- (USSoapOperation *)GetRecipientEsignListAsyncUsingParameters:(DSAPIService_GetRecipientEsignList *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetRecipientListUsingParameters:(DSAPIService_GetRecipientList *)aParameters ;
- (USSoapOperation *)GetRecipientListAsyncUsingParameters:(DSAPIService_GetRecipientList *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetRecipientAuthenticationStatusExUsingParameters:(DSAPIService_GetRecipientAuthenticationStatusEx *)aParameters ;
- (USSoapOperation *)GetRecipientAuthenticationStatusExAsyncUsingParameters:(DSAPIService_GetRecipientAuthenticationStatusEx *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)VoidEnvelopeUsingParameters:(DSAPIService_VoidEnvelope *)aParameters ;
- (USSoapOperation *)VoidEnvelopeAsyncUsingParameters:(DSAPIService_VoidEnvelope *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)MoveEnvelopesUsingParameters:(DSAPIService_MoveEnvelopes *)aParameters ;
- (USSoapOperation *)MoveEnvelopesAsyncUsingParameters:(DSAPIService_MoveEnvelopes *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)DeleteEnvelopesUsingParameters:(DSAPIService_DeleteEnvelopes *)aParameters ;
- (USSoapOperation *)DeleteEnvelopesAsyncUsingParameters:(DSAPIService_DeleteEnvelopes *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestRecipientTokenUsingParameters:(DSAPIService_RequestRecipientToken *)aParameters ;
- (USSoapOperation *)RequestRecipientTokenAsyncUsingParameters:(DSAPIService_RequestRecipientToken *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)TransferEnvelopeUsingParameters:(DSAPIService_TransferEnvelope *)aParameters ;
- (USSoapOperation *)TransferEnvelopeAsyncUsingParameters:(DSAPIService_TransferEnvelope *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetAccountMembershipFeaturesListUsingParameters:(DSAPIService_GetAccountMembershipFeaturesList *)aParameters ;
- (USSoapOperation *)GetAccountMembershipFeaturesListAsyncUsingParameters:(DSAPIService_GetAccountMembershipFeaturesList *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetAccountSettingsListUsingParameters:(DSAPIService_GetAccountSettingsList *)aParameters ;
- (USSoapOperation *)GetAccountSettingsListAsyncUsingParameters:(DSAPIService_GetAccountSettingsList *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)AcknowledgeAuthoritativeCopyExportUsingParameters:(DSAPIService_AcknowledgeAuthoritativeCopyExport *)aParameters ;
- (USSoapOperation *)AcknowledgeAuthoritativeCopyExportAsyncUsingParameters:(DSAPIService_AcknowledgeAuthoritativeCopyExport *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)ExportAuthoritativeCopyUsingParameters:(DSAPIService_ExportAuthoritativeCopy *)aParameters ;
- (USSoapOperation *)ExportAuthoritativeCopyAsyncUsingParameters:(DSAPIService_ExportAuthoritativeCopy *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)EnvelopeAuditEventsUsingParameters:(DSAPIService_EnvelopeAuditEvents *)aParameters ;
- (USSoapOperation *)EnvelopeAuditEventsAsyncUsingParameters:(DSAPIService_EnvelopeAuditEvents *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)PingUsingParameters:(DSAPIService_Ping *)aParameters ;
- (USSoapOperation *)PingAsyncUsingParameters:(DSAPIService_Ping *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)CreateEnvelopeFromTemplatesUsingParameters:(DSAPIService_CreateEnvelopeFromTemplates *)aParameters ;
- (USSoapOperation *)CreateEnvelopeFromTemplatesAsyncUsingParameters:(DSAPIService_CreateEnvelopeFromTemplates *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)CreateEnvelopeFromTemplatesAndFormsUsingParameters:(DSAPIService_CreateEnvelopeFromTemplatesAndForms *)aParameters ;
- (USSoapOperation *)CreateEnvelopeFromTemplatesAndFormsAsyncUsingParameters:(DSAPIService_CreateEnvelopeFromTemplatesAndForms *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetStatusInDocuSignConnectFormatUsingParameters:(DSAPIService_GetStatusInDocuSignConnectFormat *)aParameters ;
- (USSoapOperation *)GetStatusInDocuSignConnectFormatAsyncUsingParameters:(DSAPIService_GetStatusInDocuSignConnectFormat *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)PurgeDocumentsUsingParameters:(DSAPIService_PurgeDocuments *)aParameters ;
- (USSoapOperation *)PurgeDocumentsAsyncUsingParameters:(DSAPIService_PurgeDocuments *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)SaveTemplateUsingParameters:(DSAPIService_SaveTemplate *)aParameters ;
- (USSoapOperation *)SaveTemplateAsyncUsingParameters:(DSAPIService_SaveTemplate *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)UploadTemplateUsingParameters:(DSAPIService_UploadTemplate *)aParameters ;
- (USSoapOperation *)UploadTemplateAsyncUsingParameters:(DSAPIService_UploadTemplate *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestTemplatesUsingParameters:(DSAPIService_RequestTemplates *)aParameters ;
- (USSoapOperation *)RequestTemplatesAsyncUsingParameters:(DSAPIService_RequestTemplates *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestTemplateUsingParameters:(DSAPIService_RequestTemplate *)aParameters ;
- (USSoapOperation *)RequestTemplateAsyncUsingParameters:(DSAPIService_RequestTemplate *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestTemplateListUsingParameters:(DSAPIService_RequestTemplateList *)aParameters ;
- (USSoapOperation *)RequestTemplateListAsyncUsingParameters:(DSAPIService_RequestTemplateList *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetAuthenticationTokenUsingParameters:(DSAPIService_GetAuthenticationToken *)aParameters ;
- (USSoapOperation *)GetAuthenticationTokenAsyncUsingParameters:(DSAPIService_GetAuthenticationToken *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetAddressBookItemsUsingParameters:(DSAPIService_GetAddressBookItems *)aParameters ;
- (USSoapOperation *)GetAddressBookItemsAsyncUsingParameters:(DSAPIService_GetAddressBookItems *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)UpdateAddressBookItemsUsingParameters:(DSAPIService_UpdateAddressBookItems *)aParameters ;
- (USSoapOperation *)UpdateAddressBookItemsAsyncUsingParameters:(DSAPIService_UpdateAddressBookItems *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RemoveAddressBookItemsUsingParameters:(DSAPIService_RemoveAddressBookItems *)aParameters ;
- (USSoapOperation *)RemoveAddressBookItemsAsyncUsingParameters:(DSAPIService_RemoveAddressBookItems *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)SynchEnvelopeUsingParameters:(DSAPIService_SynchEnvelope *)aParameters ;
- (USSoapOperation *)SynchEnvelopeAsyncUsingParameters:(DSAPIService_SynchEnvelope *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestSenderTokenUsingParameters:(DSAPIService_RequestSenderToken *)aParameters ;
- (USSoapOperation *)RequestSenderTokenAsyncUsingParameters:(DSAPIService_RequestSenderToken *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestCorrectTokenUsingParameters:(DSAPIService_RequestCorrectToken *)aParameters ;
- (USSoapOperation *)RequestCorrectTokenAsyncUsingParameters:(DSAPIService_RequestCorrectToken *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetFolderItemsUsingParameters:(DSAPIService_GetFolderItems *)aParameters ;
- (USSoapOperation *)GetFolderItemsAsyncUsingParameters:(DSAPIService_GetFolderItems *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetFolderListUsingParameters:(DSAPIService_GetFolderList *)aParameters ;
- (USSoapOperation *)GetFolderListAsyncUsingParameters:(DSAPIService_GetFolderList *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestEnvelopeUsingParameters:(DSAPIService_RequestEnvelope *)aParameters ;
- (USSoapOperation *)RequestEnvelopeAsyncUsingParameters:(DSAPIService_RequestEnvelope *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetConnectFailuresUsingParameters:(DSAPIService_GetConnectFailures *)aParameters ;
- (USSoapOperation *)GetConnectFailuresAsyncUsingParameters:(DSAPIService_GetConnectFailures *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)PublishConnectFailuresUsingParameters:(DSAPIService_PublishConnectFailures *)aParameters ;
- (USSoapOperation *)PublishConnectFailuresAsyncUsingParameters:(DSAPIService_PublishConnectFailures *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
@end
@interface DSAPIServiceSoapBinding_CreateEnvelope : USSoapOperation {
	DSAPIService_CreateEnvelope * parameters;
}
@property (nonatomic, retain) DSAPIService_CreateEnvelope * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_CreateEnvelope *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_CreateAndSendEnvelope : USSoapOperation {
	DSAPIService_CreateAndSendEnvelope * parameters;
}
@property (nonatomic, retain) DSAPIService_CreateAndSendEnvelope * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_CreateAndSendEnvelope *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_SendEnvelope : USSoapOperation {
	DSAPIService_SendEnvelope * parameters;
}
@property (nonatomic, retain) DSAPIService_SendEnvelope * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_SendEnvelope *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_CorrectAndResendEnvelope : USSoapOperation {
	DSAPIService_CorrectAndResendEnvelope * parameters;
}
@property (nonatomic, retain) DSAPIService_CorrectAndResendEnvelope * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_CorrectAndResendEnvelope *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_RequestPDFNoWaterMark : USSoapOperation {
	DSAPIService_RequestPDFNoWaterMark * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestPDFNoWaterMark * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestPDFNoWaterMark *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_RequestPDF : USSoapOperation {
	DSAPIService_RequestPDF * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestPDF * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestPDF *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_RequestPDFWithCert : USSoapOperation {
	DSAPIService_RequestPDFWithCert * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestPDFWithCert * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestPDFWithCert *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_RequestCertificate : USSoapOperation {
	DSAPIService_RequestCertificate * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestCertificate * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestCertificate *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_RequestDocumentPDFs : USSoapOperation {
	DSAPIService_RequestDocumentPDFs * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestDocumentPDFs * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestDocumentPDFs *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_RequestDocumentPDFsEx : USSoapOperation {
	DSAPIService_RequestDocumentPDFsEx * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestDocumentPDFsEx * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestDocumentPDFsEx *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_RequestDocumentPDFsRecipientsView : USSoapOperation {
	DSAPIService_RequestDocumentPDFsRecipientsView * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestDocumentPDFsRecipientsView * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestDocumentPDFsRecipientsView *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_RequestStatusEx : USSoapOperation {
	DSAPIService_RequestStatusEx * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestStatusEx * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestStatusEx *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_RequestStatus : USSoapOperation {
	DSAPIService_RequestStatus * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestStatus * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestStatus *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_RequestStatusCodes : USSoapOperation {
	DSAPIService_RequestStatusCodes * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestStatusCodes * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestStatusCodes *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_RequestStatusChanges : USSoapOperation {
	DSAPIService_RequestStatusChanges * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestStatusChanges * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestStatusChanges *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_RequestStatusesEx : USSoapOperation {
	DSAPIService_RequestStatusesEx * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestStatusesEx * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestStatusesEx *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_RequestStatuses : USSoapOperation {
	DSAPIService_RequestStatuses * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestStatuses * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestStatuses *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_GetRecipientEsignList : USSoapOperation {
	DSAPIService_GetRecipientEsignList * parameters;
}
@property (nonatomic, retain) DSAPIService_GetRecipientEsignList * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetRecipientEsignList *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_GetRecipientList : USSoapOperation {
	DSAPIService_GetRecipientList * parameters;
}
@property (nonatomic, retain) DSAPIService_GetRecipientList * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetRecipientList *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_GetRecipientAuthenticationStatusEx : USSoapOperation {
	DSAPIService_GetRecipientAuthenticationStatusEx * parameters;
}
@property (nonatomic, retain) DSAPIService_GetRecipientAuthenticationStatusEx * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetRecipientAuthenticationStatusEx *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_VoidEnvelope : USSoapOperation {
	DSAPIService_VoidEnvelope * parameters;
}
@property (nonatomic, retain) DSAPIService_VoidEnvelope * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_VoidEnvelope *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_MoveEnvelopes : USSoapOperation {
	DSAPIService_MoveEnvelopes * parameters;
}
@property (nonatomic, retain) DSAPIService_MoveEnvelopes * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_MoveEnvelopes *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_DeleteEnvelopes : USSoapOperation {
	DSAPIService_DeleteEnvelopes * parameters;
}
@property (nonatomic, retain) DSAPIService_DeleteEnvelopes * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_DeleteEnvelopes *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_RequestRecipientToken : USSoapOperation {
	DSAPIService_RequestRecipientToken * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestRecipientToken * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestRecipientToken *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_TransferEnvelope : USSoapOperation {
	DSAPIService_TransferEnvelope * parameters;
}
@property (nonatomic, retain) DSAPIService_TransferEnvelope * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_TransferEnvelope *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_GetAccountMembershipFeaturesList : USSoapOperation {
	DSAPIService_GetAccountMembershipFeaturesList * parameters;
}
@property (nonatomic, retain) DSAPIService_GetAccountMembershipFeaturesList * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetAccountMembershipFeaturesList *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_GetAccountSettingsList : USSoapOperation {
	DSAPIService_GetAccountSettingsList * parameters;
}
@property (nonatomic, retain) DSAPIService_GetAccountSettingsList * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetAccountSettingsList *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_AcknowledgeAuthoritativeCopyExport : USSoapOperation {
	DSAPIService_AcknowledgeAuthoritativeCopyExport * parameters;
}
@property (nonatomic, retain) DSAPIService_AcknowledgeAuthoritativeCopyExport * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_AcknowledgeAuthoritativeCopyExport *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_ExportAuthoritativeCopy : USSoapOperation {
	DSAPIService_ExportAuthoritativeCopy * parameters;
}
@property (nonatomic, retain) DSAPIService_ExportAuthoritativeCopy * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_ExportAuthoritativeCopy *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_EnvelopeAuditEvents : USSoapOperation {
	DSAPIService_EnvelopeAuditEvents * parameters;
}
@property (nonatomic, retain) DSAPIService_EnvelopeAuditEvents * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_EnvelopeAuditEvents *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_Ping : USSoapOperation {
	DSAPIService_Ping * parameters;
}
@property (nonatomic, retain) DSAPIService_Ping * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_Ping *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_CreateEnvelopeFromTemplates : USSoapOperation {
	DSAPIService_CreateEnvelopeFromTemplates * parameters;
}
@property (nonatomic, retain) DSAPIService_CreateEnvelopeFromTemplates * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_CreateEnvelopeFromTemplates *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_CreateEnvelopeFromTemplatesAndForms : USSoapOperation {
	DSAPIService_CreateEnvelopeFromTemplatesAndForms * parameters;
}
@property (nonatomic, retain) DSAPIService_CreateEnvelopeFromTemplatesAndForms * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_CreateEnvelopeFromTemplatesAndForms *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_GetStatusInDocuSignConnectFormat : USSoapOperation {
	DSAPIService_GetStatusInDocuSignConnectFormat * parameters;
}
@property (nonatomic, retain) DSAPIService_GetStatusInDocuSignConnectFormat * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetStatusInDocuSignConnectFormat *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_PurgeDocuments : USSoapOperation {
	DSAPIService_PurgeDocuments * parameters;
}
@property (nonatomic, retain) DSAPIService_PurgeDocuments * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_PurgeDocuments *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_SaveTemplate : USSoapOperation {
	DSAPIService_SaveTemplate * parameters;
}
@property (nonatomic, retain) DSAPIService_SaveTemplate * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_SaveTemplate *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_UploadTemplate : USSoapOperation {
	DSAPIService_UploadTemplate * parameters;
}
@property (nonatomic, retain) DSAPIService_UploadTemplate * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_UploadTemplate *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_RequestTemplates : USSoapOperation {
	DSAPIService_RequestTemplates * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestTemplates * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestTemplates *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_RequestTemplate : USSoapOperation {
	DSAPIService_RequestTemplate * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestTemplate * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestTemplate *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_RequestTemplateList : USSoapOperation {
	DSAPIService_RequestTemplateList * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestTemplateList * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestTemplateList *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_GetAuthenticationToken : USSoapOperation {
	DSAPIService_GetAuthenticationToken * parameters;
}
@property (nonatomic, retain) DSAPIService_GetAuthenticationToken * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetAuthenticationToken *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_GetAddressBookItems : USSoapOperation {
	DSAPIService_GetAddressBookItems * parameters;
}
@property (nonatomic, retain) DSAPIService_GetAddressBookItems * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetAddressBookItems *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_UpdateAddressBookItems : USSoapOperation {
	DSAPIService_UpdateAddressBookItems * parameters;
}
@property (nonatomic, retain) DSAPIService_UpdateAddressBookItems * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_UpdateAddressBookItems *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_RemoveAddressBookItems : USSoapOperation {
	DSAPIService_RemoveAddressBookItems * parameters;
}
@property (nonatomic, retain) DSAPIService_RemoveAddressBookItems * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RemoveAddressBookItems *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_SynchEnvelope : USSoapOperation {
	DSAPIService_SynchEnvelope * parameters;
}
@property (nonatomic, retain) DSAPIService_SynchEnvelope * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_SynchEnvelope *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_RequestSenderToken : USSoapOperation {
	DSAPIService_RequestSenderToken * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestSenderToken * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestSenderToken *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_RequestCorrectToken : USSoapOperation {
	DSAPIService_RequestCorrectToken * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestCorrectToken * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestCorrectToken *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_GetFolderItems : USSoapOperation {
	DSAPIService_GetFolderItems * parameters;
}
@property (nonatomic, retain) DSAPIService_GetFolderItems * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetFolderItems *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_GetFolderList : USSoapOperation {
	DSAPIService_GetFolderList * parameters;
}
@property (nonatomic, retain) DSAPIService_GetFolderList * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetFolderList *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_RequestEnvelope : USSoapOperation {
	DSAPIService_RequestEnvelope * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestEnvelope * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestEnvelope *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_GetConnectFailures : USSoapOperation {
	DSAPIService_GetConnectFailures * parameters;
}
@property (nonatomic, retain) DSAPIService_GetConnectFailures * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetConnectFailures *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_PublishConnectFailures : USSoapOperation {
	DSAPIService_PublishConnectFailures * parameters;
}
@property (nonatomic, retain) DSAPIService_PublishConnectFailures * parameters;
- (id)initWithBinding:(DSAPIServiceSoapBinding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_PublishConnectFailures *)aParameters
;
@end
@interface DSAPIServiceSoapBinding_envelope : NSObject {
}
+ (DSAPIServiceSoapBinding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements bodyKeys:(NSArray *)bodyKeys;
@end
@class USSoapResponse;
@class USSoapOperation;
@interface DSAPIServiceSoap12Binding : USSoapBinding {
}
- (USSoapResponse *)CreateEnvelopeUsingParameters:(DSAPIService_CreateEnvelope *)aParameters ;
- (USSoapOperation *)CreateEnvelopeAsyncUsingParameters:(DSAPIService_CreateEnvelope *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)CreateAndSendEnvelopeUsingParameters:(DSAPIService_CreateAndSendEnvelope *)aParameters ;
- (USSoapOperation *)CreateAndSendEnvelopeAsyncUsingParameters:(DSAPIService_CreateAndSendEnvelope *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)SendEnvelopeUsingParameters:(DSAPIService_SendEnvelope *)aParameters ;
- (USSoapOperation *)SendEnvelopeAsyncUsingParameters:(DSAPIService_SendEnvelope *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)CorrectAndResendEnvelopeUsingParameters:(DSAPIService_CorrectAndResendEnvelope *)aParameters ;
- (USSoapOperation *)CorrectAndResendEnvelopeAsyncUsingParameters:(DSAPIService_CorrectAndResendEnvelope *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestPDFNoWaterMarkUsingParameters:(DSAPIService_RequestPDFNoWaterMark *)aParameters ;
- (USSoapOperation *)RequestPDFNoWaterMarkAsyncUsingParameters:(DSAPIService_RequestPDFNoWaterMark *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestPDFUsingParameters:(DSAPIService_RequestPDF *)aParameters ;
- (USSoapOperation *)RequestPDFAsyncUsingParameters:(DSAPIService_RequestPDF *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestPDFWithCertUsingParameters:(DSAPIService_RequestPDFWithCert *)aParameters ;
- (USSoapOperation *)RequestPDFWithCertAsyncUsingParameters:(DSAPIService_RequestPDFWithCert *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestCertificateUsingParameters:(DSAPIService_RequestCertificate *)aParameters ;
- (USSoapOperation *)RequestCertificateAsyncUsingParameters:(DSAPIService_RequestCertificate *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestDocumentPDFsUsingParameters:(DSAPIService_RequestDocumentPDFs *)aParameters ;
- (USSoapOperation *)RequestDocumentPDFsAsyncUsingParameters:(DSAPIService_RequestDocumentPDFs *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestDocumentPDFsExUsingParameters:(DSAPIService_RequestDocumentPDFsEx *)aParameters ;
- (USSoapOperation *)RequestDocumentPDFsExAsyncUsingParameters:(DSAPIService_RequestDocumentPDFsEx *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestDocumentPDFsRecipientsViewUsingParameters:(DSAPIService_RequestDocumentPDFsRecipientsView *)aParameters ;
- (USSoapOperation *)RequestDocumentPDFsRecipientsViewAsyncUsingParameters:(DSAPIService_RequestDocumentPDFsRecipientsView *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestStatusExUsingParameters:(DSAPIService_RequestStatusEx *)aParameters ;
- (USSoapOperation *)RequestStatusExAsyncUsingParameters:(DSAPIService_RequestStatusEx *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestStatusUsingParameters:(DSAPIService_RequestStatus *)aParameters ;
- (USSoapOperation *)RequestStatusAsyncUsingParameters:(DSAPIService_RequestStatus *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestStatusCodesUsingParameters:(DSAPIService_RequestStatusCodes *)aParameters ;
- (USSoapOperation *)RequestStatusCodesAsyncUsingParameters:(DSAPIService_RequestStatusCodes *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestStatusChangesUsingParameters:(DSAPIService_RequestStatusChanges *)aParameters ;
- (USSoapOperation *)RequestStatusChangesAsyncUsingParameters:(DSAPIService_RequestStatusChanges *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestStatusesExUsingParameters:(DSAPIService_RequestStatusesEx *)aParameters ;
- (USSoapOperation *)RequestStatusesExAsyncUsingParameters:(DSAPIService_RequestStatusesEx *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestStatusesUsingParameters:(DSAPIService_RequestStatuses *)aParameters ;
- (USSoapOperation *)RequestStatusesAsyncUsingParameters:(DSAPIService_RequestStatuses *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetRecipientEsignListUsingParameters:(DSAPIService_GetRecipientEsignList *)aParameters ;
- (USSoapOperation *)GetRecipientEsignListAsyncUsingParameters:(DSAPIService_GetRecipientEsignList *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetRecipientListUsingParameters:(DSAPIService_GetRecipientList *)aParameters ;
- (USSoapOperation *)GetRecipientListAsyncUsingParameters:(DSAPIService_GetRecipientList *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetRecipientAuthenticationStatusExUsingParameters:(DSAPIService_GetRecipientAuthenticationStatusEx *)aParameters ;
- (USSoapOperation *)GetRecipientAuthenticationStatusExAsyncUsingParameters:(DSAPIService_GetRecipientAuthenticationStatusEx *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)VoidEnvelopeUsingParameters:(DSAPIService_VoidEnvelope *)aParameters ;
- (USSoapOperation *)VoidEnvelopeAsyncUsingParameters:(DSAPIService_VoidEnvelope *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)MoveEnvelopesUsingParameters:(DSAPIService_MoveEnvelopes *)aParameters ;
- (USSoapOperation *)MoveEnvelopesAsyncUsingParameters:(DSAPIService_MoveEnvelopes *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)DeleteEnvelopesUsingParameters:(DSAPIService_DeleteEnvelopes *)aParameters ;
- (USSoapOperation *)DeleteEnvelopesAsyncUsingParameters:(DSAPIService_DeleteEnvelopes *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestRecipientTokenUsingParameters:(DSAPIService_RequestRecipientToken *)aParameters ;
- (USSoapOperation *)RequestRecipientTokenAsyncUsingParameters:(DSAPIService_RequestRecipientToken *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)TransferEnvelopeUsingParameters:(DSAPIService_TransferEnvelope *)aParameters ;
- (USSoapOperation *)TransferEnvelopeAsyncUsingParameters:(DSAPIService_TransferEnvelope *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetAccountMembershipFeaturesListUsingParameters:(DSAPIService_GetAccountMembershipFeaturesList *)aParameters ;
- (USSoapOperation *)GetAccountMembershipFeaturesListAsyncUsingParameters:(DSAPIService_GetAccountMembershipFeaturesList *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetAccountSettingsListUsingParameters:(DSAPIService_GetAccountSettingsList *)aParameters ;
- (USSoapOperation *)GetAccountSettingsListAsyncUsingParameters:(DSAPIService_GetAccountSettingsList *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)AcknowledgeAuthoritativeCopyExportUsingParameters:(DSAPIService_AcknowledgeAuthoritativeCopyExport *)aParameters ;
- (USSoapOperation *)AcknowledgeAuthoritativeCopyExportAsyncUsingParameters:(DSAPIService_AcknowledgeAuthoritativeCopyExport *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)ExportAuthoritativeCopyUsingParameters:(DSAPIService_ExportAuthoritativeCopy *)aParameters ;
- (USSoapOperation *)ExportAuthoritativeCopyAsyncUsingParameters:(DSAPIService_ExportAuthoritativeCopy *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)EnvelopeAuditEventsUsingParameters:(DSAPIService_EnvelopeAuditEvents *)aParameters ;
- (USSoapOperation *)EnvelopeAuditEventsAsyncUsingParameters:(DSAPIService_EnvelopeAuditEvents *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)PingUsingParameters:(DSAPIService_Ping *)aParameters ;
- (USSoapOperation *)PingAsyncUsingParameters:(DSAPIService_Ping *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)CreateEnvelopeFromTemplatesUsingParameters:(DSAPIService_CreateEnvelopeFromTemplates *)aParameters ;
- (USSoapOperation *)CreateEnvelopeFromTemplatesAsyncUsingParameters:(DSAPIService_CreateEnvelopeFromTemplates *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)CreateEnvelopeFromTemplatesAndFormsUsingParameters:(DSAPIService_CreateEnvelopeFromTemplatesAndForms *)aParameters ;
- (USSoapOperation *)CreateEnvelopeFromTemplatesAndFormsAsyncUsingParameters:(DSAPIService_CreateEnvelopeFromTemplatesAndForms *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetStatusInDocuSignConnectFormatUsingParameters:(DSAPIService_GetStatusInDocuSignConnectFormat *)aParameters ;
- (USSoapOperation *)GetStatusInDocuSignConnectFormatAsyncUsingParameters:(DSAPIService_GetStatusInDocuSignConnectFormat *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)PurgeDocumentsUsingParameters:(DSAPIService_PurgeDocuments *)aParameters ;
- (USSoapOperation *)PurgeDocumentsAsyncUsingParameters:(DSAPIService_PurgeDocuments *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)SaveTemplateUsingParameters:(DSAPIService_SaveTemplate *)aParameters ;
- (USSoapOperation *)SaveTemplateAsyncUsingParameters:(DSAPIService_SaveTemplate *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)UploadTemplateUsingParameters:(DSAPIService_UploadTemplate *)aParameters ;
- (USSoapOperation *)UploadTemplateAsyncUsingParameters:(DSAPIService_UploadTemplate *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestTemplatesUsingParameters:(DSAPIService_RequestTemplates *)aParameters ;
- (USSoapOperation *)RequestTemplatesAsyncUsingParameters:(DSAPIService_RequestTemplates *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestTemplateUsingParameters:(DSAPIService_RequestTemplate *)aParameters ;
- (USSoapOperation *)RequestTemplateAsyncUsingParameters:(DSAPIService_RequestTemplate *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestTemplateListUsingParameters:(DSAPIService_RequestTemplateList *)aParameters ;
- (USSoapOperation *)RequestTemplateListAsyncUsingParameters:(DSAPIService_RequestTemplateList *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetAuthenticationTokenUsingParameters:(DSAPIService_GetAuthenticationToken *)aParameters ;
- (USSoapOperation *)GetAuthenticationTokenAsyncUsingParameters:(DSAPIService_GetAuthenticationToken *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetAddressBookItemsUsingParameters:(DSAPIService_GetAddressBookItems *)aParameters ;
- (USSoapOperation *)GetAddressBookItemsAsyncUsingParameters:(DSAPIService_GetAddressBookItems *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)UpdateAddressBookItemsUsingParameters:(DSAPIService_UpdateAddressBookItems *)aParameters ;
- (USSoapOperation *)UpdateAddressBookItemsAsyncUsingParameters:(DSAPIService_UpdateAddressBookItems *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RemoveAddressBookItemsUsingParameters:(DSAPIService_RemoveAddressBookItems *)aParameters ;
- (USSoapOperation *)RemoveAddressBookItemsAsyncUsingParameters:(DSAPIService_RemoveAddressBookItems *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)SynchEnvelopeUsingParameters:(DSAPIService_SynchEnvelope *)aParameters ;
- (USSoapOperation *)SynchEnvelopeAsyncUsingParameters:(DSAPIService_SynchEnvelope *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestSenderTokenUsingParameters:(DSAPIService_RequestSenderToken *)aParameters ;
- (USSoapOperation *)RequestSenderTokenAsyncUsingParameters:(DSAPIService_RequestSenderToken *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestCorrectTokenUsingParameters:(DSAPIService_RequestCorrectToken *)aParameters ;
- (USSoapOperation *)RequestCorrectTokenAsyncUsingParameters:(DSAPIService_RequestCorrectToken *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetFolderItemsUsingParameters:(DSAPIService_GetFolderItems *)aParameters ;
- (USSoapOperation *)GetFolderItemsAsyncUsingParameters:(DSAPIService_GetFolderItems *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetFolderListUsingParameters:(DSAPIService_GetFolderList *)aParameters ;
- (USSoapOperation *)GetFolderListAsyncUsingParameters:(DSAPIService_GetFolderList *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)RequestEnvelopeUsingParameters:(DSAPIService_RequestEnvelope *)aParameters ;
- (USSoapOperation *)RequestEnvelopeAsyncUsingParameters:(DSAPIService_RequestEnvelope *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)GetConnectFailuresUsingParameters:(DSAPIService_GetConnectFailures *)aParameters ;
- (USSoapOperation *)GetConnectFailuresAsyncUsingParameters:(DSAPIService_GetConnectFailures *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
- (USSoapResponse *)PublishConnectFailuresUsingParameters:(DSAPIService_PublishConnectFailures *)aParameters ;
- (USSoapOperation *)PublishConnectFailuresAsyncUsingParameters:(DSAPIService_PublishConnectFailures *)aParameters  delegate:(id<USSoapResponseDelegate>)responseDelegate;
@end
@interface DSAPIServiceSoap12Binding_CreateEnvelope : USSoapOperation {
	DSAPIService_CreateEnvelope * parameters;
}
@property (nonatomic, retain) DSAPIService_CreateEnvelope * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_CreateEnvelope *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_CreateAndSendEnvelope : USSoapOperation {
	DSAPIService_CreateAndSendEnvelope * parameters;
}
@property (nonatomic, retain) DSAPIService_CreateAndSendEnvelope * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_CreateAndSendEnvelope *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_SendEnvelope : USSoapOperation {
	DSAPIService_SendEnvelope * parameters;
}
@property (nonatomic, retain) DSAPIService_SendEnvelope * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_SendEnvelope *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_CorrectAndResendEnvelope : USSoapOperation {
	DSAPIService_CorrectAndResendEnvelope * parameters;
}
@property (nonatomic, retain) DSAPIService_CorrectAndResendEnvelope * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_CorrectAndResendEnvelope *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_RequestPDFNoWaterMark : USSoapOperation {
	DSAPIService_RequestPDFNoWaterMark * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestPDFNoWaterMark * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestPDFNoWaterMark *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_RequestPDF : USSoapOperation {
	DSAPIService_RequestPDF * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestPDF * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestPDF *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_RequestPDFWithCert : USSoapOperation {
	DSAPIService_RequestPDFWithCert * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestPDFWithCert * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestPDFWithCert *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_RequestCertificate : USSoapOperation {
	DSAPIService_RequestCertificate * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestCertificate * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestCertificate *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_RequestDocumentPDFs : USSoapOperation {
	DSAPIService_RequestDocumentPDFs * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestDocumentPDFs * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestDocumentPDFs *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_RequestDocumentPDFsEx : USSoapOperation {
	DSAPIService_RequestDocumentPDFsEx * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestDocumentPDFsEx * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestDocumentPDFsEx *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_RequestDocumentPDFsRecipientsView : USSoapOperation {
	DSAPIService_RequestDocumentPDFsRecipientsView * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestDocumentPDFsRecipientsView * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestDocumentPDFsRecipientsView *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_RequestStatusEx : USSoapOperation {
	DSAPIService_RequestStatusEx * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestStatusEx * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestStatusEx *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_RequestStatus : USSoapOperation {
	DSAPIService_RequestStatus * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestStatus * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestStatus *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_RequestStatusCodes : USSoapOperation {
	DSAPIService_RequestStatusCodes * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestStatusCodes * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestStatusCodes *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_RequestStatusChanges : USSoapOperation {
	DSAPIService_RequestStatusChanges * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestStatusChanges * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestStatusChanges *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_RequestStatusesEx : USSoapOperation {
	DSAPIService_RequestStatusesEx * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestStatusesEx * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestStatusesEx *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_RequestStatuses : USSoapOperation {
	DSAPIService_RequestStatuses * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestStatuses * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestStatuses *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_GetRecipientEsignList : USSoapOperation {
	DSAPIService_GetRecipientEsignList * parameters;
}
@property (nonatomic, retain) DSAPIService_GetRecipientEsignList * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetRecipientEsignList *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_GetRecipientList : USSoapOperation {
	DSAPIService_GetRecipientList * parameters;
}
@property (nonatomic, retain) DSAPIService_GetRecipientList * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetRecipientList *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_GetRecipientAuthenticationStatusEx : USSoapOperation {
	DSAPIService_GetRecipientAuthenticationStatusEx * parameters;
}
@property (nonatomic, retain) DSAPIService_GetRecipientAuthenticationStatusEx * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetRecipientAuthenticationStatusEx *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_VoidEnvelope : USSoapOperation {
	DSAPIService_VoidEnvelope * parameters;
}
@property (nonatomic, retain) DSAPIService_VoidEnvelope * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_VoidEnvelope *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_MoveEnvelopes : USSoapOperation {
	DSAPIService_MoveEnvelopes * parameters;
}
@property (nonatomic, retain) DSAPIService_MoveEnvelopes * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_MoveEnvelopes *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_DeleteEnvelopes : USSoapOperation {
	DSAPIService_DeleteEnvelopes * parameters;
}
@property (nonatomic, retain) DSAPIService_DeleteEnvelopes * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_DeleteEnvelopes *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_RequestRecipientToken : USSoapOperation {
	DSAPIService_RequestRecipientToken * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestRecipientToken * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestRecipientToken *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_TransferEnvelope : USSoapOperation {
	DSAPIService_TransferEnvelope * parameters;
}
@property (nonatomic, retain) DSAPIService_TransferEnvelope * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_TransferEnvelope *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_GetAccountMembershipFeaturesList : USSoapOperation {
	DSAPIService_GetAccountMembershipFeaturesList * parameters;
}
@property (nonatomic, retain) DSAPIService_GetAccountMembershipFeaturesList * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetAccountMembershipFeaturesList *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_GetAccountSettingsList : USSoapOperation {
	DSAPIService_GetAccountSettingsList * parameters;
}
@property (nonatomic, retain) DSAPIService_GetAccountSettingsList * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetAccountSettingsList *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_AcknowledgeAuthoritativeCopyExport : USSoapOperation {
	DSAPIService_AcknowledgeAuthoritativeCopyExport * parameters;
}
@property (nonatomic, retain) DSAPIService_AcknowledgeAuthoritativeCopyExport * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_AcknowledgeAuthoritativeCopyExport *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_ExportAuthoritativeCopy : USSoapOperation {
	DSAPIService_ExportAuthoritativeCopy * parameters;
}
@property (nonatomic, retain) DSAPIService_ExportAuthoritativeCopy * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_ExportAuthoritativeCopy *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_EnvelopeAuditEvents : USSoapOperation {
	DSAPIService_EnvelopeAuditEvents * parameters;
}
@property (nonatomic, retain) DSAPIService_EnvelopeAuditEvents * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_EnvelopeAuditEvents *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_Ping : USSoapOperation {
	DSAPIService_Ping * parameters;
}
@property (nonatomic, retain) DSAPIService_Ping * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_Ping *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_CreateEnvelopeFromTemplates : USSoapOperation {
	DSAPIService_CreateEnvelopeFromTemplates * parameters;
}
@property (nonatomic, retain) DSAPIService_CreateEnvelopeFromTemplates * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_CreateEnvelopeFromTemplates *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_CreateEnvelopeFromTemplatesAndForms : USSoapOperation {
	DSAPIService_CreateEnvelopeFromTemplatesAndForms * parameters;
}
@property (nonatomic, retain) DSAPIService_CreateEnvelopeFromTemplatesAndForms * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_CreateEnvelopeFromTemplatesAndForms *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_GetStatusInDocuSignConnectFormat : USSoapOperation {
	DSAPIService_GetStatusInDocuSignConnectFormat * parameters;
}
@property (nonatomic, retain) DSAPIService_GetStatusInDocuSignConnectFormat * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetStatusInDocuSignConnectFormat *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_PurgeDocuments : USSoapOperation {
	DSAPIService_PurgeDocuments * parameters;
}
@property (nonatomic, retain) DSAPIService_PurgeDocuments * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_PurgeDocuments *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_SaveTemplate : USSoapOperation {
	DSAPIService_SaveTemplate * parameters;
}
@property (nonatomic, retain) DSAPIService_SaveTemplate * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_SaveTemplate *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_UploadTemplate : USSoapOperation {
	DSAPIService_UploadTemplate * parameters;
}
@property (nonatomic, retain) DSAPIService_UploadTemplate * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_UploadTemplate *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_RequestTemplates : USSoapOperation {
	DSAPIService_RequestTemplates * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestTemplates * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestTemplates *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_RequestTemplate : USSoapOperation {
	DSAPIService_RequestTemplate * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestTemplate * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestTemplate *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_RequestTemplateList : USSoapOperation {
	DSAPIService_RequestTemplateList * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestTemplateList * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestTemplateList *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_GetAuthenticationToken : USSoapOperation {
	DSAPIService_GetAuthenticationToken * parameters;
}
@property (nonatomic, retain) DSAPIService_GetAuthenticationToken * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetAuthenticationToken *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_GetAddressBookItems : USSoapOperation {
	DSAPIService_GetAddressBookItems * parameters;
}
@property (nonatomic, retain) DSAPIService_GetAddressBookItems * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetAddressBookItems *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_UpdateAddressBookItems : USSoapOperation {
	DSAPIService_UpdateAddressBookItems * parameters;
}
@property (nonatomic, retain) DSAPIService_UpdateAddressBookItems * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_UpdateAddressBookItems *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_RemoveAddressBookItems : USSoapOperation {
	DSAPIService_RemoveAddressBookItems * parameters;
}
@property (nonatomic, retain) DSAPIService_RemoveAddressBookItems * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RemoveAddressBookItems *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_SynchEnvelope : USSoapOperation {
	DSAPIService_SynchEnvelope * parameters;
}
@property (nonatomic, retain) DSAPIService_SynchEnvelope * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_SynchEnvelope *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_RequestSenderToken : USSoapOperation {
	DSAPIService_RequestSenderToken * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestSenderToken * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestSenderToken *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_RequestCorrectToken : USSoapOperation {
	DSAPIService_RequestCorrectToken * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestCorrectToken * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestCorrectToken *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_GetFolderItems : USSoapOperation {
	DSAPIService_GetFolderItems * parameters;
}
@property (nonatomic, retain) DSAPIService_GetFolderItems * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetFolderItems *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_GetFolderList : USSoapOperation {
	DSAPIService_GetFolderList * parameters;
}
@property (nonatomic, retain) DSAPIService_GetFolderList * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetFolderList *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_RequestEnvelope : USSoapOperation {
	DSAPIService_RequestEnvelope * parameters;
}
@property (nonatomic, retain) DSAPIService_RequestEnvelope * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_RequestEnvelope *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_GetConnectFailures : USSoapOperation {
	DSAPIService_GetConnectFailures * parameters;
}
@property (nonatomic, retain) DSAPIService_GetConnectFailures * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_GetConnectFailures *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_PublishConnectFailures : USSoapOperation {
	DSAPIService_PublishConnectFailures * parameters;
}
@property (nonatomic, retain) DSAPIService_PublishConnectFailures * parameters;
- (id)initWithBinding:(DSAPIServiceSoap12Binding *)aBinding delegate:(id<USSoapResponseDelegate>)aDelegate
	parameters:(DSAPIService_PublishConnectFailures *)aParameters
;
@end
@interface DSAPIServiceSoap12Binding_envelope : NSObject {
}
+ (DSAPIServiceSoap12Binding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements bodyKeys:(NSArray *)bodyKeys;
@end
