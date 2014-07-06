//
//  Grid.h
//  cocos2d-ios
//
//  Created by Administrator on 7/3/14.
//
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;
- (void)evolveStep;
- (void)countNeighbors;
- (void)updateCreatures;
@end


