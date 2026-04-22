#
# Be sure to run `pod lib lint A18NGRT5Sdk.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'A18NGRT5Sdk'
  s.version          = '5.2.0'
  s.summary          = 'ads ios sdk'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/hzsxwl/A18NGRT5Sdk'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { '3318596470@qq.com' => '3318596470@qq.com' }
  s.source           = { :git => 'https://github.com/hzsxwl/A18NGRT5Sdk.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

    s.ios.deployment_target = '11.0'

    s.source_files = 'A18NGRT5Sdk/Classes/**/*'
  s.public_header_files = ['A18NGRT5Sdk/Classes/**/ZxcvbnAdsSDK.h', 'A18NGRT5Sdk/Classes/**/ZxcvbnRequest.h', 'A18NGRT5Sdk/Classes/**/ZxcvbnSplash.h', 'A18NGRT5Sdk/Classes/**/ZxcvbnInterstitial.h', 'A18NGRT5Sdk/Classes/**/ZxcvbnReward.h', 'A18NGRT5Sdk/Classes/**/ZxcvbnAdSdk.h', 'A18NGRT5Sdk/Classes/**/ZxcvbnBanner.h', 'A18NGRT5Sdk/Classes/**/ZxcvbnNativeAdView.h', 'A18NGRT5Sdk/Classes/**/ZxcvbnNativeAd.h', 'A18NGRT5Sdk/Classes/**/ZxcvbnNativeAdManager.h']
  s.vendored_libraries = 'A18NGRT5Sdk/Libraries/libA18NGRT5Sdk-iOS.a'
  
  s.frameworks = "Foundation","UIKit","MobileCoreServices","CoreGraphics","Security","SystemConfiguration","CoreTelephony","AdSupport","CoreData","StoreKit","AVFoundation","MediaPlayer","CoreMedia","WebKit","Accelerate","CoreLocation","AVKit","MessageUI","QuickLook","AudioToolBox","JavaScriptCore","CoreMotion","Photos"
  s.libraries = "z","resolv.9","sqlite3","c++","c++abi"
  s.dependency 'ToBid-iOS/GDTAdapter','4.7.0'
  s.dependency 'ToBid-iOS/BaiduAdapter','4.7.0'
  s.dependency 'ToBid-iOS/KSAdapter','4.7.0'
  s.dependency 'ToBid-iOS/TouTiaoAdapter','4.7.0'
  s.dependency 'ToBid-iOS/CSJMediationAdapter','4.7.0'
  s.dependency 'ToBid-iOS/AdScopeAdapter','4.7.0'
  s.static_framework = true
end
