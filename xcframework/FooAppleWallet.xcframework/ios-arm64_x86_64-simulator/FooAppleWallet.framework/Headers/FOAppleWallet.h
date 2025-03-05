//
//  FOAppleWallet.h
//  FooApplePayDemo
//
//  Created by FOO_ on 18/12/2020.
//

#import <Foundation/Foundation.h>
#import "FOCard.h"
#import "FOInAppProtocol.h"
#import "FOInAppProvisioning.h"
#import "PKPaymentPassHelper.h"
#import "FOInAppVerificationCard.h"

NS_ASSUME_NONNULL_BEGIN

@interface FOAppleWallet : NSObject

+ (void)setHostName:(NSString *)host andPath:(NSString *)path;
+ (void)setAppGroupIdentifier:(NSString *)appGroupId;
+ (void)setExtraToken:(NSString *)extraToken;
+ (void)setExtensionNeedsAuthentication:(bool)extensionNeedsAuthentication;
+ (void)setExtensionHasAvailableLocalPasses:(bool)extensionHasAvailableLocalPasses;
+ (void)setExtensionHasAvailableRemotePasses:(bool)extensionHasAvailableRemotePasses;

// React plugin helpers.
+ (void)setWalletExtensionLocalPluginCompletion:(void (^)(NSArray<FOCard *> * _Nonnull))localCompletion;
+ (void (^)(NSArray<FOCard *> * _Nonnull))getWalletExtensionLocalPluginCompletion;
+ (void)setWalletExtensionRemotePluginCompletion:(void (^)(NSArray<FOCard *> * _Nonnull))remoteCompletion;
+ (void (^)(NSArray<FOCard *> * _Nonnull))getWalletExtensionRemotePluginCompletion;

@end

NS_ASSUME_NONNULL_END
