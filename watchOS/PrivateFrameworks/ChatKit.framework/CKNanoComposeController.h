//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUICQuickboardCompositionViewController.h"

#import "PUICQuickboardCompositionViewControllerDelegatePrivate.h"
#import "PUICQuickboardViewControllerDelegate.h"

@class CKAudioMediaObject, CKBrowserItemPayload, CKConversation, IMSticker, NSString, NSURL;

@interface CKNanoComposeController : PUICQuickboardCompositionViewController <PUICQuickboardCompositionViewControllerDelegatePrivate, PUICQuickboardViewControllerDelegate>
{
    _Bool _shouldPreserveConversation;
    id <CKNanoComposeControllerDismissalDelegate> _dismissalDelegate;
    CKConversation *_conversation;
    CKAudioMediaObject *_audioMediaObject;
    NSURL *_audioFileURL;
    CKBrowserItemPayload *_pluginPayload;
    IMSticker *_sticker;
}

@property(retain, nonatomic) IMSticker *sticker; // @synthesize sticker=_sticker;
@property(retain, nonatomic) CKBrowserItemPayload *pluginPayload; // @synthesize pluginPayload=_pluginPayload;
@property(retain, nonatomic) NSURL *audioFileURL; // @synthesize audioFileURL=_audioFileURL;
@property(retain, nonatomic) CKAudioMediaObject *audioMediaObject; // @synthesize audioMediaObject=_audioMediaObject;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) id <CKNanoComposeControllerDismissalDelegate> dismissalDelegate; // @synthesize dismissalDelegate=_dismissalDelegate;
- (void).cxx_destruct;
- (void)setMessage:(id)arg1;
- (void)resetMessageContent;
- (id)localizedLabelForEntity:(id)arg1;
- (void)loadRecentContacts;
- (id)proposedRecipients;
- (void)loadTextOptions;
- (void)ensureTextOptions;
- (id)waveformForAudioRecordingOfWidth:(float)arg1 color:(id)arg2 powerLevels:(id)arg3;
- (void)composeController:(id)arg1 didSelectSticker:(id)arg2;
- (void)composeController:(id)arg1 didSelectItemPayload:(id)arg2;
- (void)composeController:(id)arg1 finishedRecordingAudio:(id)arg2;
- (id)fileHandleForAudioRecording;
- (void)showDigitalTouchCanvas;
- (void)extraButtonTapped;
- (id)extraButtonImage;
- (id)inputContextIdentifierForComposeController:(id)arg1;
- (void)composeControllerPrimaryLanguageChanged:(id)arg1;
- (id)contactForRawAddress:(id)arg1;
- (void)composeControllerCompositionChanged:(id)arg1;
- (void)composeControllerFinished:(id)arg1;
- (void)composeControllerCancelled:(id)arg1;
- (void)conversationPreferredServiceChanged:(id)arg1;
- (void)assistantDidSend:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dismissQuickboardAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateForRecipients:(id)arg1 message:(id)arg2;
- (void)_dismissWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_dismissalDelegateWillDismiss;
- (void)sendMessage;
- (void)updateDictationMode;
- (void)updateActiveChatURL;
- (void)updateSendButtonColor;
- (id)composition;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)saveDraftState;
- (void)prepareForSuspend;
- (void)presentMessageQuickboardAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentRecipientsQuickboardAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRecipients:(id)arg1 message:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
