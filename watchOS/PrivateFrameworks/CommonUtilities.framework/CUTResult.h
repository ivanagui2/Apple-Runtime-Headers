//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface CUTResult : NSObject
{
    int _state;
    NSError *_inError;
    id _inValue;
}

@property(retain, nonatomic) id inValue; // @synthesize inValue=_inValue;
@property(retain, nonatomic) NSError *inError; // @synthesize inError=_inError;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) id value;
- (id)initWithSuccess:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithState:(int)arg1 value:(id)arg2 error:(id)arg3;

@end

