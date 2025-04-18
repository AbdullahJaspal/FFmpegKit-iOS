Pod::Spec.new do |s|
  s.name             = 'ffmpeg-kit-ios-https'
  s.version          = '6.0'
  s.summary          = 'FFmpeg for iOS with OpenSSL support'
  s.description      = 'Custom build of FFmpeg with HTTPS capabilities for iOS apps'
  s.homepage         = 'https://github.com/AbdullahJaspal/FFmpegKit-iOS'
  s.license          = { :type => 'LGPL' }
  s.author           = { 'Abdullah Jaspal' => 'abdullahafzal4444@gmail.com' }
  s.source           = { :git => 'https://github.com/AbdullahJaspal/FFmpegKit-iOS.git', :tag => s.version.to_s }
  s.ios.deployment_target = '12.1'
  s.vendored_frameworks = 'Frameworks/*.framework'
  s.source_files = 'Frameworks/ffmpegkit.framework/Headers/*.h'
  s.header_dir = 'ffmpegkit'
  s.module_name = 'ffmpegkit'
  s.public_header_files = 'Frameworks/ffmpegkit.framework/Headers/*.h'
  s.libraries = 'z'
  s.frameworks = 'AudioToolbox', 'AVFoundation', 'CoreMedia', 'VideoToolbox'
end
