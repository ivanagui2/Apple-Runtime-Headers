//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PFCancelerObserver.h"

@interface PFCancelerObserver : NSObject <PFCancelerObserver>
{
    CDUnknownBlockType _block;
}

+ (id)observerForCanceler:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)cancelerWasCanceled:(id)arg1;
- (id)initWithCanceler:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;

@end
