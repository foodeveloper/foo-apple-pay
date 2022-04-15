#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "FOAppleWallet.h"
#import "FOInAppProtocol.h"
#import "FOInAppProvisioning.h"
#import "PKPassHelper.h"
#import "PKPaymentPassHelper.h"

FOUNDATION_EXPORT double FooAppleWalletVersionNumber;
FOUNDATION_EXPORT const unsigned char FooAppleWalletVersionString[];

