//
//  CEOMobileNetworkUtil.h
//  CEOMobileNetwork
//
//  Created by Rao Repalle, Venkateswara R. on 5/12/15.
//  Copyright (c) 2015 Rao Repalle, Venkateswara R. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CEOMobileNetworkUtil : NSObject

#define kTIMEOUT_INTERVAL            150

#ifdef DEBUG
#define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define DLog(...)
#endif
@end
