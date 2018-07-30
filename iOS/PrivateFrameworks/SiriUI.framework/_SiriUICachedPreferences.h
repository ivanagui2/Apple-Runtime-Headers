//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUserDefaults;

@interface _SiriUICachedPreferences : NSObject
{
    NSUserDefaults *_textInputDefaults;
    _Bool _textInputEnabled;
    _Bool _HTTForTextInputEnabled;
    _Bool _siriMiniIsEnabled;
    _Bool _streamingDictationIsEnabled;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_updatePreferences;
- (_Bool)isStreamingDictationEnabled;
- (_Bool)isSiriMiniEnabled;
- (_Bool)isHTTForTextInputEnabled;
- (_Bool)isTextInputEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end
