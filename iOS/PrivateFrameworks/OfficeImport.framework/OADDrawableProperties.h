//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADProperties.h>

@class NSString, OADHyperlink, OADOrientedBounds;

@interface OADDrawableProperties : OADProperties
{
    OADOrientedBounds *mOrientedBounds;
    OADHyperlink *mClickHyperlink;
    OADHyperlink *mHoverHyperlink;
    NSString *mTitle;
    NSString *mDescription;
    unsigned int mHasAspectRatioLocked:1;
    unsigned int mAspectRatioLocked:1;
    unsigned int mHasWrdInline:1;
    unsigned int mWrdInline:1;
}

- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)hasAltDescription;
- (void)setAltDescription:(id)arg1;
- (id)altDescription;
- (_Bool)hasAltTitle;
- (void)setAltTitle:(id)arg1;
- (id)altTitle;
- (_Bool)hasWrdInline;
- (void)setWrdInline:(_Bool)arg1;
- (_Bool)isWrdInline;
- (_Bool)hasHoverHyperlink;
- (void)setHoverHyperlink:(id)arg1;
- (id)hoverHyperlink;
- (_Bool)hasClickHyperlink;
- (void)setClickHyperlink:(id)arg1;
- (id)clickHyperlink;
- (_Bool)hasAspectRatioLocked;
- (void)setAspectRatioLocked:(_Bool)arg1;
- (_Bool)isAspectRatioLocked;
- (_Bool)hasOrientedBounds;
- (void)setOrientedBounds:(id)arg1;
- (id)orientedBounds;
- (void)dealloc;
- (id)initWithDefaults;

@end
