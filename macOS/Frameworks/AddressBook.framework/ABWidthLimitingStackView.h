//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSStackView.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ABWidthLimitingStackView : NSStackView
{
    NSArray *_constraints;
}

- (void)enumerateEachPairOfViews:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)layoutLine:(id)arg1;
- (id)layoutLines:(id)arg1;
- (void)updateConstraints;
- (void)dealloc;

@end
