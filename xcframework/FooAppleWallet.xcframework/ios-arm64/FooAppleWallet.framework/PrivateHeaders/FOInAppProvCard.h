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
#import "FOInAppProvCardType.h"
#import "FOInAppCardScheme.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum {
    FOTransactionStatusSuccessful,
    FOTransactionStatusPending,
    FOTransactionStatusFailed
} FOTransactionStatus;

@interface FOInAppProvCard : NSObject

@property (strong, nonatomic) NSString *userId;

@property (strong, nonatomic) NSString *deviceId;

@property (strong, nonatomic) NSString *sessionId;

//Card identifier
@property (strong, nonatomic) NSString *cardId;

//F-PAN identifier
@property (strong, nonatomic) NSString *fPAN;

//The name of the person as shown on the card.
@property (strong, nonatomic) NSString *cardHolderName;

//The last four or five digits of the card’s number.
@property (strong, nonatomic) NSString *panSuffix;

//A short description of the card.
@property (strong, nonatomic) NSString *localizedDescription;

@property (nonatomic, assign) FOInAppCardScheme cardScheme;

- (id)initWithUserId:(nullable NSString *)userId deviceId:(nullable NSString *)deviceId cardId:(NSString *)cardId cardHolderName:(NSString *)cardHolderName cardPANSuffix:(NSString *)cardPANSuffix cardScheme:(FOInAppCardScheme)cardScheme sessionId:(nullable NSString *)sessionId localizedDescription:(nullable NSString *)localizedDescription;

- (id)initWithUserId:(nullable NSString *)userId deviceId:(nullable NSString *)deviceId cardId:(NSString *)cardId cardHolderName:(NSString *)cardHolderName cardPANSuffix:(NSString *)cardPANSuffix cardScheme:(FOInAppCardScheme)cardScheme localizedDescription:(nullable NSString *)localizedDescription pan:(NSString *)pan expiryDate:(NSString *)expiryDate;

- (id)initWithUserId:(nullable NSString *)userId deviceId:(nullable NSString *)deviceId cardId:(NSString *)cardId fPAN:(NSString *)fPan cardHolderName:(NSString *)cardHolderName cardPANSuffix:(NSString *)cardPANSuffix sessionId:(nullable NSString *)sessionId cardScheme:(FOInAppCardScheme)cardScheme localizedDescription:(nullable NSString *)localizedDescription;

- (id)initWithUserId:(nullable NSString *)userId deviceId:(nullable NSString *)deviceId cardId:(NSString *)cardId fPAN:(NSString *)fPan cardHolderName:(NSString *)cardHolderName cardPANSuffix:(NSString *)cardPANSuffix localizedDescription:(nullable NSString *)localizedDescription pan:(NSString *)pan expiryDate:(NSString *)expiryDate cardScheme:(FOInAppCardScheme)cardScheme;

- (void)addCardToAppleWalletFromViewController:(UIViewController *)viewController delegate:(id <FOInAppProtocol>)delegate;
- (FOInAppProvCardType)getCardType;

@end

NS_ASSUME_NONNULL_END
