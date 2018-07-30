//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIResponderStandardEditActions.h"
#import "UITextInteraction_AssistantDelegate.h"

@class NSString, UIFieldEditor, UIGestureRecognizer, UILongPressGestureRecognizer, UIResponder<UITextInput>, UIScrollView, UITapGestureRecognizer, UITextChecker, UITextInteraction, UITextRange, UITextSelectionView;

@interface UITextInteractionAssistant : NSObject <UITextInteraction_AssistantDelegate, UIResponderStandardEditActions>
{
    UIResponder<UITextInput> *_view;
    UITextSelectionView *_selectionView;
    int _autoscrollRamp;
    float _autoscrollFactor;
    struct CGPoint _autoscrollBasePoint;
    struct CGPoint _autoscrollUntransformedExtentPoint;
    struct CGPoint _loupeGestureEndPoint;
    UITextChecker *_textChecker;
    _Bool _inGesture;
    _Bool _autoscrolled;
    _Bool _willHandoffLoupeMagnifier;
    _Bool _needsGestureUpdate;
    int _previousRepeatedGranularity;
    UITextRange *_stashedTextRange;
    _Bool _didUseStashedRange;
    _Bool _externalTextInput;
    _Bool _suppressSystemUI;
    UITextInteraction *_interactions;
    int _textInteractionSet;
    UITextInteraction *_externalInteractions;
}

+ (int)_nextGranularityInCycle:(int)arg1;
- (void).cxx_destruct;
- (id)textSelectionView;
- (void)clearGestureRecognizers;
- (id)initWithResponder:(id)arg1;
- (_Bool)shouldEnqueueObserverUpdates;
- (void)didEndScrollingOverflow;
- (void)willStartScrollingOverflow;
- (void)layoutChangedByScrolling:(_Bool)arg1;
- (_Bool)swallowsDoubleTapWithScale:(float)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)hasReplacements;
- (void)scheduleReplacementsForRange:(id)arg1 withOptions:(unsigned int)arg2;
- (id)generatorForRange:(id)arg1 withOptions:(unsigned int)arg2;
- (void)scheduleDictationReplacementsForAlternatives:(id)arg1 range:(id)arg2;
- (id)rangeForTextReplacement:(id)arg1;
- (void)scheduleChineseTransliteration;
- (void)scheduleReplacementsWithOptions:(unsigned int)arg1;
- (void)scheduleReplacements;
- (_Bool)viewCouldBecomeEditable:(id)arg1;
- (void)updateAutoscroll:(id)arg1;
- (void)autoscrollWillNotStart;
- (void)cancelAutoscroll;
- (void)startAutoscroll:(struct CGPoint)arg1;
- (void)endFloatingCursor;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)didEndSelectionInteraction;
- (void)willBeginSelectionInteraction;
- (_Bool)didUseStashedSelection;
- (void)clearStashedSelection;
- (void)stashCurrentSelection;
- (void)resignedFirstResponder;
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;
- (void)rangeSelectionMoved:(struct CGPoint)arg1 withTouchPoint:(struct CGPoint)arg2;
- (void)rangeSelectionCanceled;
- (void)rangeSelectionEnded:(struct CGPoint)arg1;
- (void)rangeSelectionStarted:(struct CGPoint)arg1;
- (void)selectionAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)updateWithMagnifierTerminalPoint:(_Bool)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;
- (void)notifyKeyboardSelectionChanged;
- (void)clearSelection;
- (void)selectAll:(id)arg1;
- (_Bool)shouldSuppressSelectionCommands;
- (void)selectWordWithoutShowingCommands;
- (void)selectWord;
- (void)checkEditabilityAndSetFirstResponderIfNecessary;
- (void)extendSelectionToLoupeOrSetToPoint:(struct CGPoint)arg1;
- (void)extendSelectionToPoint:(struct CGPoint)arg1;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (void)rangedMagnifierWithState:(int)arg1 atPoint:(struct CGPoint)arg2;
- (void)loupeMagnifierWithState:(int)arg1 atPoint:(struct CGPoint)arg2;
- (void)loupeGestureWithState:(int)arg1 atGesturePoint:(CDUnknownBlockType)arg2 shouldCancel:(_Bool *)arg3;
@property(readonly, nonatomic) _Bool willHandoffLoupeMagnifier;
- (void)resetWillHandoffLoupeMagnifier;
- (void)setWillHandoffLoupeMagnifier;
- (void)scrollSelectionToVisible:(_Bool)arg1;
- (void)scrollSelectionToVisible;
- (void)setFirstResponderIfNecessary;
- (void)addGestureRecognizersToView:(id)arg1;
- (Class)loupeInteractionClass;
- (Class)selectionInteractionClass;
- (id)linkInteractionView;
- (void)setGestureRecognizers;
- (void)canBeginDragCursor:(id)arg1;
- (_Bool)useGesturesForEditableContent;
- (void)resetGestureRecognizersForLinkInteraction;
- (void)clearGestureRecognizers:(_Bool)arg1;
- (_Bool)containerIsBrowserView;
- (_Bool)containerAllowsSelectionTintOnly;
- (_Bool)containerAllowsSelection;
- (_Bool)containerIsPlainStyleAtom;
- (_Bool)containerIsAtom;
- (_Bool)containerIsTextField;
@property(readonly, nonatomic) UIFieldEditor *fieldEditor; // @dynamic fieldEditor;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)attach;
- (void)detach;
- (void)detach:(_Bool)arg1;
- (_Bool)isValid;
- (void)activate;
- (void)invalidate;
@property(readonly, nonatomic) _Bool externalTextInput;
@property(nonatomic) struct CGPoint autoscrollUntransformedExtentPoint;
@property(nonatomic) _Bool autoscrolled;
@property(nonatomic) _Bool inGesture;
@property(nonatomic) struct CGPoint loupeGestureEndPoint;
@property(readonly, retain, nonatomic) UIGestureRecognizer *forcePressGesture;
@property(readonly, retain, nonatomic) UILongPressGestureRecognizer *loupeGesture;
@property(readonly, retain, nonatomic) UIGestureRecognizer *doubleTapGesture;
@property(readonly, retain, nonatomic) UITapGestureRecognizer *singleTapGesture;
@property(retain, nonatomic) UITextInteraction *externalInteractions;
@property(readonly, retain, nonatomic) UITextInteraction *interactions;
@property(readonly, nonatomic) UIResponder<UITextInput> *textDocument;
- (id)_selectionView;
- (_Bool)requiresImmediateUpdate;
@property(readonly, nonatomic) UITextSelectionView *selectionView;
- (void)deactivateSelection;
- (void)activateSelection;
- (void)selectionChanged;
- (void)setSuppressSystemUI:(_Bool)arg1;
@property(readonly, nonatomic) UIResponder<UITextInput> *view;
- (id)_scrollable;
- (id)_asText;
@property(nonatomic) _Bool needsGestureUpdate;
- (void)dealloc;
- (id)initWithView:(id)arg1 textInteractionSet:(int)arg2;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
