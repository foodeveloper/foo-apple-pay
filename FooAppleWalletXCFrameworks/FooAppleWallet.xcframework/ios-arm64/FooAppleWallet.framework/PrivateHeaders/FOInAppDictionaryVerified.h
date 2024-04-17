//
//  NSDictionary+Verified.h
//
//  Created by alexruperez on 08/05/13.
//  Copyright (c) 2013 alexruperez. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (Verified)

- (id)inAppVerifiedObjectForKey:(id)aKey;
- (id)inAppVerifiedStringForKey:(id)aKey;
- (id)inAppVerifiedDictionaryForKey:(id)aKey;
- (id)inAppVerifiedArrayForKey:(id)aKey;
- (id)inAppVerifiedStringForKeyNoNil:(id)aKey;

@end

@interface NSMutableDictionary (Verified)

- (id)inAppVerifiedObjectForKey:(id)aKey;
- (id)inAppVerifiedStringForKey:(id)aKey;
- (id)inAppVerifiedDictionaryForKey:(id)aKey;
- (id)inAppVerifiedArrayForKey:(id)aKey;
- (id)inAppVerifiedStringForKeyNoNil:(id)aKey;

@end
