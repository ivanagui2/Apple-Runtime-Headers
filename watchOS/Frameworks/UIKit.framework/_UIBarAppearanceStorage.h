//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIBarAppearanceStorage : NSObject
{
    NSMutableDictionary *_backgroundImages;
}

+ (int)typicalBarPosition;
- (void).cxx_destruct;
- (id)allBackgroundImages;
- (void)setAllBackgroundImages:(id)arg1;
- (_Bool)hasAnyCustomBackgroundImage;
- (id)backgroundImageForBarPosition:(int)arg1 barMetrics:(int)arg2;
- (void)setBackgroundImage:(id)arg1 forBarPosition:(int)arg2 barMetrics:(int)arg3;

@end
