//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXMemoriesDataSource.h>

@class NSArray;

@interface PXFeedBasedMemoriesDataSource : PXMemoriesDataSource
{
    NSArray *_entries;
}

@property(readonly, copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (void).cxx_destruct;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithDataSource:(id)arg1;

@end
