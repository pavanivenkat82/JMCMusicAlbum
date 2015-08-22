//
//  CEOJSONUntil.h
//  CEOMobileNetwork
//
//  Created by Rao Repalle, Venkateswara R. on 6/9/15.
//  Copyright (c) 2015 Rao Repalle, Venkateswara R. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CEOJSONUntil : NSObject

+(NSString*) convertDictToJSON :(NSDictionary*) dict;
+(NSData*) convertDictToJSONData :(NSDictionary*) dict;
+(NSDictionary*) convertJSONStringToDictionary:(NSString*) jsonSting;
+(NSDictionary*) convertJSONDataToDictionary:(NSData*) jsonData;


@end
