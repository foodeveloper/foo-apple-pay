//
//  FOAppleWalletExtension.h
//  FooApplePayDemo
//
//  Created by Sami Sharafeddine on 28/02/2024.
//

#import <Foundation/Foundation.h>
#import <PassKit/PassKit.h>
#import "FOCard.h"

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(14.0))
@interface FOAppleWalletExtension : PKIssuerProvisioningExtensionHandler

- (void)shouldCheckForCardsToAddLocallyWithCompletion:(void(^)(NSArray<FOCard *> *availableCards))completion;
- (void)shouldCheckForCardsToAddRemotelyWithCompletion:(void(^)(NSArray<FOCard *> *availableCards))completion;

- (NSString *)getHostName;
- (NSString *)getPath;
- (NSString *)getAppGroupIdentifier;

@end

NS_ASSUME_NONNULL_END
