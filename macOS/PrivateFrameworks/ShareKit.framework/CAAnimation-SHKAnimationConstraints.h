//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CAAnimation.h"

@interface CAAnimation (SHKAnimationConstraints)
- (void)SHK_cleanup;
- (void)setSHK_constrainedToStartWithNode:(id)arg1;
- (id)SHK_constrainedToStartWithNode;
- (void)setSHK_constrainedToSubEffectNode:(id)arg1;
- (id)SHK_constrainedToSubEffectNode;
- (void)setSHK_parentNode:(id)arg1;
- (id)SHK_parentNode;
- (void)setSHK_subEffectList:(id)arg1;
- (id)SHK_subEffectList;
- (void)setSHK_startAfterList:(id)arg1;
- (id)SHK_startAfterList;
- (void)setSHK_startWithList:(id)arg1;
- (id)SHK_startWithList;
- (id)SHK_listForKey:(id)arg1;
- (void)SHK_setSubEffects:(id)arg1;
- (void)SHK_startAfter:(id)arg1;
- (void)SHK_startWith:(id)arg1;
- (void)_SHK_synchronizeSubEffects;
- (void)SHK_synchronizeSubEffects;
- (void)_SHK_assertPostParentSetNodeCorrectness;
- (void)_SHK_setParentNodes;
- (id)SHK_allSiblings;
- (id)SHK_allSiblingsWithMarkedSet:(id)arg1;
- (void)SHK_constrainAnimation:(id)arg1 toConstraintList:(id)arg2;
- (void)_SHK_assertConstrainedToAMaxOf1Node;
@end
