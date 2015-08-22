//
//  CEOMobileJSONConstants.h
//  CEOMobileNetwork
//
//  Created by Rao Repalle, Venkateswara R. on 5/22/15.
//  Copyright (c) 2015 Rao Repalle, Venkateswara R. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CEOMobileJSONConstants : NSObject
//Request

//Response pnmId
//PNS
#define kJSON_PNS_MESSAGE           @"message"
#define kJSON_PNS_STATUSCODE        @"statusCode"
#define kJSON_PNS_TITLE             @"title"
#define kJSON_PNS_DeviceUniqueId    @"deviceUniqueId"
#define kJSON_PNS_PNMID             @"pnmId"

//KOFEX
#define kJSON_KOFEX_FRONTIMAGE          @"frontImage"
#define kJSON_KOFEX_UNIQUEIDENTIFIER    @"uniqueIdentifier"
#define kJSON_KOFEX_DEVICECONTEXT       @"deviceContext"

//Event Messaging
#define kJSONEMType                 @"type"
#define kJSONEMProduct              @"product"

//Response
#define kJSONResponseStatusCode     @"status"
#define kJSONResponseErrorReason    @"reason"
#define kNetworkResponseSuccessCode 200

//SignON flow
#define kJSONSignonFlowCompany      @"COMPANY"
#define kJSONSignonFlowPassword     @"PASSWORD"
#define kJSONSignonFlowWFUID        @"WFUID"
#define kJSONSignonFlowPM_FP        @"pm_fp"
#define kJSONSignonFlowTLSessionID  @"tltsid"
#define kJSONSignonFlowIATxID       @"iatxnid"
#define kJSONSignonFlowIAGUID       @"iaguid"
#define kJSONSignonFlowResult       @"RESULT"
#define kJSONSignonFlowReason       @"REASON"
#define kJSONSignonFlowAuthType     @"AUTHTYPE"
#define kJSONSignonAuthTooken             @"AUTHTOKEN"
#define kJSONSignonDeviceMetaData         @"deviceMetaData"
#define kJSONSignonCEOMNonce             @"ceomNonce"
#define kJSONSignonTokenization     @"CEOMSIGNONTOKENIZATIONDATA"
#define kJSONSignonToken            @"token"
#define kJSONSignonLastUsedAuthMethod   @"lastUsedAuthMethod"
#define kJSONSignonFirstName            @"firstName"
#define kJSONSignonLastName             @"lastName"
#define kJSONSignonSecondLevelAccess    @"secondLevelAccess"

#define kJSONCPCurrentPassword      @"PASSWORD"
#define kJSONCPNewPassword          @"NEWPASSWORD"
#define kJSONCPVerifyPassword       @"VERIFYPASSWORD"



#define kJSONUserInfoLastUsedAuthTypeWeb    @"web"
#define kJSONUserInfoLastUsedAuthTypeFaceAndVoce    @"facevoice"
#define kJSONUserInfoLastUsedAuthTypeEye    @"eye"

#define kSignonFailureReasonInvalidUser     @"invu"
#define kSignonFailureReasonInvalidPasswrd  @"invpw"
#define kSignonFailureReasonInvalidInau     @"inau"
#define kSignonFailureReasonInvalidFcpw     @"fcpw"
#define kSignonFailureReasonInvalidDisu     @"disu"

#define kJSONSignonFlowHeaderBioSignon    @"X-BioSignon"
#define kJSONSignonFlowHeaderBioSignonValue    @"1"

//Get UserInfo
#define kJSONUserInfoTokenID                @"tokenId"
#define kJSONUserInfoDeviceId           @"deviceId"
#define kJSONUserInfoLastUsedAuthType   @"lastUsedAuthType"
#define kJSONUserInfoStaticToken        @"staticToken"
#define kJSONUserInfoUserKey            @"userKey"
#define kJSONUserInfoTokenCreationTime  @"tokenCreationTime"
#define kJSONUserInfoFVEnrolled         @"fvenrolled"
#define kJSONUserInfoEVEnrolled         @"evenrolled"
#define kJSONUserInfoFirstName          @"fname"
#define kJSONUserInfolastName           @"lname"

//Eye Verify
#define kJSONEVStaticId                 @"evStaticId"
#define kJSONEVUserId                   @"evUserKey"


//FACE + VOICE
#define kJSONFVPersonId                 @"puserId"
#define kJSONFVBiometricsData           @"data"
#define kJSONFVVerificationId           @"verificationId"
#define kJSONFVAuthPhrase               @"phrase"
@end
