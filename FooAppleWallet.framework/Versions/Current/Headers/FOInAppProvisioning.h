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

+ (nullable PKPass*)getLocalPassWithCardSuffix:(NSString *)cardSuffix;
+ (nullable PKPaymentPass*)getRemotePassWithCardSuffix:(NSString *)cardSuffix;

+ (void)addCardForUserId:(nullable NSString *)userId deviceId:(nullable NSString *)deviceId cardId:(NSString *)cardId cardHolderName:(NSString *)cardHolderName cardPanSuffix:(NSString *)cardPanSuffix sessionId:(nullable NSString *)sessionId localizedDescription:(nullable NSString *)localizedDescription inViewController:(UIViewController *)viewController delegate:(id <FOInAppProtocol>)delegate;

+ (void)addCardForUserId:(nullable NSString *)userId deviceId:(nullable NSString *)deviceId cardId:(NSString *)cardId cardHolderName:(NSString *)cardHolderName cardPanSuffix:(NSString *)cardPanSuffix localizedDescription:(nullable NSString *)localizedDescription pan:(NSString *)pan expiryDate:(NSString *)expiryDate inViewController:(UIViewController *)viewController delegate:(id <FOInAppProtocol>)delegate;

+ (void)addCardForUserId:(nullable NSString *)userId deviceId:(nullable NSString *)deviceId cardId:(NSString *)cardId fPAN:(nullable NSString *)fPan cardHolderName:(NSString *)cardHolderName cardPanSuffix:(NSString *)cardPanSuffix sessionId:(nullable NSString *)sessionId localizedDescription:(nullable NSString *)localizedDescription inViewController:(UIViewController *)viewController delegate:(id <FOInAppProtocol>)delegate;

+ (void)addCardForUserId:(nullable NSString *)userId deviceId:(nullable NSString *)deviceId cardId:(NSString *)cardId fPAN:(nullable NSString *)fPan cardHolderName:(NSString *)cardHolderName cardPanSuffix:(NSString *)cardPanSuffix localizedDescription:(nullable NSString *)localizedDescription pan:(NSString *)pan expiryDate:(NSString *)expiryDate inViewController:(UIViewController *)viewController delegate:(id <FOInAppProtocol>)delegate;

@end

NS_ASSUME_NONNULL_END
