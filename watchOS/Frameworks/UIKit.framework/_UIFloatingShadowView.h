//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage;

@interface _UIFloatingShadowView : UIView
{
    UIView *_shadowView;
    struct CATransform3D _shadowTransform;
    _Bool _shadowEnabled;
    _Bool __disableOutsetShadowPath;
    float _shadowRadius;
    float _shadowOpacity;
    float _shadowVerticalOffset;
    float _shadowExpansion;
    UIImage *_shadowImage;
    float _cornerRadius;
    struct CGSize _shadowSize;
    struct CGRect _shadowContentsCenter;
}

+ (Class)layerClass;
@property(nonatomic) _Bool _disableOutsetShadowPath; // @synthesize _disableOutsetShadowPath=__disableOutsetShadowPath;
@property(nonatomic) float cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct CGRect shadowContentsCenter; // @synthesize shadowContentsCenter=_shadowContentsCenter;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(nonatomic) float shadowExpansion; // @synthesize shadowExpansion=_shadowExpansion;
@property(nonatomic) float shadowVerticalOffset; // @synthesize shadowVerticalOffset=_shadowVerticalOffset;
@property(nonatomic) float shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(nonatomic) float shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) struct CGSize shadowSize; // @synthesize shadowSize=_shadowSize;
@property(nonatomic, getter=isShadowEnabled) _Bool shadowEnabled; // @synthesize shadowEnabled=_shadowEnabled;
- (void).cxx_destruct;
- (struct CGPath *)_shadowPathForSize:(struct CGSize)arg1 radius:(float)arg2;
- (void)_setShadowImageIfNeeded;
- (void)_updateShadowLayer;
- (void)_layoutShadow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
