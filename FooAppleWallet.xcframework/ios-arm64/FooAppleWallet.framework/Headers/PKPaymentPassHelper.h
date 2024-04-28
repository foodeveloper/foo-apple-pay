//
//  PKPaymentPassHelper.h
//  FooApplePayDemo
//
//  Created by Sami Sharafeddine on 11/03/2022.
//

#import <Foundation/Foundation.h>
#import <PassKit/PassKit.h>

@interface PKPaymentPass (PKPaymentPassHelper)

@property (nonatomic, readonly) BOOL requiresActivation;

@end
