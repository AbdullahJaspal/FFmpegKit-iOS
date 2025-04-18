// FFmpegSession.h
#ifndef FFMPEG_SESSION_H
#define FFMPEG_SESSION_H

#include <Foundation/Foundation.h>
#include "ReturnCode.h"

@interface FFmpegSession : NSObject

- (ReturnCode*)returnCode;
- (NSString*)getOutput;

@end

#endif // FFMPEG_SESSION_H
