//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface PUAirPlayScreenMap : NSObject
{
    NSMapTable *_screens;
}

- (void).cxx_destruct;
- (unsigned long long)airPlayScreensCount;
- (id)allAirPlayScreens;
- (id)airPlayScreenForScreen:(id)arg1;
- (void)removeAirPlayScreen:(id)arg1;
- (void)addDetectedAirPlayScreen:(id)arg1;
- (id)init;

@end
