//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _MPMusicPlayerQueueTransaction : NSObject
{
    int _state;
    CDUnknownBlockType _completion;
}

@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
@property(readonly, nonatomic) id identifier;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end

