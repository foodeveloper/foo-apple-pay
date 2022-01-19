//
//  NSDictionary.h
//  Merits
//
//  Created by Samer Marrash on 3/6/15.
//  Copyright (c) 2015 FOO. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableArray (SafeArray)

- (void)addObjectSafely:(NSObject *)object;
- (void)addStringNotEmptySafely:(NSString *)object;

@end

@interface NSMutableDictionary (SafeDictionary)

- (void)removeObjectForKeySafely:(id)key;
- (void)setObjectSafely:(id)object forKey:(id<NSCopying>)key;

@end

@interface NSString (SafeAppend)

- (NSString *)stringByAppendingStringSafely:(NSString *)aString;

@end

@interface NSMutableSet (SafeSet)

- (void)addObjectSafely:(NSObject *)object;

@end

@interface NSUserDefaults (Safe)

- (void)setUserObjectSafely:(id)value forKey:(NSString *)defaultName;

@end
