//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CHRecognitionSession;

@protocol CHRecognitionSessionObserver <NSObject>
- (void)recognitionSessionDidUpdateRecognitionResult:(CHRecognitionSession *)arg1;

@optional
- (void)recognitionSessionDidChangeStatus:(CHRecognitionSession *)arg1;
- (_Bool)wantsHighFrequencyNotifications;
@end
