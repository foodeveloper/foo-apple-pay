//
//  FOInAppProvisioningUtils.h
//  FooApplePayDemo
//
//  Created by Sami Sharafeddine on 28/02/2024.
//

#import <Foundation/Foundation.h>
#import <PassKit/PassKit.h>
#import "FOInAppRequest.h"
#import "FOInAppProvCard.h"
#import "FOCard.h"

NS_ASSUME_NONNULL_BEGIN

@interface FOInAppProvisioningUtils : NSObject

+ (PKAddPaymentPassRequestConfiguration *)createPaymentPassRequestConfigurationWith:(FOInAppProvCard *)card;
+ (PKAddPaymentPassRequestConfiguration *)createPaymentPassRequestConfigurationWithExtensionCard:(FOCard *)card;

+ (NSString *)getEncryptedPayloadWithCardholderName:(NSString *)cardholderName pan:(NSString *)pan expiryDate:(NSString *)expiryDate;

+ (void)getInAppProvisioningDataWithCertificates:(NSArray<NSData *> *)certificates nonce:(NSData *)nonce nonceSignature:(NSData *)nonceSignature encryptedCardData:(NSString *)encryptedCardData card:(FOInAppProvCard *)card completionHandler:(void (^)(FOInAppProvisionDataResponse *response, FOInAppResponseErrorType errorType))completionHandler;
+ (void)getInAppProvisioningDataWithExtensionCertificates:(NSArray<NSData *> *)certificates nonce:(NSData *)nonce nonceSignature:(NSData *)nonceSignature encryptedCardData:(NSString *)encryptedCardData card:(FOCard *)card completionHandler:(void (^)(FOInAppProvisionDataResponse *response, FOInAppResponseErrorType errorType))completionHandler;

@end

NS_ASSUME_NONNULL_END
