//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSApplication.h"

__attribute__((visibility("hidden")))
@interface SCRWorkspaceApplication : NSApplication
{
    BOOL _isRunLoopActive;
}

@property(nonatomic) BOOL isRunLoopActive; // @synthesize isRunLoopActive=_isRunLoopActive;
- (void)_stopRunLoop;
- (void)terminate:(id)arg1;
- (void)stop:(id)arg1;
- (void)run;

@end
