//
//  FOInAppBaseResponse.h
//  FooProject
//
//  Created by Mona Mouteirek on 8/5/14.
//  Copyright (c) 2014 FOO. All rights reserved.
//

/*
 {
	meta : 
	{
		title
		message
		show
	}
	response :
	{
		items : []
	}
 }
 */

#import <Foundation/Foundation.h>
#import "FOInAppObject.h"
#import "FOInAppResponseMetadata.h"

@interface FOInAppBaseResponse : FOInAppObject <NSCoding>

@property (nonatomic, strong) FOInAppResponseMetadata *meta;
@property (nonatomic, strong) NSString *exception;
@property (nonatomic, strong) NSString *message;
@property (strong, nonatomic) NSString *status;

@property (nonatomic, strong) void (^dismissHandler) (void);

- (instancetype)initWithJsonDictionary:(NSDictionary *)jsonD;

@end
