//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _UIBlurEffectImpl : NSObject
{
}

+ (id)implementationFromCoder:(id)arg1;
- (void)appendDescriptionTo:(id)arg1;
- (_Bool)_needsUpdateForOption:(id)arg1;
- (_Bool)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (id)implementationForUserInterfaceStyle:(long long)arg1;
- (_Bool)canProvideVibrancyEffect;
- (_Bool)invertAutomaticStyle;
- (id)tintColor;
- (long long)style;
- (void)setEffect:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
