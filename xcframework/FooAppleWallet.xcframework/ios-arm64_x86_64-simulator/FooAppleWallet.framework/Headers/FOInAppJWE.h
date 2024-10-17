//
//  FOInAppJWE.h
//  FooApplePayDemo
//
//  Created by FOO_ on 09/12/2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FOInAppJWE : NSObject

+ (NSString *)encryptDictionary:(NSDictionary *)payload withPublicKey:(NSString *)publicKey;
+ (NSString *)encrypt:(NSString *)payload andPublicKey:(NSString *)publicKey;

@end

NS_ASSUME_NONNULL_END
