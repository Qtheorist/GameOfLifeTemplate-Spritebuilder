//
//  Creature.h
//  cocos2d-ios
//
//  Created by Administrator on 7/3/14.
//
//

#import "CCSprite.h"

@interface Creature : CCSprite


// stores the current state of the creature
@property (nonatomic, assign) BOOL isAlive;

// stores the amount of living neighbors
@property (nonatomic, assign) NSInteger livingNeighbors;

- (id)initCreature;

@end
