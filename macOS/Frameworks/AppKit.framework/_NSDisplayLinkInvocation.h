//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSDisplayLinkInvocation.h>

@interface _NSDisplayLinkInvocation : NSDisplayLinkInvocation
{
    double _timestamp;
    double _duration;
}

- (double)duration;
- (double)timestamp;
- (id)init;
- (id)initWithTimestamp:(double)arg1 duration:(double)arg2;

@end
