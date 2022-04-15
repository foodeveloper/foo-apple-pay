//
//  FOInAppVerificationResponse.h
//  FooApplePayDemo
//
//  Created by Sami Sharafeddine on 11/03/2022.
//

#import "FOInAppBaseResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface FOInAppVerificationResponse : FOInAppBaseResponse

@property (strong, nonatomic) NSString *activationData;

@end

NS_ASSUME_NONNULL_END
