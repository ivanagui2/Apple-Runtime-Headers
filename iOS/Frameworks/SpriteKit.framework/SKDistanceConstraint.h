//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKConstraint.h>

@class SKNode, SKRange;

__attribute__((visibility("hidden")))
@interface SKDistanceConstraint : SKConstraint
{
    SKRange *_distanceRange;
    SKNode *_node;
    struct CGPoint _point;
}

+ (id)constraintWithPoint:(struct CGPoint)arg1 inNode:(id)arg2 distanceRange:(id)arg3;
+ (id)constraintWithPoint:(struct CGPoint)arg1 distanceRange:(id)arg2;
+ (id)constraintWithNode:(id)arg1 distanceRange:(id)arg2;
@property struct CGPoint point; // @synthesize point=_point;
@property __weak SKNode *node; // @synthesize node=_node;
@property(copy) SKRange *distanceRange; // @synthesize distanceRange=_distanceRange;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPoint:(struct CGPoint)arg1 inNode:(id)arg2 distanceRange:(id)arg3;

@end
