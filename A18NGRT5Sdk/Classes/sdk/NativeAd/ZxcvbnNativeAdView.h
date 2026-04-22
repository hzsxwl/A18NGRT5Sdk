//
//  ZxcvbnNativeAdView.h
//  ZxcvbnAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class ZxcvbnNativeAdView;
@class ZxcvbnNativeAd;
@protocol ZxcvbnNativeAdViewDelegate <NSObject>
@optional
- (void)zxcvbnOnNativeAdViewRenderSucceeded:(ZxcvbnNativeAdView *)nativeAdView;
- (void)zxcvbnOnNativeAdViewRenderFailed:(NSError *)error;
- (void)zxcvbnOnNativeAdViewExposed;
- (void)zxcvbnOnNativeAdViewTapped;
- (void)zxcvbnOnNativeAdViewDisliked:(NSString *) reason;

@end
@interface ZxcvbnNativeAdView : NSObject
+ (instancetype) createAdView;

@property(nonatomic) CGRect frame;
@property (nonatomic, weak) id<ZxcvbnNativeAdViewDelegate> delegate;
@property (nonatomic, weak) UIViewController *viewController;
- (void)updateData:(ZxcvbnNativeAd *)nativeAd;
- (UIView *)adView;
@end
