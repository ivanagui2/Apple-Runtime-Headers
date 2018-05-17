//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOMapItemIdentifier, NSString;

@interface VKTransitLineMarker : NSObject
{
    GEOMapItemIdentifier *_identifier;
    NSString *_shieldText;
    NSString *_shieldLocale;
    long long _shieldType;
    CDStruct_87ab733e _shieldColor;
    NSString *_labelText;
    NSString *_labelLocale;
    void *_transitLinkID;
}

+ (id)markerWithFeature:(CDStruct_99ab1b21 *)arg1 transitLink:(const CDStruct_e7ceca4d *)arg2;
@property(readonly, nonatomic) void *transitLinkID; // @synthesize transitLinkID=_transitLinkID;
@property(readonly, nonatomic) NSString *labelLocale; // @synthesize labelLocale=_labelLocale;
@property(readonly, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
@property(readonly, nonatomic) CDStruct_87ab733e shieldColor; // @synthesize shieldColor=_shieldColor;
@property(readonly, nonatomic) long long shieldType; // @synthesize shieldType=_shieldType;
@property(readonly, nonatomic) NSString *shieldLocale; // @synthesize shieldLocale=_shieldLocale;
@property(readonly, nonatomic) NSString *shieldText; // @synthesize shieldText=_shieldText;
@property(readonly, nonatomic) GEOMapItemIdentifier *identifier; // @synthesize identifier=_identifier;
- (id).cxx_construct;
@property(readonly, nonatomic) unsigned long long featureID;
- (id)description;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithFeature:(CDStruct_99ab1b21 *)arg1 transitLink:(const CDStruct_e7ceca4d *)arg2;

@end
