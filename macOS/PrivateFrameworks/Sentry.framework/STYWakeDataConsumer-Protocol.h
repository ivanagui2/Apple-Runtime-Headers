//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol STYWakeDataConsumer <NSObject>
- (BOOL)wakeDataProviderShouldResumeAfterInterruption:(id <STYWakeDataProvider>)arg1;
- (void)consumeWakeTimestamp:(unsigned long long)arg1 ofType:(unsigned long long)arg2;
@end
