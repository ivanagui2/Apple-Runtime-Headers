//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PrintSheetSuppressionManager : NSObject
{
    NSMutableArray *_printSheetInfoQueue;
    BOOL _showingPrintSheet;
    BOOL _suppress;
    BOOL _didConsumeFreePrint;
}

@property(nonatomic) BOOL didConsumeFreePrint; // @synthesize didConsumeFreePrint=_didConsumeFreePrint;
@property(nonatomic, getter=shouldSuppress) BOOL suppress; // @synthesize suppress=_suppress;
@property(nonatomic, getter=isShowingPrintSheet) BOOL showingPrintSheet; // @synthesize showingPrintSheet=_showingPrintSheet;
- (void).cxx_destruct;
- (id)dequeuePrintRequest;
- (void)enqueuePrintRequestForFrameHande:(id)arg1 shouldWaitUntilDone:(BOOL)arg2;
- (void)clearQueue;
- (void)reset;
- (id)init;

@end
