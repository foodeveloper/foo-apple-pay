//
//  PKPassHelper.h
//  FooApplePayDemo
//
//  Created by Sami Sharafeddine on 11/03/2022.
//

#import <Foundation/Foundation.h>
#import <PassKit/PassKit.h>

@interface PKPass (PKPassHelper)

@property (nonatomic, readonly) BOOL requiresActivation;

@end
