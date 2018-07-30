//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

@class NSArray, NSDictionary, NSIndexSet, NSNumber, PXCollectionsDataSource;

@interface PXNavigationListDataSource : PXSectionedDataSource
{
    NSIndexSet *_dataSubsectionIndexes;
    NSArray *_dataSubsections;
    NSNumber *_numberOfListItems;
    long long _indentationLevel;
    NSDictionary *_childDataSources;
    NSDictionary *_childIndexHints;
    PXCollectionsDataSource *_collectionsDataSource;
    NSArray *_sectionRangeMap;
}

@property(readonly, nonatomic) NSArray *sectionRangeMap; // @synthesize sectionRangeMap=_sectionRangeMap;
@property(readonly, nonatomic) PXCollectionsDataSource *collectionsDataSource; // @synthesize collectionsDataSource=_collectionsDataSource;
@property(readonly, copy, nonatomic) NSDictionary *childIndexHints; // @synthesize childIndexHints=_childIndexHints;
@property(readonly, copy, nonatomic) NSDictionary *childDataSources; // @synthesize childDataSources=_childDataSources;
@property(readonly, nonatomic) long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
- (void).cxx_destruct;
- (id)changeDetailsToDataSource:(id)arg1 changeDetailsHint:(id)arg2 changeDetailsByItem:(id)arg3;
- (id)debugDescription;
- (id)parentOfListItemAtIndex:(long long)arg1 localIndex:(long long *)arg2;
- (long long)indexInCollectionDataSourceOfListItem:(id)arg1 hintIndex:(long long)arg2;
- (long long)validatedIndexOfListItem:(id)arg1 hintIndex:(long long)arg2;
- (long long)indexForListItem:(id)arg1;
- (id)listItemForSystemItem:(long long)arg1;
- (id)listItemAtIndex:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
@property(readonly, nonatomic) long long numberOfListItems;
- (unsigned long long)_dataSubsectionIndexForListItemAtIndex:(long long)arg1;
- (void)_createDataSubsectionsIfNecessary;
- (id)init;
- (id)initWithCollectionsDataSource:(id)arg1;
- (id)initWithCollectionsDataSource:(id)arg1 indentationLevel:(long long)arg2 childDataSources:(id)arg3 childIndexHints:(id)arg4;

@end
