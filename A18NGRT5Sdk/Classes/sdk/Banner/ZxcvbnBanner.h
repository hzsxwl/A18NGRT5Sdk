//
//  ZxcvbnBanner.h
//  ZxcvbnAdsSdk-iOS
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class ZxcvbnRequest;
@class ZxcvbnBanner;

NS_ASSUME_NONNULL_BEGIN

@protocol ZxcvbnBannerDelegate <NSObject>

@optional

- (void)zxcvbnBannerAdDidAutoRefresh:(ZxcvbnBanner *)bannerAdView;

- (void)zxcvbnBannerAdAutoRefreshFailed:(NSError *)error;

- (void)zxcvbnBannerAdLoadedSuccessfully:(ZxcvbnBanner *)bannerAdView;

- (void)zxcvbnBannerAdFailedToLoad:(NSError *)error;

- (void)zxcvbnBannerAdWasDisplayed;

- (void)zxcvbnBannerAdWasTapped;

- (void)zxcvbnBannerAdWillExitApp;

- (void)zxcvbnBannerAdWillEnterFullScreen;
- (void)zxcvbnBannerAdDidExitFullScreen;
- (void)zxcvbnBannerAdWasRemoved;
@end

@interface ZxcvbnBanner : NSObject

@property (nonatomic, weak) id<ZxcvbnBannerDelegate> delegate;

@property (nonatomic, weak) UIViewController *viewController;

@property (nonatomic) BOOL animated;

@property (nonatomic, assign) CGSize adSize;
@property(nullable, nonatomic,copy) UIColor *backgroundColor;

- (instancetype)initWithRequest:(ZxcvbnRequest *)request;

- (instancetype)initWithRequest:(ZxcvbnRequest *)request
                     expectSize:(CGSize)expectSize;

- (void)loadAdData;
- (BOOL)isAdReady;
- (UIView *)adView;
@end
NS_ASSUME_NONNULL_END

