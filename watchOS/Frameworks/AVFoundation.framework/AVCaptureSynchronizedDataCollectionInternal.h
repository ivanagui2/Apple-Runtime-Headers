//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureOutput, AVCaptureSynchronizedData, NSArray;

@interface AVCaptureSynchronizedDataCollectionInternal : NSObject
{
    AVCaptureOutput *dataOutputs[4];
    AVCaptureSynchronizedData *synchronizedData[4];
    BOOL count;
    unsigned long changeSeed;
    CDStruct_1b6d18a9 creationTime;
    NSArray *possibleDataOutputs;
}

@end
