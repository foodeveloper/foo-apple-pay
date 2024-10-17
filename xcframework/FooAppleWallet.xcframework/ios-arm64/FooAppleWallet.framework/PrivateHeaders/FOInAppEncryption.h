//
//  FOInAppEncryption.h
//  FooApplePayDemo
//
//  Created by FOO_ on 09/12/2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FOInAppEncryption : NSObject

+ (NSData *)encryptData:(NSData *)data withOtherPartyPublicKey:(NSString *)publicKey;

@end

NS_ASSUME_NONNULL_END
