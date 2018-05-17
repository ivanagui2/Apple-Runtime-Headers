//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableAttributedString, NSString;

@interface SCROBrailleChunk : NSObject <NSCopying>
{
    NSString *_overrideText;
    NSString *_language;
    _Bool _isFocused;
    _Bool _isTechnical;
    _Bool _hasTextSelection;
    struct _NSRange _textSelection;
    long long _token;
    _Bool _showDotsSevenAndEight;
    struct _NSRange _brailleSelection;
    _Bool _isPadding;
    _Bool _showEightDot;
    _Bool _isEditableText;
    int _contractionMode;
    NSString *_text;
    NSMutableAttributedString *_brailleString;
    NSMutableAttributedString *_pendingBraille;
    NSString *_originalText;
    struct _NSRange _brailleFocus;
    struct _NSRange __textFocus;
}

+ (void)initialize;
@property(nonatomic) struct _NSRange _textFocus; // @synthesize _textFocus=__textFocus;
@property(copy, nonatomic) NSString *originalText; // @synthesize originalText=_originalText;
@property(retain, nonatomic) NSMutableAttributedString *pendingBraille; // @synthesize pendingBraille=_pendingBraille;
@property(nonatomic) struct _NSRange brailleFocus; // @synthesize brailleFocus=_brailleFocus;
@property(readonly, nonatomic) struct _NSRange brailleSelection; // @synthesize brailleSelection=_brailleSelection;
@property(nonatomic) _Bool isPadding; // @synthesize isPadding=_isPadding;
@property(retain, nonatomic) NSMutableAttributedString *brailleString; // @synthesize brailleString=_brailleString;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool isEditableText; // @synthesize isEditableText=_isEditableText;
@property(readonly, nonatomic) _Bool showEightDot; // @synthesize showEightDot=_showEightDot;
@property(readonly, nonatomic) int contractionMode; // @synthesize contractionMode=_contractionMode;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
- (void).cxx_destruct;
- (_Bool)_deleteSelectionOrRange:(struct _NSRange *)arg1 deletedText:(id *)arg2;
- (void)_endEditing;
- (void)_beginEditing;
- (void)insertBrailleStringAtCursor:(id)arg1 modifiers:(id)arg2;
- (void)removeCursor;
- (_Bool)moveCursorTo:(unsigned long long)arg1;
- (_Bool)moveCursorRight;
- (_Bool)moveCursorLeft;
- (_Bool)forwardDeleteAtBeginningShouldTranslate:(out _Bool *)arg1;
- (_Bool)forwardDeleteAtCursorShouldTranslate:(out _Bool *)arg1;
- (_Bool)deleteAtEndShouldTranslate:(out _Bool *)arg1 deletedText:(id *)arg2;
- (_Bool)deleteAtCursorShouldTranslate:(out _Bool *)arg1 deletedText:(id *)arg2;
- (void)discardEdits;
- (id)translatedTextForBraille:(out id *)arg1 replacingTextInRange:(out struct _NSRange *)arg2 cursor:(out unsigned long long *)arg3;
@property(readonly, nonatomic) _Bool shouldProvideReplacementRange;
@property(readonly, nonatomic) _Bool shouldTranslateNow;
@property(readonly, nonatomic) _Bool hasEdits;
- (id)_translatePendingBraille;
@property(readonly, nonatomic) NSMutableAttributedString *currentBrailleString;
- (_Bool)indexIsWithinWord:(unsigned long long)arg1;
- (id)brailleWithIBeamLocation:(long long *)arg1 selection:(struct _NSRange *)arg2 brailleOffset:(long long)arg3;
- (struct _NSRange)brailleRangeForLocation:(unsigned long long)arg1;
- (long long)locationForIndex:(long long)arg1;
- (void)_retranslateWithTextPositionsRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) unsigned long long textLength;
@property(readonly, nonatomic) unsigned long long length;
- (long long)token;
- (_Bool)isFocusedOrSelected;
- (_Bool)hasSelection;
- (_Bool)focused;
- (void)_translateAsLiteraryTextWithPrimaryTable:(_Bool)arg1 textPositionsRange:(struct _NSRange)arg2;
- (void)enumerateWordsBetweenCharacters:(id)arg1 text:(id)arg2 inRange:(struct _NSRange)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)_translateAsTechnicalTextWithPrimaryTable:(_Bool)arg1;
- (void)_translateWithTextPositionsRange:(struct _NSRange)arg1;
- (struct _NSRange)_adjustedTextRangeForBrailleTranslation:(struct _NSRange)arg1;
- (void)translate;
- (id)_tableIdentifierForLanguage:(id)arg1;
- (id)description;
- (id)initWithText:(id)arg1 overrideText:(id)arg2 language:(id)arg3 selection:(struct _NSRange *)arg4 token:(long long)arg5 textFocus:(struct _NSRange *)arg6 contractionMode:(int)arg7 showEightDot:(_Bool)arg8 showDotsSevenAndEight:(_Bool)arg9 technical:(_Bool)arg10 isEditableText:(_Bool)arg11 isPadding:(_Bool)arg12;
- (id)initWithText:(id)arg1 overrideText:(id)arg2 language:(id)arg3 selection:(struct _NSRange *)arg4 token:(long long)arg5 textFocus:(struct _NSRange *)arg6 contractionMode:(int)arg7 showEightDot:(_Bool)arg8 showDotsSevenAndEight:(_Bool)arg9 technical:(_Bool)arg10 isEditableText:(_Bool)arg11;
- (id)initWithText:(id)arg1 language:(id)arg2 selection:(struct _NSRange *)arg3 token:(long long)arg4 textFocus:(struct _NSRange *)arg5 contractionMode:(int)arg6 showEightDot:(_Bool)arg7 showDotsSevenAndEight:(_Bool)arg8 technical:(_Bool)arg9 isEditableText:(_Bool)arg10;
- (id)initWithText:(id)arg1 language:(id)arg2 selection:(struct _NSRange *)arg3 token:(long long)arg4 textFocus:(struct _NSRange *)arg5 contractionMode:(int)arg6 showEightDot:(_Bool)arg7 showDotsSevenAndEight:(_Bool)arg8 isEditableText:(_Bool)arg9;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
