//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, NSURL, SBFWallpaperOptions, SBWallpaperImage, UIColor, UIImage;

@protocol SBFWallpaperDataStore <NSObject>
- (void)removeWallpaperColorForVariants:(int)arg1;
- (_Bool)setWallpaperColorName:(NSString *)arg1 forVariants:(int)arg2;
- (_Bool)setWallpaperColor:(UIColor *)arg1 forVariants:(int)arg2;
- (NSString *)wallpaperColorNameForVariant:(int)arg1;
- (UIColor *)wallpaperColorForVariant:(int)arg1;
- (void)removeWallpaperOptionsForVariants:(int)arg1;
- (_Bool)setWallpaperOptions:(SBFWallpaperOptions *)arg1 forVariants:(int)arg2;
- (SBFWallpaperOptions *)wallpaperOptionsForVariant:(int)arg1;
- (void)removeProceduralWallpaperForVariants:(int)arg1;
- (_Bool)setProceduralWallpaperInfo:(NSDictionary *)arg1 forVariants:(int)arg2;
- (NSDictionary *)proceduralWallpaperInfoForVariant:(int)arg1;
- (void)removeVideoForVariant:(int)arg1;
- (_Bool)setOriginalVideoURL:(NSURL *)arg1 forVariant:(int)arg2;
- (_Bool)setVideoURL:(NSURL *)arg1 forVariant:(int)arg2;
- (NSURL *)verifiedOriginalVideoURLForVariant:(int)arg1;
- (NSURL *)verifiedVideoURLForVariant:(int)arg1;
- (NSURL *)unverifiedVideoURLForVariant:(int)arg1;
- (void)removeWallpaperImageDataTypes:(unsigned int)arg1 forVariants:(int)arg2;
- (void)moveWallpaperImageDataTypes:(unsigned int)arg1 fromVariant:(int)arg2 toVariant:(int)arg3;
- (_Bool)setWallpaperThumbnailData:(NSData *)arg1 forVariant:(int)arg2;
- (_Bool)setWallpaperOriginalImage:(UIImage *)arg1 forVariant:(int)arg2;
- (_Bool)setWallpaperImage:(UIImage *)arg1 forVariant:(int)arg2;
- (NSData *)wallpaperThumbnailDataForVariant:(int)arg1;
- (UIImage *)wallpaperOriginalImageForVariant:(int)arg1;
- (_Bool)hasWallpaperImageForVariant:(int)arg1;
- (SBWallpaperImage *)wallpaperImageForVariant:(int)arg1;
@end
