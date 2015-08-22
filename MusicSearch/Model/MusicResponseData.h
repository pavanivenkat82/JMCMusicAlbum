//
//  CEOResponseData.h
//  CEO Mobile iPhone
//
//  Created by Rao Repalle, Venkateswara R. on 5/12/15.
//  Copyright (c) 2015 Wells Fargo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CEOMRequestData.h"
#import "CEOMobileObject.h"
typedef NS_ENUM(NSUInteger, CEOMResponseStatus)
{
    CEOMResponseStatusSuccess,
    CEOMResponseStatusNetworkIssue
    
};
@interface CEOMResponseData : NSObject
@property (nonatomic) CEOMobileServiceType serviceType;
@property (nonatomic) CEOMobileObject* mobileData;
@property (nonatomic) int responseCode;

-(instancetype) initWithDictionary:(NSDictionary*) jsonDictionary serviceType:(CEOMobileServiceType) serviceType;

@end
