//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface _TVSUIOffscreenRendererFormat : NSObject <NSCopying>
{
    _Bool _opaque;
    _Bool _extendedRange;
    double _scale;
}

+ (id)formatForTraitCollection:(id)arg1;
@property(nonatomic, getter=isExtendedRange) _Bool extendedRange; // @synthesize extendedRange=_extendedRange;
@property(nonatomic, getter=isOpaque) _Bool opaque; // @synthesize opaque=_opaque;
@property(nonatomic) double scale; // @synthesize scale=_scale;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
