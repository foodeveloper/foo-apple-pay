//
//  FOInAppRequest.h
//  FooApplePayDemo
//
//  Created by FOO_ on 17/12/2020.
//

#import <Foundation/Foundation.h>
#import "FOInAppPublicKeyResponse.h"
#import "FOInAppProvisionDataResponse.h"
#import "FOInAppVerificationResponse.h"
#import "FOInAppProvCard.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum {
    
    FOInAppResponseErrorTypeUnsupportedResponseClass, // The parameter responseClass is not a subclass of FOBaseResponse
    FOInAppResponseErrorTypeBadRequest = 0, // BadRequestException
    FOInAppResponseErrorTypeLoginRequired = 1, //  NotAuthorizedException
    FOInAppResponseErrorTypeGeneralServerError = 2, // Exception not handled
    FOInAppResponseErrorTypeNone = 3, // Status = OK
    FOInAppResponseErrorTypeFail = 4, // Status = FAILED
    FOInAppResponseErrorTypeNoConnection = 5, // No connection
    FOInAppResponseErrorTypeBlockedDevice = 6, //BlockedDeviceException
    FOInAppResponseErrorTypeInvalidDevice = 7, // InvalidDeviceException
    FOInAppResponseErrorTypeMaintenanceMode = 8, // MaintenanceModeException
    FOInAppResponseErrorTypeUpdateRequired = 9, //OutdatedVersionException
    FOInAppResponseErrorTypeFailResponse = 10, //Meta Success, Response Fail
    
} FOInAppResponseErrorType;

@interface FOInAppRequest : NSObject

+ (void)getPublicKeyWithCompletionHandler:(void (^)(FOInAppPublicKeyResponse *response, FOInAppResponseErrorType errorType))completionHandler;

+ (void)createInAppProvisiongData:(NSDictionary *)params withCompletionHandler:(void (^)(FOInAppProvisionDataResponse *response, FOInAppResponseErrorType errorType))completionHandler;
+ (void)createInAppProvisioningDataWithCardId:(NSDictionary *)params withCompletionHandler:(void (^)(FOInAppProvisionDataResponse *response, FOInAppResponseErrorType errorType))completionHandler;

+ (void)createInAppVerificationDataWithCardId:(NSDictionary *)params withCompletionHandler:(void (^)(FOInAppVerificationResponse *response, FOInAppResponseErrorType errorType))completionHandler;

+ (void)updateTransactionStatus:(FOTransactionStatus)status transactionId:(NSString *)transactionId withCompletionHandler:(void (^ __nullable)(FOInAppBaseResponse *response, FOInAppResponseErrorType errorType))completionHandler;

+ (void)reportError:(NSString *)errorString logs:(NSString *)logs withCompletionHandler:(void (^ __nullable)(FOInAppBaseResponse *response, FOInAppResponseErrorType errorType))completionHandler;

@end

NS_ASSUME_NONNULL_END
