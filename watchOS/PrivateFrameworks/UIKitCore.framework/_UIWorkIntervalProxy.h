//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIWorkIntervalProxy : NSObject
{
    struct work_interval_instance *_instance;
    _Bool _complex;
    _Bool _started;
    double _targetTimestamp;
    double _frameDuration;
}

- (void)dealloc;
- (id)init;

@end

