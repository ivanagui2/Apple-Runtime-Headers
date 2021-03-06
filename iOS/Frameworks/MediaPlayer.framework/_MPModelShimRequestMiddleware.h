//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPMiddleware-Protocol.h>

@class MPModelResponse, NSArray, NSString;

@interface _MPModelShimRequestMiddleware : NSObject <MPMiddleware>
{
    NSArray *_invalidationObservers;
    MPModelResponse *_modelResponse;
}

@property(retain, nonatomic) MPModelResponse *modelResponse; // @synthesize modelResponse=_modelResponse;
@property(retain, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
- (void).cxx_destruct;
- (id)operationsForRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

