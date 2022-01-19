//
//  FOInAppProvCard.h
//  FooApplePayDemo
//
//  Created by FOO_ on 08/12/2020.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <PassKit/PassKit.h>
#import "FOInAppProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface FOInAppProvCard : NSObject

- (id)initWithUserId:(nullable NSString *)userId cardId:(NSString *)cardId cardHolderName:(NSString *)cardHolderName cardPANSuffix:(NSString *)cardPANSuffix localizedDescription:(nullable NSString *)localizedDescription;

- (id)initWithUserId:(nullable NSString *)userId cardId:(NSString *)cardId cardHolderName:(NSString *)cardHolderName cardPANSuffix:(NSString *)cardPANSuffix localizedDescription:(nullable NSString *)localizedDescription pan:(NSString *)pan expiryDate:(NSString *)expiryDate;

- (void)addCardToAppleWalletFromViewController:(UIViewController *)viewController delegate:(id <FOInAppProtocol>)delegate;

@end

NS_ASSUME_NONNULL_END
