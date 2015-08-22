//
//  CEOMRequestData.h
//  CEO Mobile iPhone
//
//  Created by Rao Repalle, Venkateswara R. on 5/12/15.
//  Copyright (c) 2015 Wells Fargo. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef NS_ENUM(NSInteger, CEONetworkRequestType) {
    CEONetworkRequestTypeGET,
    CEONetworkRequestTypePOST
};

typedef NS_ENUM(NSInteger, CEOMobileServiceType)
{
    CEOMobileServiceTypeSendNotificationToken,
    CEOMobileServiceTypeGetBadgeCounts,
    CEOMobileServiceTypeSignOn,
    CEOMobileServiceTypeChangePassword,
    CEOMobileServiceTypeValidateTokenAuth,
    CEOMobileServiceTypeGetUserInfo,
    CEOMobileServiceTypeGetUserDeviceInfo,
    CEOMobileServiceTypeIsFeatureAvailable,
    CEOMobileServiceTypeValidateSecondLevelToken,
    CEOMobileServiceTypeGetDeviceEnrollments,
    CEOMobileServiceTypeEMSendEventMessage,
    
    //Face Voice
    CEOMobileServiceTypeFVCreatePersonID,
    CEOMobileServiceTypeFVEnrollAddFaceInfo,
    CEOMobileServiceTypeFVEnrollAddVoice1Info,
    CEOMobileServiceTypeFVEnrollAddVoice2Info,
    CEOMobileServiceTypeFVEnrollAddVoice3Info,
    CEOMobileServiceTypeFVIsEnrollmentComplete,
    CEOMobileServiceTypeFVAuthStartVerification,
    CEOMobileServiceTypeFVAuthAddFaceInfo,
    CEOMobileServiceTypeFVAuthAddVoiceInfo,
    CEOMobileServiceTypeFVAuthGetVerificationStatus,
    //Eye Print
    CEOMobileServiceTypeEVGetEyePrintEnrollInfo,
    CEOMobileServiceTypeEVEyePrintEnrollComplete,
    CEOMobileServiceTypeEVGetEyePrintVerifyInfo,
    CEOMobileServiceTypeEVEyePrintAuthenticate,
    CEOMobileServiceTypeEVUnEnroll,
    //KOFEX
    CEOMobileServiceTypeKOFEXGetDocumentData
};

@interface CEOMRequestData : NSObject
@property (nonatomic) NSString* url;
@property (nonatomic) CEONetworkRequestType networkRequestType;
@property (nonatomic) CEOMobileServiceType serviceType;
@property (nonatomic) NSDictionary* inputParams;
@property (nonatomic) NSDictionary* additionalHeaders;
@property (nonatomic) int timeOutForRequest;
@property (nonatomic) int timeOutForResource;
@property (nonatomic) NSData* postData;
@property (nonatomic) BOOL isPostData;

-(instancetype) initWithURL:(NSString*) reqUrl networkRequestType:(CEONetworkRequestType) nReqType serviceType:(CEOMobileServiceType) reqServiceType inputPrameters:(NSDictionary*) inputParameter;

-(instancetype) initWithURL:(NSString*) reqUrl networkRequestType:(CEONetworkRequestType) nReqType serviceType:(CEOMobileServiceType) reqServiceType inputData:(NSData*) inputPostData;

@end

