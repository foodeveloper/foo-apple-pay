//
//  FOAppleWalletManager.h
//  FooApplePayDemo
//
//  Created by FOO_ on 18/12/2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FOAppleWalletManager : NSObject

+ (void)setServerPublicKey:(NSString *)publicKey;
+ (NSString *)getServerPublicKey;

+ (void)setMainUrl:(NSString *)mainUrl;
+ (NSString *)getMainURL;

@end

NS_ASSUME_NONNULL_END
