//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutGeometryGroupSolution : NSObject
{
    NSArray *_frames;
    struct CGSize _size;
}

+ (id)solutionWithSize:(struct CGSize)arg1 frames:(id)arg2;
@property(retain, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)frameAtIndex:(long long)arg1 withOffset:(struct CGPoint)arg2;
- (id)framesWithOffset:(struct CGPoint)arg1;
- (id)initWithSize:(struct CGSize)arg1 frames:(id)arg2;

@end

