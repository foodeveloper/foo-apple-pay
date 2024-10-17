//
//  FOAppleWalletManager.h
//  FooApplePayDemo
//
//  Created by FOO_ on 18/12/2020.
//

#import <Foundation/Foundation.h>
#import "FOCard.h"

NS_ASSUME_NONNULL_BEGIN

@interface FOAppleWalletManager : NSObject

+ (void)setServerPublicKey:(NSString *)publicKey;
+ (NSString *)getServerPublicKey;

+ (void)setMainUrl:(NSString *)mainUrl;
+ (NSString *)getMainURL;

+ (void)setAppGroupId:(NSString *)appGroupId;
+ (NSString *)getAppGroupId;

+ (void)setExtensionNeedsAuthentication:(bool)extensionNeedsAuthentication;
+ (bool)getExtensionNeedsAuthentication;

+ (void)setExtensionHasAvailableLocalPasses:(bool)extensionHasAvailableLocalPasses;
+ (bool)getExtensionHasAvailableLocalPasses;

+ (void)setExtensionHasAvailableRemotePasses:(bool)extensionHasAvailableRemotePasses;
+ (bool)getExtensionHasAvailableRemotePasses;

+ (void)setExtensionAvailableLocalCards:(NSArray<FOCard *> *)cards;
+ (NSArray<FOCard *> *)getExtensionAvailableLocalCards;
+ (void)setExtensionAvailableRemoteCards:(NSArray<FOCard *> *)cards;
+ (NSArray<FOCard *> *)getExtensionAvailableRemoteCards;

+ (void)setWalletExtensionLocalPluginCompletion:(void (^)(NSArray<FOCard *> * _Nonnull))localCompletion;
+ (void (^)(NSArray<FOCard *> * _Nonnull))getWalletExtensionLocalPluginCompletion;
+ (void)setWalletExtensionRemotePluginCompletion:(void (^)(NSArray<FOCard *> * _Nonnull))remoteCompletion;
+ (void (^)(NSArray<FOCard *> * _Nonnull))getWalletExtensionRemotePluginCompletion;

+ (void)report:(nullable NSString *)logs error:(nullable NSString *)error;

@end

NS_ASSUME_NONNULL_END
