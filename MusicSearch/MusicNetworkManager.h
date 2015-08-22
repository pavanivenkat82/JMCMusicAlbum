//
//  CEONetworkManager.h
//  CEO Mobile iPhone
//
//  Created by Rao Repalle, Venkateswara R. on 5/12/15.
//  Copyright (c) 2015 Wells Fargo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CEOMRequestData.h"
#import "CEOMResponseData.h"

@protocol CEONetworkManagerDelegate <NSObject>

-(void) sendResponseData:(CEOMResponseData*) responseData;

@end

@interface CEONetworkManager : NSObject

@property (nonatomic,weak) id<CEONetworkManagerDelegate> networkResponseDelegate;

-(void) sendAsynchronousRequest:(CEOMRequestData*) requestData;
-(void) sendAsynchronousRequestWithCustomDelegate:(CEOMRequestData*) requestData;
@end