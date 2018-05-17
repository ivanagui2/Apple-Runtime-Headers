//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "CNContactIconUpdating.h"

@class CALayer, NSImage, NSString;

@interface CNContactSilhouetteView : NSView <CNContactIconUpdating>
{
    NSImage *_placeholderImage;
    CALayer *_silhouetteLayer;
    CALayer *_gradientLayer;
}

+ (id)silhouetteTemplateImage;
+ (id)companyTemplateImageCircle;
+ (id)companyTemplateImageSqare;
+ (id)implicitAnimatedActionsToDisable;
@property(retain) CALayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain) CALayer *silhouetteLayer; // @synthesize silhouetteLayer=_silhouetteLayer;
@property(retain) NSImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
- (void).cxx_destruct;
- (void)setCircular:(BOOL)arg1;
- (void)viewModelDidUpdate:(id)arg1;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
