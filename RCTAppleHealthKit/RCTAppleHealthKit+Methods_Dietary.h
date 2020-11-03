//
//  RCTAppleHealthKit+Methods_Dietary.h
//  RCTAppleHealthKit
//
//  Created by Greg Wilson on 2016-06-26.
//  Copyright © 2016 Greg Wilson. All rights reserved.
//

#import "RCTAppleHealthKit.h"

@interface RCTAppleHealthKit (Methods_Dietary)

- (void)saveFood:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)saveWater:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getFatTotalSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getCarbohydratesSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getCalciumSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getSugarSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getFiberSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getFolateSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getIronSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getPotassiumSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getProteinSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getFatSaturatedSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getSodiumSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getVitaminASamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getVitaminCSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)dietary_getVitaminDSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

@end
