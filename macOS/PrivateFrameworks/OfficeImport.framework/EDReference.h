//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface EDReference : NSObject <NSCopying>
{
    struct EDAreaReference mAreaReference;
}

+ (id)referenceWithReference:(id)arg1;
+ (id)referenceWithAreaReference:(struct EDAreaReference *)arg1;
+ (id)referenceWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4;
+ (id)reference;
- (id)description;
- (_Bool)fullyAdjacentToReference:(id)arg1;
- (unsigned long long)countOfCellsBeingReferenced;
- (_Bool)isValidAreaReference;
- (_Bool)isValidCellReference;
- (_Bool)isColumnReference;
- (_Bool)isRowReference;
- (_Bool)isCellReference;
- (_Bool)containsRow:(int)arg1 column:(int)arg2;
- (int)lastColumn;
- (int)lastRow;
- (int)firstColumn;
- (int)firstRow;
- (struct EDAreaReference)areaReference;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToReference:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReference:(id)arg1;
- (id)initWithAreaReference:(struct EDAreaReference *)arg1;
- (id)initWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4;
- (id)init;
- (void)unionWithRow:(int)arg1 column:(int)arg2;
- (void)unionWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4;
- (void)unionWithReference:(id)arg1;
- (void)setLastColumn:(int)arg1;
- (void)setLastRow:(int)arg1;
- (void)setFirstColumn:(int)arg1;
- (void)setFirstRow:(int)arg1;

@end
