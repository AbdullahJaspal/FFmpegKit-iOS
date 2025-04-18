// ReturnCode.h
#ifndef RETURN_CODE_H
#define RETURN_CODE_H

#include <Foundation/Foundation.h>

@interface ReturnCode : NSObject

@property(nonatomic, readonly) int value;

+ (BOOL)isSuccess:(ReturnCode*)returnCode;
+ (BOOL)isCancel:(ReturnCode*)returnCode;
+ (BOOL)isError:(ReturnCode*)returnCode;

@end

#endif // RETURN_CODE_H
