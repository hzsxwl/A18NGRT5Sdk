//
//  ZxcvbnReward.h
//  ZxcvbnAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class ZxcvbnRequest;
@protocol ZxcvbnRewardAdDelegate <NSObject>

@required

-(void) zxcvbnRewardAdDidReceiveReward:(NSString *_Nonnull) transId;

@optional
-(void) zxcvbnRewardAdLoadedSuccessfully:(NSString *) pid;
-(void) zxcvbnRewardAdFailedToLoad:(NSString *) pid error:(NSError *)error;
-(void) zxcvbnRewardAdPlayStarted;
-(void) zxcvbnRewardAdPlayEnded;
-(void) zxcvbnRewardAdWasTapped;
-(void) zxcvbnRewardAdDidClose;
-(void) zxcvbnRewardAdWasSkipped;
-(void) zxcvbnRewardAdPlayError:(NSString *) pid error:(NSError *)error;

@end

@interface ZxcvbnReward : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<ZxcvbnRewardAdDelegate> delegate;

- (instancetype)initWithRequest:(ZxcvbnRequest *)request;
- (BOOL)isAdReady;
- (void)loadAdData;
- (void)displayAd:(UIViewController *)rootViewController options:(NSDictionary<NSString *, NSString *> * _Nullable)options;
@end

