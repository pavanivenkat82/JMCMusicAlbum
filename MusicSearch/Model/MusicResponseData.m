//
//  CEOResponseData.m
//  CEO Mobile iPhone
//
//  Created by Rao Repalle, Venkateswara R. on 5/12/15.
//  Copyright (c) 2015 Wells Fargo. All rights reserved.
//

#import "CEOMResponseData.h"
#import "CEOMobileNetwork.h"

@implementation CEOMResponseData



-(instancetype) initWithDictionary:(NSDictionary*) jsonDictionary serviceType:(CEOMobileServiceType) serviceType
{
    self = [super init];
    if(self)
    {
        _serviceType = serviceType;
        
        _responseCode = [jsonDictionary[kJSONResponseStatusCode] intValue];
        if(_responseCode != kNetworkResponseSuccessCode)
        {
            _mobileData = [[CEOMobileObject alloc] initWithErrorCode:_responseCode message:@"Message"];
        }
        else if(serviceType == CEOMobileServiceTypeSendNotificationToken)
            _mobileData = [[PNSData alloc] initWithDictionary:jsonDictionary];
        else if(serviceType == CEOMobileServiceTypeSignOn)
            _mobileData = [[SignonResult alloc] initWithDictionary:jsonDictionary];
        else if(serviceType == CEOMobileServiceTypeGetUserInfo || serviceType == CEOMobileServiceTypeGetUserDeviceInfo)
            _mobileData = [[UserInfo alloc] initWithDictionary:jsonDictionary serviceType:serviceType];
        else if([self isFaceVoiceNetworkServiceType:serviceType])
            _mobileData = [[FaceVoiceData alloc] initWithDictionary:jsonDictionary serviceType:serviceType];
        else if([self isEyePrintNetworkServiceType:serviceType])
            _mobileData = [[EyeVerifyData alloc] initWithDictionary:jsonDictionary serviceType:serviceType];
        else if(_serviceType == CEOMobileServiceTypeKOFEXGetDocumentData)
        {
            _mobileData = [[KofexData alloc] initWithDictionary:jsonDictionary];
        }
       
    }
    
    return self;
}
//CEOMobileServiceType
-(BOOL) isFaceVoiceNetworkServiceType :(CEOMobileServiceType) serviceType
{
    if(serviceType == CEOMobileServiceTypeFVCreatePersonID ||
       serviceType == CEOMobileServiceTypeFVEnrollAddFaceInfo ||
       serviceType == CEOMobileServiceTypeFVEnrollAddVoice1Info ||
       serviceType == CEOMobileServiceTypeFVEnrollAddVoice2Info ||
       serviceType == CEOMobileServiceTypeFVEnrollAddVoice3Info ||
       serviceType == CEOMobileServiceTypeFVIsEnrollmentComplete ||
       serviceType == CEOMobileServiceTypeFVAuthStartVerification ||
       serviceType == CEOMobileServiceTypeFVAuthAddFaceInfo ||
       serviceType == CEOMobileServiceTypeFVAuthAddVoiceInfo ||
       serviceType == CEOMobileServiceTypeFVAuthGetVerificationStatus)
        return YES;
    
    return NO;
}

-(BOOL) isEyePrintNetworkServiceType :(CEOMobileServiceType) serviceType
{
    if(serviceType == CEOMobileServiceTypeEVGetEyePrintEnrollInfo ||
    serviceType == CEOMobileServiceTypeEVEyePrintEnrollComplete  ||
    
    serviceType == CEOMobileServiceTypeEVGetEyePrintVerifyInfo ||
    serviceType == CEOMobileServiceTypeEVEyePrintAuthenticate ||
    serviceType == CEOMobileServiceTypeEVUnEnroll)
        return YES;
    
    return NO;
}

@end
