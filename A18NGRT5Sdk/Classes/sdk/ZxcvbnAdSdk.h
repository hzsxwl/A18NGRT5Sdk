//
//  ZxcvbnAdSdk.h
//  ZxcvbnAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, ZxcvbnAcceptStatus) {
    ZxcvbnUnknown = 0,
    ZxcvbnAccepted,
    ZxcvbnDenied,
};

@interface ZxcvbnAdSdk : NSObject
+(instancetype) sharedInstance;
-(void)initializeWithAppId:(NSString *)appId;

-(void)enableDebugMode:(BOOL)enable;

-(void)setGDPRConsentStatus:(ZxcvbnAcceptStatus)status;
-(void)startAdPreloadWithRewardId:(NSString *)rewardId interstitialId:(NSString *)interstitialId fullScreenId:(NSString *)fullScreenId userId:(NSString *)userId;
@end

