//
//  ResponseMetadata.h
//  FooProject
//
//  Created by Mona Mouteirek on 8/20/14.
//  Copyright (c) 2014 FOO. All rights reserved.
//

#import "FOMetaAction.h"
#import "FOObject.h"

@interface FOResponseMetadata : FOObject <NSCoding>

@property (nonatomic) BOOL statusSuccess;

@property (nonatomic, strong) FOMetaAction *action;
@property (nonatomic, strong) FOMetaAction *update;
@property (nonatomic, strong) NSString *status;

- (instancetype)initWithJsonDictionary:(NSDictionary *)jsonD;

@end
