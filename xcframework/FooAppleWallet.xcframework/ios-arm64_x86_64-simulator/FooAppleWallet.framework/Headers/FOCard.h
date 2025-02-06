//
//  FOCard.h
//  FooApplePayDemo
//
//  Created by Sami Sharafeddine on 28/02/2024.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "FOInAppProvCardType.h"
#import "FOInAppCardScheme.h"

NS_ASSUME_NONNULL_BEGIN

@interface FOCard : NSObject

@property (strong, nonatomic) NSString *identifier;
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) UIImage *cardArt;
@property (strong, nonatomic) NSString *cardholderName;
@property (strong, nonatomic) NSString *panSuffix;
@property (strong, nonatomic) NSString *pan;
@property (strong, nonatomic) NSString *expiryDate;
@property (nonatomic, assign) FOInAppCardScheme cardScheme;


- (instancetype)initWithIdentifier:(NSString *)identifier cardTitle:(NSString *)title cardArt:(UIImage *)cardArt cardholderName:(NSString *)cardholderName panSuffix:(NSString *)panSuffix pan:(nullable NSString *)pan expiryDate:(nullable NSString *)expiryDate cardScheme:(FOInAppCardScheme)cardScheme;
- (FOInAppProvCardType)getType;

@end

NS_ASSUME_NONNULL_END
