//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIPreviewPresentationEffectView : UIView
{
    _Bool _shouldRasterizeForTransition;
    UIColor *_shadowColor;
}

@property(nonatomic) _Bool shouldRasterizeForTransition; // @synthesize shouldRasterizeForTransition=_shouldRasterizeForTransition;
@property(copy, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
- (void).cxx_destruct;
@property(nonatomic) double shadowRadius;
@property(nonatomic) struct CGSize shadowOffset;
@property(nonatomic) double shadowAlpha;
@property(nonatomic) double cornerRadius;
@property(nonatomic) double blurRadius; // @dynamic blurRadius;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
