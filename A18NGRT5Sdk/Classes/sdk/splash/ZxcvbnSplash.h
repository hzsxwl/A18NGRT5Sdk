#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class ZxcvbnRequest;
@protocol ZxcvbnSplashAdDelegate <NSObject>
@optional
-(void) zxcvbnSplashAdDidShow;
-(void) zxcvbnSplashAdFailedToShow:(NSString *) pid error:(NSError *)error;
-(void) zxcvbnSplashAdLoadedSuccessfully:(NSString *) pid;
-(void) zxcvbnSplashAdFailedToLoad:(NSString *) pid error:(NSError *)error;
-(void) zxcvbnSplashAdWasClicked;
-(void) zxcvbnSplashAdDidClose;
-(void) zxcvbnSplashAdWasSkipped;

@end

@interface ZxcvbnSplash : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<ZxcvbnSplashAdDelegate> delegate;
@property (nonatomic, weak) UIViewController *rootViewController;

- (instancetype)initWithRequest:(ZxcvbnRequest *)request
                              extra:(NSDictionary * _Nullable)extra;
- (instancetype)initWithRequest:(ZxcvbnRequest *)request;
- (BOOL)isAdReady;
-(void)loadAndShowAd;
- (void)loadAdData;
- (void)displayAd:(UIWindow *)window;
@end
