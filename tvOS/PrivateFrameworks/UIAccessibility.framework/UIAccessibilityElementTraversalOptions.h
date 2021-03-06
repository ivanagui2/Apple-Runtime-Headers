//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UIAccessibilityElementTraversalOptions : NSObject
{
    _Bool _shouldReturnScannerGroups;
    _Bool _shouldOnlyIncludeElementsWithVisibleFrame;
    _Bool _shouldIncludeKeyboardObscuredElements;
    _Bool _shouldUseAllSubviews;
    _Bool _includeHiddenViews;
    _Bool _includeWindowlessViews;
    _Bool _sorted;
    _Bool _ignoreObscuresScreen;
    _Bool _includeDirectDescendantsOnly;
    _Bool _includeAncestorsOfSelfInSiblingMatch;
    _Bool _forSpeakScreen;
    _Bool _shouldIncludeStatusBarWindow;
    long long _direction;
    CDUnknownBlockType _leafNodePredicate;
}

+ (id)defaultSpeakScreenOptions;
+ (id)defaultSwitchControlOptions;
+ (id)voiceOverOptionsIncludingElementsFromOpaqueProviders:(_Bool)arg1;
+ (id)defaultVoiceOverOptions;
+ (id)options;
@property(nonatomic) _Bool shouldIncludeStatusBarWindow; // @synthesize shouldIncludeStatusBarWindow=_shouldIncludeStatusBarWindow;
@property(nonatomic) _Bool forSpeakScreen; // @synthesize forSpeakScreen=_forSpeakScreen;
@property(nonatomic) _Bool includeAncestorsOfSelfInSiblingMatch; // @synthesize includeAncestorsOfSelfInSiblingMatch=_includeAncestorsOfSelfInSiblingMatch;
@property(nonatomic) _Bool includeDirectDescendantsOnly; // @synthesize includeDirectDescendantsOnly=_includeDirectDescendantsOnly;
@property(nonatomic) _Bool ignoreObscuresScreen; // @synthesize ignoreObscuresScreen=_ignoreObscuresScreen;
@property(nonatomic) _Bool sorted; // @synthesize sorted=_sorted;
@property(nonatomic) _Bool includeWindowlessViews; // @synthesize includeWindowlessViews=_includeWindowlessViews;
@property(nonatomic) _Bool includeHiddenViews; // @synthesize includeHiddenViews=_includeHiddenViews;
@property(nonatomic) _Bool shouldUseAllSubviews; // @synthesize shouldUseAllSubviews=_shouldUseAllSubviews;
@property(nonatomic) _Bool shouldIncludeKeyboardObscuredElements; // @synthesize shouldIncludeKeyboardObscuredElements=_shouldIncludeKeyboardObscuredElements;
@property(nonatomic) _Bool shouldOnlyIncludeElementsWithVisibleFrame; // @synthesize shouldOnlyIncludeElementsWithVisibleFrame=_shouldOnlyIncludeElementsWithVisibleFrame;
@property(copy, nonatomic) CDUnknownBlockType leafNodePredicate; // @synthesize leafNodePredicate=_leafNodePredicate;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) _Bool shouldReturnScannerGroups; // @synthesize shouldReturnScannerGroups=_shouldReturnScannerGroups;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

