//
//  FOInAppProvisioningManager.h
//  FooApplePayDemo
//
//  Created by FOO_ on 10/12/2020.
//

#import <Foundation/Foundation.h>
#import "FOInAppProvCard.h"

NS_ASSUME_NONNULL_BEGIN

@interface FOInAppProvisioningManager : NSObject

@property (nullable, strong, nonatomic) FOInAppProvCard *card;
+ (FOInAppProvisioningManager *)sharedManager;

@end

NS_ASSUME_NONNULL_END
