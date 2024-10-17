//
//  FOInAppVerificationManager.h
//  FooApplePayDemo
//
//  Created by Sami Sharafeddine on 11/03/2022.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FOInAppVerificationManager : NSObject

+ (FOInAppVerificationManager *)sharedManager;

- (void)activateLocalCardWithCardSuffix:(NSString *)cardSuffix cardId:(NSString *)cardId cardHolderName:(NSString *)cardHolderName withCompletionHandler:(void (^)(BOOL success))completionHandler;

- (void)activateRemoteCardWithCardSuffix:(NSString *)cardSuffix cardId:(NSString *)cardId cardHolderName:(NSString *)cardHolderName withCompletionHandler:(void (^)(BOOL success))completionHandler;

@end

NS_ASSUME_NONNULL_END
