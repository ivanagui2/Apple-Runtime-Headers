//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSLayoutRule.h"

@class NSArray, NSString;

@interface NSAlignmentLayoutRule : NSObject <NSLayoutRule>
{
    NSArray *_alignedAnchors;
}

+ (id)alignmentWithAnchors:(id)arg1;
@property(readonly, copy) NSArray *alignedAnchors; // @synthesize alignedAnchors=_alignedAnchors;
@property(readonly, copy) NSString *ruleDescription;
@property(readonly, copy) NSString *description;
- (id)makeChildRules;
@property(readonly, copy) NSString *identifier;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithAlignedAnchors:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
