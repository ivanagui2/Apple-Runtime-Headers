//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMKTextInput.h"

@class IMKTextDocumentTextInputAdaptor;

@interface IMKTextInputTextDocumentAdaptor : NSObject <IMKTextInput>
{
    id <IMKTextDocument> _textDocument;
}

@property(readonly, nonatomic) id <IMKTextDocument> textDocument; // @synthesize textDocument=_textDocument;
- (void).cxx_destruct;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (id)stringFromRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (id)uniqueClientIdentifierString;
- (BOOL)supportsProperty:(unsigned int)arg1;
- (int)windowLevel;
- (id)bundleIdentifier;
- (BOOL)supportsUnicode;
- (void)selectInputMode:(id)arg1;
- (void)overrideKeyboardWithKeyboardNamed:(id)arg1;
- (id)validAttributesForMarkedText;
- (id)attributesForCharacterIndex:(unsigned long long)arg1 lineHeightRectangle:(struct CGRect *)arg2;
- (long long)characterIndexForPoint:(struct CGPoint)arg1 tracking:(long long)arg2 inMarkedRange:(char *)arg3;
- (long long)length;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;
- (struct _NSRange)markedRange;
- (struct _NSRange)selectedRange;
- (void)setMarkedText:(id)arg1 selectionRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, nonatomic) IMKTextDocumentTextInputAdaptor *textDocumentAdaptor;
- (id)description;
- (id)initWithTextDocumentToAdapt:(id)arg1;

@end
