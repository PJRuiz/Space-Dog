//
//  THSpaceDogNode.h
//  Space Cat
//
//  Created by Pedro Ruíz on 5/14/14.
//  Copyright (c) 2015 Pedro Ruíz. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

typedef NS_ENUM(NSUInteger, THSpaceDogType) {
    THSpaceDogTypeA = 0,
    THSpaceDogTypeB = 1
};


@interface THSpaceDogNode : SKSpriteNode

@property (nonatomic, getter= isDamaged) BOOL damaged;
@property (nonatomic) THSpaceDogType type;

+ (instancetype) spaceDogOfType:(THSpaceDogType)type;

@end
