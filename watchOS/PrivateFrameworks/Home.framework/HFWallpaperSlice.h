//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, UIImage;

@interface HFWallpaperSlice : NSObject <NSCopying>
{
    int _type;
    int _variant;
    UIImage *_image;
    NSString *_identifier;
}

@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) int variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isSlicedFromWallpaper:(id)arg1;
- (id)description;
- (id)initWithType:(int)arg1 variant:(int)arg2 identifier:(id)arg3 image:(id)arg4;

@end
