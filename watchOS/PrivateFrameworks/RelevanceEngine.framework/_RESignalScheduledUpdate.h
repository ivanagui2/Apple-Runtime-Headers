//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface _RESignalScheduledUpdate : NSObject
{
    CDUnknownBlockType _completion;
    NSDate *_lastFireDate;
    double _interval;
}

@property(retain, nonatomic) NSDate *lastFireDate; // @synthesize lastFireDate=_lastFireDate;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) double interval; // @synthesize interval=_interval;
- (void).cxx_destruct;

@end
