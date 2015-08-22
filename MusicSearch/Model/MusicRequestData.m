//
//  CEOMRequestData.m
//  CEO Mobile iPhone
//
//  Created by Rao Repalle, Venkateswara R. on 5/12/15.
//  Copyright (c) 2015 Wells Fargo. All rights reserved.
//

#import "CEOMRequestData.h"
#import "CEOMobileNetworkUtil.h"

@implementation CEOMRequestData


-(instancetype) initWithURL:(NSString*) reqUrl networkRequestType:(CEONetworkRequestType) nReqType serviceType:(CEOMobileServiceType) reqServiceType inputPrameters:(NSDictionary*) inputParameter
{
    self = [super init];
    
    if(self)
    {
        _url = reqUrl;
        _networkRequestType = nReqType;
        _serviceType = reqServiceType;
        _inputParams  = inputParameter;
        _timeOutForRequest = 30;
        _timeOutForResource = 300;
        _isPostData = NO;
    }
    
    return self;
}

-(instancetype) initWithURL:(NSString*) reqUrl networkRequestType:(CEONetworkRequestType) nReqType serviceType:(CEOMobileServiceType) reqServiceType inputData:(NSData*) inputPostData
{
    self = [super init];
    
    if(self)
    {
        _url = reqUrl;
        _networkRequestType = nReqType;
        _serviceType = reqServiceType;
        _postData = inputPostData;
        _timeOutForRequest = 30;
        _timeOutForResource = 300;
        _isPostData = YES;
    }
    
    return self;
    
}
//-(void) setAdditionalHeaders:(NSDictionary *)additionalHeaders
//{
//    DLog(@"setting headers");
//    NSMutableDictionary* headers = [additionalHeaders mutableCopy];
//    [headers setObject:@"application/json" forKey:@"Content-Type" ];
//    _additionalHeaders = headers;
////    @"Content-Type"  : @"application/json"
//}
@end