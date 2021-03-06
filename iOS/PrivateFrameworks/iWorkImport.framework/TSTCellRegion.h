//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSIndexSet;

__attribute__((visibility("hidden")))
@interface TSTCellRegion : NSObject <NSCopying>
{
    vector_e87daf7b _cellRanges;
    unsigned long long _cellCount;
    struct TSUCellCoord _firstCellID;
    struct TSUCellCoord _lastCellID;
    NSIndexSet *_intersectingColumnsIndexSet;
    NSIndexSet *_intersectingRowsIndexSet;
    struct TSUCellRect _boundingCellRange;
}

+ (id)regionFromPropertyListRepresentation:(id)arg1;
+ (id)regionFromColumnIndexes:(id)arg1 rowIndexes:(id)arg2;
+ (id)regionFromColumnIndices:(id)arg1;
+ (id)regionFromColumnIndices:(id)arg1 rowRange:(struct _NSRange)arg2;
+ (id)regionFromRowIndices:(id)arg1;
+ (id)regionFromRowIndices:(id)arg1 columnRange:(struct _NSRange)arg2;
+ (id)regionFillingRowsFromRegion:(id)arg1;
+ (id)regionFillingColumnsFromRegion:(id)arg1;
+ (id)invalidRegion;
+ (id)region:(id)arg1 intersectingRegion:(id)arg2;
+ (id)region:(id)arg1 subtractingRegion:(id)arg2;
+ (id)region:(id)arg1 addingRegion:(id)arg2;
+ (id)unionEveryRangeInRegion:(id)arg1 withRange:(struct TSUCellRect)arg2;
+ (id)region:(id)arg1 intersectingRange:(struct TSUCellRect)arg2;
+ (id)region:(id)arg1 subtractingColumnIndexes:(id)arg2;
+ (id)region:(id)arg1 subtractingRowIndexes:(id)arg2;
+ (id)region:(id)arg1 subtractingRange:(struct TSUCellRect)arg2;
+ (id)region:(id)arg1 addingRange:(struct TSUCellRect)arg2;
+ (id)regionFromMergeActionArray:(id)arg1 withTableInfo:(id)arg2;
+ (id)regionFromModelMergeList:(const vector_54ceaeac *)arg1;
+ (id)regionFromMergeList:(const vector_e87daf7b *)arg1;
+ (id)regionFromCellRangeVector:(const vector_e87daf7b *)arg1;
+ (id)regionFromCellUIDVector:(const vector_7670e6f2 *)arg1 withTableInfo:(id)arg2;
+ (id)regionFromCellIDVector:(const vector_38b190b0 *)arg1;
+ (id)regionFromCellDiffMap:(id)arg1 withTableInfo:(id)arg2;
+ (id)regionFromCellMap:(id)arg1 withTableInfo:(id)arg2 passingTest:(CDUnknownBlockType)arg3;
+ (id)regionFromCellMap:(id)arg1 withTableInfo:(id)arg2;
+ (id)regionFromRange:(struct TSUCellRect)arg1;
+ (id)regionFromModelCellRect:(struct TSUModelCellRect)arg1;
@property(retain, nonatomic) NSIndexSet *intersectingRowsIndexSet; // @synthesize intersectingRowsIndexSet=_intersectingRowsIndexSet;
@property(retain, nonatomic) NSIndexSet *intersectingColumnsIndexSet; // @synthesize intersectingColumnsIndexSet=_intersectingColumnsIndexSet;
@property(nonatomic) struct TSUCellCoord lastCellID; // @synthesize lastCellID=_lastCellID;
@property(nonatomic) struct TSUCellCoord firstCellID; // @synthesize firstCellID=_firstCellID;
@property(nonatomic) unsigned long long cellCount; // @synthesize cellCount=_cellCount;
@property(nonatomic) struct TSUCellRect boundingCellRange; // @synthesize boundingCellRange=_boundingCellRange;
@property(readonly, nonatomic) const vector_e87daf7b *cellRanges; // @synthesize cellRanges=_cellRanges;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)p_calculateUpperLeftAndBottomRightCellIDAndBoundingCellRange;
- (void)p_calculateIntersectingRows;
- (void)p_calculateIntersectingColumns;
- (void)p_calculateAncillaryInformation;
- (void)p_insertRangeIntoRegion:(struct TSUCellRect)arg1;
- (void)enumerateGridRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateGridColumnsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMissingColumnsIntersectingCellRange:(struct TSUCellRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateColumnsIntersectingCellRange:(struct TSUCellRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateMissingRowsIntersectingCellRange:(struct TSUCellRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateRowsIntersectingCellRange:(struct TSUCellRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateColumnRangesInReverseUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateColumnRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRowRangesInReverseUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRowRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateInDirection:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateRowsInReverseUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateColumnsInReverseUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateColumnsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateCellRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateCellIDsUsingBlock:(CDUnknownBlockType)arg1;
- (struct NSObject *)newRightToLeftIterator;
- (struct NSObject *)newIterator;
- (struct TSUCellCoord)suitableCursor;
- (struct TSUCellCoord)suitableAnchor;
- (id)p_copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (id)intersectingColumnsInRow:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int numberOfIntersectingRows;
@property(readonly, nonatomic) unsigned int numberOfIntersectingColumns;
- (_Bool)intersectsRow:(unsigned int)arg1;
- (_Bool)intersectsColumn:(unsigned short)arg1;
- (_Bool)intersectsCellRegion:(id)arg1;
- (_Bool)partiallyIntersectsCellRange:(struct TSUCellRect)arg1;
- (_Bool)intersectsCellRange:(struct TSUCellRect)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)equalsCellRange:(struct TSUCellRect)arg1;
- (_Bool)equalsCellRegion:(id)arg1;
- (_Bool)containsCellRegion:(id)arg1;
- (_Bool)containsCellRange:(struct TSUCellRect)arg1;
- (_Bool)containsCellID:(struct TSUCellCoord)arg1;
- (struct TSUCellRect)largestRangeContainingCellID:(struct TSUCellCoord)arg1;
- (id)propertyListRepresentation;
@property(readonly, nonatomic) _Bool isRectangle;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) struct TSUCellCoord boundingBottomRightCellID;
@property(readonly, nonatomic) struct TSUCellCoord boundingTopLeftCellID;
- (id)prunedCellRegionAgainstTable:(id)arg1 behavior:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)prunedCellRegionAgainstTable:(id)arg1 behavior:(unsigned long long)arg2;
- (id)regionByTrimmingAroundColumnIndices:(id)arg1;
- (id)regionByTrimmingAroundRowIndices:(id)arg1;
- (id)regionAfterRowIndex:(unsigned int)arg1;
- (id)regionUpToRowIndex:(unsigned int)arg1;
- (id)regionAfterColumnIndexRtoL:(unsigned short)arg1;
- (id)regionAfterColumnIndex:(unsigned short)arg1;
- (id)regionUpToColumnIndexRtoL:(unsigned short)arg1 maxColumnIndex:(unsigned short)arg2;
- (id)regionUpToColumnIndex:(unsigned short)arg1;
- (id)regionByMovingColumnsFromRange:(struct _NSRange)arg1 toIndex:(unsigned short)arg2;
- (id)regionByMovingRowsFromRange:(struct _NSRange)arg1 toIndex:(unsigned int)arg2;
- (id)regionByApplyingRowMapping:(id)arg1;
- (id)regionByAddingColumns:(id)arg1;
- (id)regionByAddingRows:(id)arg1;
- (id)regionByIntersectingColumnIndices:(id)arg1;
- (id)regionByIntersectingRowIndices:(id)arg1;
- (id)regionByCollapsingRangesForRemovedColumns:(id)arg1;
- (id)regionByCollapsingRangesForRemovedRows:(id)arg1;
- (id)regionByRemovingColumns:(id)arg1;
- (id)regionByRemovingRows:(id)arg1;
- (id)regionOffsetBy:(struct TSUColumnRowOffset)arg1;
- (id)regionByIntersectingRegion:(id)arg1;
- (id)regionBySubtractingRegion:(id)arg1;
- (id)regionByAddingRegion:(id)arg1;
- (id)regionByUnioningEveryRangeInRegionWithRange:(struct TSUCellRect)arg1;
- (id)regionByIntersectingRange:(struct TSUCellRect)arg1;
- (id)regionBySubtractingColumnIndexes:(id)arg1;
- (id)regionBySubtractingRowIndexes:(id)arg1;
- (id)regionBySubtractingRange:(struct TSUCellRect)arg1;
- (id)regionByAddingRange:(struct TSUCellRect)arg1;
-     // Error parsing type: v24@0:8^{CellRegion=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TST::CellRange>=^{Arena}ii^{Rep}}}16, name: saveToMessage:
-     // Error parsing type: @24@0:8r^{CellRegion=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TST::CellRange>=^{Arena}ii^{Rep}}}16, name: initFromMessage:
- (id)init;
- (vector_54ceaeac)modelCellRanges;
- (void)enumerateModelCellRectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)regionBySubtractingModelCellRegion:(id)arg1;
- (id)regionByAddingModelCellRegion:(id)arg1;
- (id)regionBySubtractingModelCellRect:(struct TSUModelCellRect)arg1;
- (id)regionByAddingModelCellRect:(struct TSUModelCellRect)arg1;
- (_Bool)partiallyIntersectsModelCellRect:(struct TSUModelCellRect)arg1;
- (_Bool)intersectsModelCellRect:(struct TSUModelCellRect)arg1;
- (_Bool)containsModelCellRect:(struct TSUModelCellRect)arg1;
- (_Bool)containsModelCellCoord:(struct TSUModelCellCoord)arg1;
@property(readonly, nonatomic) struct TSUModelCellRect boundingModelCellRect;
- (id)regionBySubtractingViewCellRegion:(id)arg1;
- (id)regionByAddingViewCellRegion:(id)arg1;
- (id)regionBySubtractingViewCellRect:(struct TSUViewCellRect)arg1;
- (id)regionByAddingViewCellRect:(struct TSUViewCellRect)arg1;
@property(readonly, nonatomic) struct TSUViewCellRect boundingViewCellRect;
- (void)fillCellRangeRowMajorSet:(set_5fd94db8 *)arg1 leftToRight:(_Bool)arg2;

@end

