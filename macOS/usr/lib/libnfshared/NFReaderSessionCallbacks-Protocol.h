//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NFSessionCallbackInterface.h"
#import "NSObject.h"

@class NFTechnologyEvent, NSArray, NSError;

@protocol NFReaderSessionCallbacks <NSObject, NFSessionCallbackInterface>
- (void)didTerminate:(NSError *)arg1;

@optional
- (void)didDetectExternalReader:(NFTechnologyEvent *)arg1;
- (void)didDetectNDEFMessages:(NSArray *)arg1 fromTags:(NSArray *)arg2;
- (void)didDetectTags:(NSArray *)arg1;
@end
