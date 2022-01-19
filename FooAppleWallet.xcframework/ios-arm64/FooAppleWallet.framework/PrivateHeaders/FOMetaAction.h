//
//  FOMetaAction.h
//  FooProject
//
//  Created by Sqmer FOO on 2/16/17.
//  Copyright © 2017 FOO. All rights reserved.
//

#import "FOObject.h"

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger, FOMetaActionType){
    
    FOMetaActionTypeNotSpecified = 0,
    FOMetaActionTypeDialog = 1,
    FOMetaActionTypeAuthorization = 2,
};


typedef NS_ENUM(NSInteger, FOMetaAuthorizationType){
    
    FOMetaAuthorizationTypeNotSpecified = 0,
    FOMetaAuthorizationTypeOTP = 1,
};

@interface FOMetaAction : FOObject

@property (nonatomic) BOOL shouldGoBack;
@property (nonatomic) BOOL shouldRefresh;
@property (nonatomic) FOMetaActionType type;
@property (nonatomic) FOMetaAuthorizationType authorizationType;

@property (nullable, nonatomic, strong) NSString *cancel;
@property (nullable, nonatomic, strong) NSString *message;
@property (nullable, nonatomic, strong) NSString *ok;
@property (nullable, nonatomic, strong) NSString *title;
@property (nullable, nonatomic, strong) NSString *url;

@property (nullable, strong, nonatomic) NSString *authorizationId;
@property (nullable, strong, nonatomic) NSString *authorizationResendCounter;
@property (nullable, strong, nonatomic) NSString *locale;

- (id)initWithJsonDictionary:(NSDictionary *)jsonD;

@end
NS_ASSUME_NONNULL_END
