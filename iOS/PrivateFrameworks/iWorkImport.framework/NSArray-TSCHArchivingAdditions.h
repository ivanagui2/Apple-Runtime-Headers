//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@interface NSArray (TSCHArchivingAdditions)
- (id)tsch_initWithSwapTuplesArray:(const RepeatedPtrField_daf2f3db *)arg1 unarchiver:(id)arg2;
- (void)tsch_saveToSwapTuplesArray:(RepeatedPtrField_daf2f3db *)arg1 archiver:(id)arg2;
- (id)tsch_initWithSwapTuples:(const struct StyleSwapUndoTuplesArchive *)arg1 unarchiver:(id)arg2;
- (void)tsch_saveToSwapTuples:(struct StyleSwapUndoTuplesArchive *)arg1 archiver:(id)arg2;
- (id)tsch_initWithSwapTupleArray:(const RepeatedPtrField_a96af6e2 *)arg1 unarchiver:(id)arg2;
- (void)tsch_saveToSwapTupleArray:(RepeatedPtrField_a96af6e2 *)arg1 archiver:(id)arg2;
@end
