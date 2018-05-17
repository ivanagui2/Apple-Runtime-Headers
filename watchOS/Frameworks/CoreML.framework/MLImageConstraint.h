//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLFeatureValueConstraint.h"
#import "NSCopying.h"

@interface MLImageConstraint : NSObject <MLFeatureValueConstraint, NSCopying>
{
    unsigned int _pixelType;
    int _imageWidth;
    int _imageHeight;
}

+ (id)_stringForOSType:(unsigned long)arg1;
+ (id)constraintForBGRImageWithWidth:(long long)arg1 height:(long long)arg2;
+ (id)constraintForRGBImageWithWidth:(long long)arg1 height:(long long)arg2;
+ (id)constraintForGrayImageWithWidth:(long long)arg1 height:(long long)arg2;
+ (id)constraintWithWidth:(long long)arg1 height:(long long)arg2 osType:(unsigned long)arg3;
+ (_Bool)osType:(unsigned long)arg1 isAcceptedForPixelType:(unsigned int)arg2;
@property(readonly, nonatomic) int pixelsHigh; // @synthesize pixelsHigh=_imageHeight;
@property(readonly, nonatomic) int pixelsWide; // @synthesize pixelsWide=_imageWidth;
@property(readonly) unsigned int pixelType; // @synthesize pixelType=_pixelType;
@property(readonly) unsigned long long imageWidth;
@property(readonly) unsigned long long imageHeight;
@property(readonly) unsigned long osType;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isAllowedValue:(id)arg1 error:(id *)arg2;
- (id)_stringForAllowedOSTypes;
@property(readonly, nonatomic) unsigned long pixelFormatType;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2 pixelType:(unsigned int)arg3;

@end
