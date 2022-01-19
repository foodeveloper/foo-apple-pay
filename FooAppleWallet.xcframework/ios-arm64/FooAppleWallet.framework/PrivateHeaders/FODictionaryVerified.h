//
//  NSDictionary+Verified.h
//
//  Created by alexruperez on 08/05/13.
//  Copyright (c) 2013 alexruperez. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (Verified)

- (id)verifiedObjectForKey:(id)aKey;
- (id)verifiedStringForKey:(id)aKey;
- (id)verifiedDictionaryForKey:(id)aKey;
- (id)verifiedArrayForKey:(id)aKey;
- (id)verifiedStringForKeyNoNil:(id)aKey;

@end

@interface NSMutableDictionary (Verified)

- (id)verifiedObjectForKey:(id)aKey;
- (id)verifiedStringForKey:(id)aKey;
- (id)verifiedDictionaryForKey:(id)aKey;
- (id)verifiedArrayForKey:(id)aKey;
- (id)verifiedStringForKeyNoNil:(id)aKey;

@end
