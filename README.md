# FFmpegKit-iOS

Custom build of FFmpeg with OpenSSL support for iOS.

## Installation

### CocoaPods

```ruby
pod 'FFmpegKit', :git => 'https://github.com/AbdullahJaspal/FFmpegKit-iOS.git', :tag => '6.0'
Usage
Import the necessary headers in your bridging header:
c#import <libavformat/avformat.h>
#import <libavcodec/avcodec.h>
#import <libswscale/swscale.h>
#import <libavutil/avutil.h>
#import <libavfilter/avfilter.h>
#import <libswresample/swresample.h>
#import <libavdevice/avdevice.h>
Basic FFmpeg Operations
swift// Initialize FFmpeg (call once at app startup)
avformat_network_init()

// Example function to execute FFmpeg command
func executeFFmpegCommand(_ command: String) {
    guard let args = parseArguments(command) else {
        print("Failed to parse command")
        return
    }
    
    var argc = Int32(args.count)
    var argv = args.map { UnsafeMutablePointer<Int8>(mutating: ($0 as NSString).utf8String) }
    
    // Execute command
    let status = ff_main(argc, &argv)
    print("FFmpeg command completed with status: \(status)")
}

// Helper function to parse command string into arguments
private func parseArguments(_ command: String) -> [String]? {
    var args = ["ffmpeg"]
    args.append(contentsOf: command.components(separatedBy: " "))
    return args
}
