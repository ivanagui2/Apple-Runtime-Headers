//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzFilters/QFilterComponent.h>

@interface QFilterComponentRenderingIntent : QFilterComponent
{
}

+ (id)growableItemsKeysToValueToObserveForUndo;
+ (id)growableItemsKeyPath;
+ (BOOL)isUsedInFilter:(id)arg1;
- (void)resetOptionsInfo;
- (void)updateOptionsInfo;
- (BOOL)addCell;
- (BOOL)addIntentTuple:(id)arg1;
- (BOOL)addIntentTuple:(int)arg1 data:(int)arg2 intent:(int)arg3;
- (id)newGrowableItem;
- (id)growableItems;
- (BOOL)canGrow;
- (id)initWithFilterInfo:(id)arg1 parent:(id)arg2;
- (id)keysForValuesToObserveForUndo;

@end

