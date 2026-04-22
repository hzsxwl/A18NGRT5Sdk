//
//  ZxcvbnNativeAdManager.h
//  ZxcvbnAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class ZxcvbnRequest;
@class ZxcvbnNativeAd;
@class ZxcvbnNativeAdManager;

NS_ASSUME_NONNULL_BEGIN
@protocol ZxcvbnNativeAdManagerDelegate <NSObject>

@optional
- (void)zxcvbnNativeAdManagerLoadedSuccessfully:(ZxcvbnNativeAdManager *)nativeAdsManager;
- (void)zxcvbnNativeAdManagerFailedToLoad:(NSError *)error;

@end


@interface ZxcvbnNativeAdManager : NSObject

@property (nonatomic, weak) id<ZxcvbnNativeAdManagerDelegate> delegate;

@property (nonatomic, assign, readwrite) CGSize adSize;

- (instancetype)initWithRequest:(ZxcvbnRequest *)request;

- (void)loadAdData:(NSInteger)count;

- (NSArray<ZxcvbnNativeAd *> * _Nullable)getNativeAds;

@end

NS_ASSUME_NONNULL_END
