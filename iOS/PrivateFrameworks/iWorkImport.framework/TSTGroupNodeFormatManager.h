//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TSCECellValue;

__attribute__((visibility("hidden")))
@interface TSTGroupNodeFormatManager : NSObject
{
    NSMutableDictionary *_dict;
    _Bool _noFormatMergingNeeded;
    TSCECellValue *_cellValue;
}

@property(readonly, retain, nonatomic) TSCECellValue *cellValue; // @synthesize cellValue=_cellValue;
- (void).cxx_destruct;
-     // Error parsing type: v24@0:8^{CategoryOwnerArchive_GroupByArchive_GroupNodeArchive_FormatManagerArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSK::FormatStructArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TST::CategoryOwnerArchive_GroupByArchive_GroupNodeArchive_FormatManagerArchive_RowSetArchive>=^{Arena}ii^{Rep}}^{CellValueArchive}}16, name: encodeToArchive:
-     // Error parsing type: @24@0:8r^{CategoryOwnerArchive_GroupByArchive_GroupNodeArchive_FormatManagerArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSK::FormatStructArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TST::CategoryOwnerArchive_GroupByArchive_GroupNodeArchive_FormatManagerArchive_RowSetArchive>=^{Arena}ii^{Rep}}^{CellValueArchive}}16, name: initWithArchive:
- (void)updateWithDocumentRoot:(id)arg1;
- (id)description;
- (_Bool)mergedFormatChangedByRemovingRowUID:(const UUIDData_5fbc143e *)arg1;
- (_Bool)mergedFormatChangedByAddingRowUID:(const UUIDData_5fbc143e *)arg1 andCellValue:(id)arg2;
- (void)p_recalculateMergedFormat;
- (void)reset;
- (id)initWithCellValue:(id)arg1;

@end

