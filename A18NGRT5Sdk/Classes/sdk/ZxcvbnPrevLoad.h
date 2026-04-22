//
//  ZxcvbnPrevLoad.h
//  ZxcvbnAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>
#import <WindMillSDK/WindMillSDK.h>

@interface ZxcvbnPrevLoad : NSObject
+(instancetype) sharedInstance;
-(void) startAdPreloadWithRewardId:(NSString *)rewardId interstitialId:(NSString *)interstitialId fullScreenId:(NSString *)fullScreenId userId:(NSString *)userId;
-(WindMillRewardVideoAd *) getPreloadedRewardAd;
-(WindMillIntersititialAd *) getPreloadedInterstitialAd;
-(WindMillIntersititialAd *) getPreloadedFullScreenAd;
-(NSString *) getInterstitialAdId;
-(NSString *) getFullScreenAdId;
@end

