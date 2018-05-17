//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIBarAppearanceStorage.h>

@class NSDictionary, NSMutableDictionary, NSNumber, NSString, UIImage, _UIBarButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UINavigationBarAppearanceStorage : _UIBarAppearanceStorage
{
    NSDictionary *textAttributes;
    NSMutableDictionary *titleVerticalAdjustmentsForBarMetrics;
    UIImage *shadowImage;
    _Bool hidesShadow;
    int barMetrics;
    UIImage *backIndicatorImage;
    UIImage *backIndicatorTransitionMaskImage;
    NSNumber *backIndicatorLeftMargin;
    _Bool reversesShadowOffset;
    _UIBarButtonItemAppearanceStorage *buttonAppearanceStorage;
    _Bool _deferShadowToSearchBar;
    int defaultBarMetrics;
    int activeBarMetrics;
    NSString *_backdropViewGroupName;
}

+ (int)typicalBarPosition;
@property(retain, nonatomic) NSString *backdropViewGroupName; // @synthesize backdropViewGroupName=_backdropViewGroupName;
@property(nonatomic) _Bool deferShadowToSearchBar; // @synthesize deferShadowToSearchBar=_deferShadowToSearchBar;
@property(retain, nonatomic) NSNumber *backIndicatorLeftMargin; // @synthesize backIndicatorLeftMargin;
@property(retain, nonatomic) UIImage *backIndicatorTransitionMaskImage; // @synthesize backIndicatorTransitionMaskImage;
@property(retain, nonatomic) UIImage *backIndicatorImage; // @synthesize backIndicatorImage;
@property(nonatomic) int activeBarMetrics; // @synthesize activeBarMetrics;
@property(nonatomic) int defaultBarMetrics; // @synthesize defaultBarMetrics;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage;
@property(nonatomic) _Bool reversesShadowOffset; // @synthesize reversesShadowOffset;
@property(copy, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes;
@property(nonatomic) _Bool hidesShadow; // @synthesize hidesShadow;
- (void).cxx_destruct;
- (id)representativeImageForIdiom:(int)arg1;
@property(readonly, nonatomic) _UIBarButtonItemAppearanceStorage *barButtonAppearanceStorage;
@property(readonly, nonatomic) _UIBarButtonItemAppearanceStorage *_barButtonAppearanceStorage;
- (float)titleVerticalAdjustmentForBarMetrics:(int)arg1;
- (void)setTitleVerticalAdjustment:(float)arg1 forBarMetrics:(int)arg2;
@property(readonly, nonatomic) UIImage *miniPromptBackgroundImage;
@property(readonly, nonatomic) UIImage *promptBackgroundImage;
@property(readonly, nonatomic) UIImage *miniBackgroundImage;
@property(readonly, nonatomic) UIImage *backgroundImage;

@end
