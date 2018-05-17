//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, _SFPBColor, _SFPBImage, _SFPBPunchout, _SFPBURL;

@protocol _SFPBMetaInfoCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) BOOL hasBadge;
@property(retain, nonatomic) _SFPBImage *badge;
@property(readonly, nonatomic) BOOL hasHostPageURL;
@property(retain, nonatomic) _SFPBURL *hostPageURL;
@property(readonly, nonatomic) BOOL hasContentURL;
@property(retain, nonatomic) _SFPBURL *contentURL;
@property(readonly, nonatomic) BOOL hasTrending;
@property(nonatomic) BOOL trending;
@property(readonly, nonatomic) BOOL hasBackgroundColor;
@property(retain, nonatomic) _SFPBColor *backgroundColor;
@property(readonly, nonatomic) BOOL hasSeparatorStyle;
@property(nonatomic) int separatorStyle;
@property(readonly, nonatomic) BOOL hasType;
@property(copy, nonatomic) NSString *type;
@property(readonly, nonatomic) BOOL hasHasBottomPadding;
@property(nonatomic) BOOL hasBottomPadding;
@property(readonly, nonatomic) BOOL hasHasTopPadding;
@property(nonatomic) BOOL hasTopPadding;
@property(readonly, nonatomic) BOOL hasCanBeHidden;
@property(nonatomic) BOOL canBeHidden;
@property(readonly, nonatomic) BOOL hasPunchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(readonly, nonatomic) BOOL hasPunchoutPickerTitle;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
@end
