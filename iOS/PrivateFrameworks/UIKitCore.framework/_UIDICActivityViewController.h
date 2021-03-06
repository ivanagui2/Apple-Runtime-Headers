//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIActivityViewController.h>

@class NSString, UIDocumentInteractionController;
@protocol _UIDICActivityViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIDICActivityViewController : UIActivityViewController
{
    _Bool _isPerformingActivity;
    UIDocumentInteractionController<_UIDICActivityViewControllerDelegate> *_documentInteractionActivityDelegate;
    unsigned long long _options;
    id <_UIDICActivityViewControllerDelegate> _documentInteractionActivityDelegateRetained;
    NSString *_openActivityTargetApplicationIdentifier;
}

@property(retain, nonatomic) NSString *openActivityTargetApplicationIdentifier; // @synthesize openActivityTargetApplicationIdentifier=_openActivityTargetApplicationIdentifier;
@property(retain, nonatomic) id <_UIDICActivityViewControllerDelegate> documentInteractionActivityDelegateRetained; // @synthesize documentInteractionActivityDelegateRetained=_documentInteractionActivityDelegateRetained;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) _Bool isPerformingActivity; // @synthesize isPerformingActivity=_isPerformingActivity;
@property(nonatomic) __weak UIDocumentInteractionController<_UIDICActivityViewControllerDelegate> *documentInteractionActivityDelegate; // @synthesize documentInteractionActivityDelegate=_documentInteractionActivityDelegate;
- (void).cxx_destruct;
- (void)_handleDidFinishPerformingActivityType:(id)arg1 completed:(_Bool)arg2 resultItems:(id)arg3 activityError:(id)arg4;
- (void)_willPerformInServiceActivityType:(id)arg1 activitySpecificMetadata:(id)arg2;
- (void)_performActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (_Bool)_shouldShowSystemActivityType:(id)arg1;
- (_Bool)hidesSystemActivities;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 options:(unsigned long long)arg3;

@end

