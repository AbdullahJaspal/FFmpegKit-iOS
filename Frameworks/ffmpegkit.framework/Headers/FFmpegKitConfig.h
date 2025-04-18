// FFmpegKitConfig.h
#ifndef FFMPEG_KIT_CONFIG_H
#define FFMPEG_KIT_CONFIG_H

#include <Foundation/Foundation.h>

@interface FFmpegKitConfig : NSObject

+ (void)enableRedirection;
+ (void)disableRedirection;
+ (void)setLogLevel:(int)level;
+ (int)getLogLevel;
+ (void)enableLogs;
+ (void)disableLogs;
+ (void)enableStatistics;
+ (void)disableStatistics;

@end

#endif // FFMPEG_KIT_CONFIG_H

