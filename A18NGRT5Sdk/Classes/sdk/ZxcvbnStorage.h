//
//  ZxcvbnStorage.h
//  ZxcvbnAdsSdk-iOS
//
//
#import "ZxcvbnDto.h"
#import <Foundation/Foundation.h>

@interface ZxcvbnStorage : NSObject
@property (nonatomic) int zCps;
+(instancetype) sharedInstance;
-(void) addStrategyData:(NSString *)adsId adData:(ZxcvbnDto *) zyxwvDto;
-(ZxcvbnDto *) getStrategyData: (NSString *)adsId;
@end

