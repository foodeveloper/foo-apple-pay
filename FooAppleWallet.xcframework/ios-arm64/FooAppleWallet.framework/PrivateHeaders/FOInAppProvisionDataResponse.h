//
//  FOInAppProvisionDataResponse.h
//  FooApplePayDemo
//
//  Created by FOO_ on 18/12/2020.
//

#import "FOBaseResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface FOInAppProvisionDataResponse : FOBaseResponse

@property (strong, nonatomic) NSString *ephemralPublicKey;
@property (strong, nonatomic) NSString *encryptedPassData;
@property (strong, nonatomic) NSString *activationData;

@end

NS_ASSUME_NONNULL_END
