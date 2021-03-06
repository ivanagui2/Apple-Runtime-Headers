//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, PHMemory, UIActivityIndicatorView, UILabel;

@interface PXMemoriesInlineProblemReportViewController : UIViewController
{
    _Bool _didDismissMailWindow;
    PHMemory *_memory;
    NSArray *_features;
    UILabel *_reportCaptureInProgressLabel;
    UIActivityIndicatorView *_reportCaptureInProgressActivityIndicator;
}

@property(nonatomic) _Bool didDismissMailWindow; // @synthesize didDismissMailWindow=_didDismissMailWindow;
@property(retain, nonatomic) UIActivityIndicatorView *reportCaptureInProgressActivityIndicator; // @synthesize reportCaptureInProgressActivityIndicator=_reportCaptureInProgressActivityIndicator;
@property(retain, nonatomic) UILabel *reportCaptureInProgressLabel; // @synthesize reportCaptureInProgressLabel=_reportCaptureInProgressLabel;
@property(retain, nonatomic) NSArray *features; // @synthesize features=_features;
@property(retain, nonatomic) PHMemory *memory; // @synthesize memory=_memory;
- (void).cxx_destruct;
- (void)_showMailComposeWindow;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMemory:(id)arg1 features:(id)arg2;

@end

