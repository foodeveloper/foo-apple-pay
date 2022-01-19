//
//  NSObject+FOInAppBase64.h
//  FooApplePayDemo
//
//  Created by FOO_ on 09/12/2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (FOInAppBase64)

- (NSString *)foInAppBase64EncodedString;

@end

@interface NSString (FOInAppBase64)

- (NSString *)foInAppBase64URLFromBase64;

@end
NS_ASSUME_NONNULL_END
