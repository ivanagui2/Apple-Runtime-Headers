//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTouchBarDelegate.h"
#import "NSTouchBarProvider.h"

@class NSString, NSTouchBar;

__attribute__((visibility("hidden")))
@interface AutomationTouchBarProvider : NSObject <NSTouchBarDelegate, NSTouchBarProvider>
{
    NSTouchBar *_touchBar;
}

- (void).cxx_destruct;
@property(readonly) NSTouchBar *touchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
