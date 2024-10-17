//
//  FOInAppJsonHelper.h
//  FooApplePayDemo
//
//  Created by Elie El Koreh on 3/31/21.
//

#import <Foundation/Foundation.h>

@interface FOInAppJsonHelper : NSObject

+ (NSString *)JSONStringFromDictionary:(NSDictionary *)dictionary;
+ (NSString *)JSONStringFromArray:(NSArray *)array;

@end

