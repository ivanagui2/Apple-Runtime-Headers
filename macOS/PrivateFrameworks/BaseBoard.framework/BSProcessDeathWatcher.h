//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSDispatchSource;

@interface BSProcessDeathWatcher : NSObject
{
    BSDispatchSource *_source;
    CDUnknownBlockType _deathHandler;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithPID:(int)arg1 queue:(id)arg2 deathHandler:(CDUnknownBlockType)arg3;

@end
