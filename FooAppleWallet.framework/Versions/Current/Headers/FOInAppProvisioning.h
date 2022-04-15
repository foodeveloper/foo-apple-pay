//
//  FOInAppProvisioning.h
//  FooApplePayDemo
//
//  Created by FOO_ on 08/12/2020.
//

#import <Foundation/Foundation.h>
#import <PassKit/PassKit.h>
#import "FOInAppProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface FOInAppProvisioning : NSObject

+ (BOOL)deviceSupportsAppleWallet;

+ (nullable NSArray <PKPass *>*)getLocalPasses;
+ (nullable NSArray <PKPaymentPass *>*)getRemotePasses;

+ (BOOL)isCardAddedToLocalWalletWithCardSuffix:(NSString *)cardSuffix;
+ (BOOL)isCardAddedToRemoteWalletWithCardSuffix:(NSString *)cardSuffix;

+ (BOOL)isCardAddedToLocalWalletWithPrimaryAccountIdentifier:(NSString *)primaryAccountIdentifier;
+ (BOOL)isCardAddedToRemoteWalletWithPrimaryAccountIdentifier:(NSString *)primaryAccountIdentifier;

+ (void)addCardForUserId:(nullable NSString *)userId cardId:(NSString *)cardId cardHolderName:(NSString *)cardHolderName cardPanSuffix:(NSString *)cardPanSuffix localizedDescription:(nullable NSString *)localizedDescription inViewController:(UIViewController *)viewController delegate:(id <FOInAppProtocol>)delegate;

+ (void)addCardForUserId:(nullable NSString *)userId cardId:(NSString *)cardId cardHolderName:(NSString *)cardHolderName cardPanSuffix:(NSString *)cardPanSuffix localizedDescription:(nullable NSString *)localizedDescription pan:(NSString *)pan expiryDate:(NSString *)expiryDate inViewController:(UIViewController *)viewController delegate:(id <FOInAppProtocol>)delegate;

+ (void)activateLocalCardWithCardSuffix:(NSString *)cardSuffix cardId:(NSString *)cardId cardHolderName:(nullable NSString *)cardHolderName withCompletionHandler:(void (^)(BOOL success))completionHandler;

+ (void)activateRemoteCardWithCardSuffix:(NSString *)cardSuffix cardId:(NSString *)cardId cardHolderName:(nullable NSString *)cardHolderName withCompletionHandler:(void (^)(BOOL success))completionHandler;

@end

NS_ASSUME_NONNULL_END
