//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSDisplayLink : NSObject
{
}

+ (double)currentTimestamp;
@property(getter=isPaused) BOOL paused;
- (void)invalidate;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
@property BOOL executesConcurrently;

@end
