//
//  FOInAppVerificationCard.h
//  FooApplePayDemo
//
//  Created by Charbel Hassrouny on 08/09/2022.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum {
    FOInAppVerificationStatusCardNotAdded,
    FOInAppVerificationStatusRequiresActivation,
    FOInAppVerificationStatusActivating,
    FOInAppVerificationStatusActivated,
    FOInAppVerificationStatusSuspended,
    FOInAppVerificationStatusDeactivated
} FOInAppVerificationStatus;

@interface FOInAppVerificationCard : NSObject

@property (strong, nonatomic) NSString *cardId;
@property (strong, nonatomic) NSString *cardSuffix;
@property (strong, nonatomic) NSString *cardHolderName;

-(FOInAppVerificationCard *)initWithCardId:(NSString *)cardId cardSuffix:(NSString *)cardSuffix cardHolderName:(nullable NSString *)cardHolderName;
-(FOInAppVerificationStatus)checkCardStatusInLocalWallet;
-(FOInAppVerificationStatus)checkCardStatusInRemoteWallet;

- (void)activateCardInLocalWalletWithCompletionHandler:(void (^)(BOOL success))completionHandler;
- (void)activateCardInRemoteWalletWithCompletionHandler:(void (^)(BOOL success))completionHandler;

@end

NS_ASSUME_NONNULL_END
