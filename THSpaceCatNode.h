//
//  THSpaceCatNode.h
//  Space Cat
//
//  Created by Pedro Ruíz on 5/14/14.
//  Copyright (c) 2015 Pedro Ruíz. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface THSpaceCatNode : SKSpriteNode

+ (instancetype) spaceCatAtPosition:(CGPoint)position;

- (void) performTap;

@end
