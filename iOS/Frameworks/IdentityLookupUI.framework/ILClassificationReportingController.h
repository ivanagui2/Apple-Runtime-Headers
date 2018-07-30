//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMessageComposeViewControllerDelegate.h"

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface ILClassificationReportingController : NSObject <MFMessageComposeViewControllerDelegate>
{
    UIViewController *_hostViewController;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) __weak UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)reportViaSMSWithSender:(id)arg1 body:(id)arg2;
- (void)reportResponseViaNetwork:(id)arg1 forExtension:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)reportResponse:(id)arg1 forExtension:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithHostViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
