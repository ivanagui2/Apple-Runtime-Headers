//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _NSFSStreamWrapper : NSObject
{
    unsigned int _interestedFlags;
    struct __FSEventStream *_fsEventStreamRef;
    CDUnknownBlockType _callback;
}

- (void)processStream:(struct __FSEventStream *)arg1 eventPaths:(id)arg2 flags:(const unsigned int *)arg3 ids:(const unsigned long long *)arg4 count:(long long)arg5;
- (void)flushAsync;
- (void)invalidate;
- (void)dealloc;
- (id)initWithRootUrl:(id)arg1 eventTypes:(unsigned int)arg2 handler:(CDUnknownBlockType)arg3;

@end
