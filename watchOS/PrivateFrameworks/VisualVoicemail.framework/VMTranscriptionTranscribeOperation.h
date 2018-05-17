//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VisualVoicemail/VMSpeechURLRecognitionRequestOperation.h>

#import "_VMSpeechRecognitionTaskDelegatePrivate.h"

@class NSObject<OS_dispatch_semaphore>, NSString, VMVoicemailTranscript;

@interface VMTranscriptionTranscribeOperation : VMSpeechURLRecognitionRequestOperation <_VMSpeechRecognitionTaskDelegatePrivate>
{
    CDUnknownBlockType _transcribeOperationCompletion;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    VMVoicemailTranscript *_transcript;
    double _duration;
    double _timeout;
}

@property(retain, nonatomic) VMVoicemailTranscript *transcript; // @synthesize transcript=_transcript;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(copy) CDUnknownBlockType transcribeOperationCompletion; // @synthesize transcribeOperationCompletion=_transcribeOperationCompletion;
@property double timeout; // @synthesize timeout=_timeout;
@property double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)speechRecognitionTask:(id)arg1 didProcessAudioDuration:(double)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(_Bool)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
- (void)speechRecognitionTaskWasCancelled:(id)arg1;
@property _Bool processOnServer;
- (void)main;
- (void)cancel;
- (id)initWithSpeechRecognizer:(id)arg1 speechURLRecognitionRequest:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
