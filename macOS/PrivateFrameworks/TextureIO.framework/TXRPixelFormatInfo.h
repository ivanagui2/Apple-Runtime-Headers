//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TXRPixelFormatInfo : NSObject
{
}

+ (unsigned char)componentsPerPixel:(unsigned long long)arg1;
+ (struct TXRImageMemoryLayout)packedMemoryLayoutForFormat:(unsigned long long)arg1 dimensions: /* Error: Ran out of types for this method. */;
+ (BOOL)isGammaEncoded:(unsigned long long)arg1;
+ (BOOL)hasAlpha:(unsigned long long)arg1;
+ (BOOL)isCompressed:(unsigned long long)arg1;
+ (BOOL)isASTC:(unsigned long long)arg1;
+ (BOOL)isETC2:(unsigned long long)arg1;
+ (BOOL)isPVRTC:(unsigned long long)arg1;
+ (BOOL)isBC6to7:(unsigned long long)arg1;
+ (BOOL)isBC1to5:(unsigned long long)arg1;
+ (BOOL)isSRGB:(unsigned long long)arg1;
+ (BOOL)isFloat:(unsigned long long)arg1;
+ (BOOL)isInteger:(unsigned long long)arg1;
+ (unsigned char)pixelBytes:(unsigned long long)arg1;

@end
