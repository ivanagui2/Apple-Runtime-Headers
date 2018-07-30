//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VoiceShortcutsUI/VCUIManageVoiceShortcutView.h>

@class NSLayoutConstraint, SUICFlamesView, UILabel, VCUIHeadlineView, VCUITypeToSiriField;

@interface VCUIManageVoiceShortcutRecordingView : VCUIManageVoiceShortcutView
{
    _Bool _typeToSiriEnabled;
    _Bool _speechStarted;
    _Bool _animatingHeadlineView;
    SUICFlamesView *_flamesView;
    UILabel *_typeToSiriLabel;
    VCUITypeToSiriField *_typeToSiriField;
    VCUIHeadlineView *_headlineView;
    NSLayoutConstraint *_headlineViewAnimationBeginConstraint;
    NSLayoutConstraint *_headlineViewAnimationCompleteConstraint;
    NSLayoutConstraint *_minHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *minHeightConstraint; // @synthesize minHeightConstraint=_minHeightConstraint;
@property(nonatomic) _Bool animatingHeadlineView; // @synthesize animatingHeadlineView=_animatingHeadlineView;
@property(retain, nonatomic) NSLayoutConstraint *headlineViewAnimationCompleteConstraint; // @synthesize headlineViewAnimationCompleteConstraint=_headlineViewAnimationCompleteConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headlineViewAnimationBeginConstraint; // @synthesize headlineViewAnimationBeginConstraint=_headlineViewAnimationBeginConstraint;
@property(retain, nonatomic) VCUIHeadlineView *headlineView; // @synthesize headlineView=_headlineView;
@property(nonatomic) _Bool speechStarted; // @synthesize speechStarted=_speechStarted;
@property(nonatomic) _Bool typeToSiriEnabled; // @synthesize typeToSiriEnabled=_typeToSiriEnabled;
@property(retain, nonatomic) VCUITypeToSiriField *typeToSiriField; // @synthesize typeToSiriField=_typeToSiriField;
@property(retain, nonatomic) UILabel *typeToSiriLabel; // @synthesize typeToSiriLabel=_typeToSiriLabel;
@property(retain, nonatomic) SUICFlamesView *flamesView; // @synthesize flamesView=_flamesView;
- (void).cxx_destruct;
- (void)updateButtonTrayDelta:(double)arg1;
- (_Bool)showRecordingButtonOverlayDescription;
- (_Bool)showRecordingButtonOverlay;
- (void)showPhraseSuggestion;
- (void)showPhraseSuggestionIfNeeded:(id)arg1;
- (void)updateTranscription:(id)arg1;
- (void)displayErrorMessageForType:(long long)arg1;
- (id)initWithController:(id)arg1 options:(id)arg2;

@end
