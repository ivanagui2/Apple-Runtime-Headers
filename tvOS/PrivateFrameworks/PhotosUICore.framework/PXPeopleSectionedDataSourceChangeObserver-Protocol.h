//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, PXPeopleSectionedDataSource;

@protocol PXPeopleSectionedDataSourceChangeObserver <NSObject>
- (void)peopleSectionedDataSource:(PXPeopleSectionedDataSource *)arg1 didApplyIncrementalChanges:(NSArray *)arg2;
- (void)peopleSectionedDataSourceMembersChanged:(PXPeopleSectionedDataSource *)arg1;
@end

