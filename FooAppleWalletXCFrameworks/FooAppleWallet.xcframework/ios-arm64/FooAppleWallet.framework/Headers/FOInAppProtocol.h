//
//  FOInAppProtocol.h
//  FooApplePayDemo
//
//  Created by FOO_ on 08/12/2020.
//

#import <Foundation/Foundation.h>
#import <PassKit/PKPaymentPass.h>

NS_ASSUME_NONNULL_BEGIN
typedef enum {
    FOInAppAddCardErrorNone,
    FOInAppAddCardErrorInvalidParameters,
    FOInAppAddCardErrorCantAddCard,
    FOInAppAddCardErrorAppleWalletErr,
    FOInAppAddCardErrorInternalServerErr
} FOInAppAddCardError;


@protocol FOInAppProtocol <NSObject>
- (void)didFinishAddingCard:(nullable PKPaymentPass *)pass error:(FOInAppAddCardError)error errorMessage:(nullable NSString *)errorMessage;
@end

NS_ASSUME_NONNULL_END
