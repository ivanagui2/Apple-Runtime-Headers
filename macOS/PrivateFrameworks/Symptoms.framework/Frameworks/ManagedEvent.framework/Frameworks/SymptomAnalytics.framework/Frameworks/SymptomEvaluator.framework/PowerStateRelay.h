//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PowerStateRelay : NSObject
{
    int powerStateToken;
    int screenStateToken;
    BOOL _pluggedIn;
    BOOL _screenNotDark;
}

+ (id)defaultRelay;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property BOOL screenNotDark; // @synthesize screenNotDark=_screenNotDark;
@property BOOL pluggedIn; // @synthesize pluggedIn=_pluggedIn;
- (id)init;

@end

