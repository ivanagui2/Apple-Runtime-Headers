//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _NSQuickActionTouchBarClientItemSourceMonitor : NSObject
{
    id <_NSQuickActionItemSource> _itemSource;
    BOOL _isObserving;
}

+ (BOOL)automaticallyNotifiesObserversOfItemSource;
+ (BOOL)accessInstanceVariablesDirectly;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
@property(readonly) __weak id <_NSQuickActionItemSource> itemSource;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end
