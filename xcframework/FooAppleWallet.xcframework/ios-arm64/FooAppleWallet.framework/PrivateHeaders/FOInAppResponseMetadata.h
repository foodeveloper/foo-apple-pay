//
//  ResponseMetadata.h
//  FooProject
//
//  Created by Mona Mouteirek on 8/20/14.
//  Copyright (c) 2014 FOO. All rights reserved.
//

#import "FOInAppMetaAction.h"
#import "FOInAppObject.h"

@interface FOInAppResponseMetadata : FOInAppObject <NSSecureCoding>

@property (nonatomic) BOOL statusSuccess;

@property (nonatomic, strong) FOInAppMetaAction *action;
@property (nonatomic, strong) FOInAppMetaAction *update;
@property (nonatomic, strong) NSString *status;

- (instancetype)initWithJsonDictionary:(NSDictionary *)jsonD;

@end
