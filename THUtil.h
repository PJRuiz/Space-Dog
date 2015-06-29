//
//  THUtil.h
//  Space Cat
//
//  Created by Pedro Ruíz on 5/14/14.
//  Copyright (c) 2015 Pedro Ruíz. All rights reserved.
//
//This File is used to set global settings such as max lives and points awarded per hit.


#import <Foundation/Foundation.h>


static const int THProjectileSpeed = 400;
static const int THSpaceDogMinSpeed = -100;
static const int THSpaceDogMaxSpeed = -10;
static const int THMaxLives = 4;
static const int THPointsPerHit = 100;

typedef NS_OPTIONS(uint32_t, THCollisionCategory) {
    THCollisionCategoryEnemy        = 1 << 0,       // 0000
    THCollisionCategoryProjectile   = 1 << 1,       // 0010
    THCollisionCategoryDebris       = 1 << 2,       // 0100
    THCollisionCategoryGround       = 1 << 3        // 1000
};


@interface THUtil : NSObject

+ (NSInteger) randomWithMin:(NSInteger)min max:(NSInteger)max;

@end






















