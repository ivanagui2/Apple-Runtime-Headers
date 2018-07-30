//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, UIViewController;

@interface UIStoryboardUnwindSegueSource : NSObject
{
    NSMutableArray *_searchChain;
    UIViewController *_sourceViewController;
    SEL _unwindAction;
    id _sender;
}

@property(readonly) id sender; // @synthesize sender=_sender;
@property(readonly) SEL unwindAction; // @synthesize unwindAction=_unwindAction;
@property(readonly) UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
- (void).cxx_destruct;
- (id)_findDestination;
- (id)_childContainingUnwindSourceForViewController:(id)arg1;
- (id)_initWithSourceViewController:(id)arg1 action:(SEL)arg2 sender:(id)arg3;
- (id)init;

@end
