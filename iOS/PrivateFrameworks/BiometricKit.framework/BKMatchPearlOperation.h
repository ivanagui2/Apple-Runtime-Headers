//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BiometricKit/BKMatchOperation.h>

@protocol BKMatchPearlOperationDelegate;

@interface BKMatchPearlOperation : BKMatchOperation
{
    _Bool _longTimeout;
    _Bool _shouldAutoRetry;
}

@property(nonatomic) _Bool shouldAutoRetry; // @synthesize shouldAutoRetry=_shouldAutoRetry;
@property(nonatomic) _Bool longTimeout; // @synthesize longTimeout=_longTimeout;
- (_Bool)pauseFaceDetectTimer:(_Bool)arg1 error:(id *)arg2;
- (_Bool)enableAutoRetry:(_Bool)arg1 error:(id *)arg2;
- (_Bool)startNewMatchAttemptWithError:(id *)arg1;

// Remaining properties
@property(nonatomic) __weak id <BKMatchPearlOperationDelegate> delegate; // @dynamic delegate;

@end

