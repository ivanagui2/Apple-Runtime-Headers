//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@class NUEndOfArticleSettings;

@interface NUANFEndOfArticleFeedCollectionViewLayout : UICollectionViewFlowLayout
{
    id <NUFeedBlueprintProvider> _blueprintProvider;
    NUEndOfArticleSettings *_settings;
}

@property(copy, nonatomic) NUEndOfArticleSettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) __weak id <NUFeedBlueprintProvider> blueprintProvider; // @synthesize blueprintProvider=_blueprintProvider;
- (void).cxx_destruct;
- (struct CGSize)sizeForItemsInBlueprint:(id)arg1;
- (struct UIEdgeInsets)sectionInset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (struct CGSize)itemSize;
- (long long)scrollDirection;
- (struct CGSize)collectionViewContentSize;
- (void)invalidateLayoutWithEndOfArticleSettings:(id)arg1;
- (id)initWithBlueprintProvider:(id)arg1 settings:(id)arg2;

@end
