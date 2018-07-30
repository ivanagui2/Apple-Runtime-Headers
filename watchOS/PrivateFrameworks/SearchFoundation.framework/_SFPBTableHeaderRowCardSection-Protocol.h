//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, _SFPBColor, _SFPBFormattedText, _SFPBPunchout, _SFPBTableAlignmentSchema;

@protocol _SFPBTableHeaderRowCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) _Bool alignRowsToHeader;
@property(nonatomic) int verticalAlign;
@property(nonatomic) _Bool reducedRowHeight;
@property(copy, nonatomic) NSString *tabGroupIdentifier;
@property(nonatomic) _Bool isSubHeader;
@property(copy, nonatomic) NSArray *datas;
@property(retain, nonatomic) _SFPBTableAlignmentSchema *alignmentSchema;
@property(copy, nonatomic) NSString *tableIdentifier;
@property(retain, nonatomic) _SFPBColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) _Bool hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(nonatomic) _Bool canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBFormattedText *)dataAtIndex:(unsigned int)arg1;
- (unsigned int)dataCount;
- (void)addData:(_SFPBFormattedText *)arg1;
- (void)clearData;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned int)arg1;
- (unsigned int)punchoutOptionsCount;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
@end
