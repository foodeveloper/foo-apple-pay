//
//  NSDictionary.h
//  Merits
//
//  Created by Samer Marrash on 3/6/15.
//  Copyright (c) 2015 FOO. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableArray (SafeArray)

- (void)inAppAddObjectSafely:(NSObject *)object;
- (void)inAppAddStringNotEmptySafely:(NSString *)object;

@end

@interface NSMutableDictionary (SafeDictionary)

- (void)inAppRemoveObjectForKeySafely:(id)key;
- (void)inAppSetObjectSafely:(id)object forKey:(id<NSCopying>)key;

@end

@interface NSString (SafeAppend)

- (NSString *)inAppStringByAppendingStringSafely:(NSString *)aString;

@end

@interface NSMutableSet (SafeSet)

- (void)inAppAddObjectSafely:(NSObject *)object;

@end

@interface NSUserDefaults (Safe)

- (void)inAppSetUserObjectSafely:(id)value forKey:(NSString *)defaultName;

@end
