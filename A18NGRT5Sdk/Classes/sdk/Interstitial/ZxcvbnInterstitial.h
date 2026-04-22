//
//  ZxcvbnInterstitial.h
//  ZxcvbnAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class ZxcvbnRequest;
@protocol ZxcvbnInterstitialAdDelegate <NSObject>
@optional
-(void) zxcvbnInterstitialAdLoadedSuccessfully:(NSString *) pid;
-(void) zxcvbnInterstitialAdFailedToLoad:(NSString *) pid error:(NSError *)error;
-(void) zxcvbnInterstitialAdPlayStarted;
-(void) zxcvbnInterstitialAdPlayEnded;
-(void) zxcvbnInterstitialAdWasTapped;
-(void) zxcvbnInterstitialAdDidClose;
-(void) zxcvbnInterstitialAdWasSkipped;

@end

@interface ZxcvbnInterstitial : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<ZxcvbnInterstitialAdDelegate> delegate;

- (instancetype)initWithRequest:(ZxcvbnRequest *)request;
- (BOOL)isAdReady;
- (void)loadAdData;
- (void)displayAd:(UIViewController *)rootViewController;
@end
