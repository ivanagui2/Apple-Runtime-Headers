//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol TIKeyboardActivityControlling <NSObject>
@property(readonly, nonatomic) unsigned long long activityState;
- (void)removeActivityObserver:(id <TIKeyboardActivityObserving>)arg1;
- (void)addActivityObserver:(id <TIKeyboardActivityObserving>)arg1;
@end
