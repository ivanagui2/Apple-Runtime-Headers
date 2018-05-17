//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCECellValue.h>

__attribute__((visibility("hidden")))
@interface TSCEBooleanCellValue : TSCECellValue
{
    struct TSCEBooleanValue *_booleanValue;
}

- (void)encodeToArchive:(struct BooleanCellValueArchive *)arg1;
- (id)initWithArchive:(const struct BooleanCellValueArchive *)arg1 locale:(id)arg2;
- (long long)compareToCellValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToCellValue:(id)arg1;
- (struct TSCEValue)tsceValue;
- (id)displayString;
- (id)format;
- (struct TSCEBooleanValue *)booleanValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithBooleanValue:(struct TSCEBooleanValue *)arg1 locale:(id)arg2;
- (id)initWithBoolean:(_Bool)arg1 locale:(id)arg2;

@end
