//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKNavigationController.h>

#import "PKAddPassesCardStackViewControllerDelegate.h"
#import "PKServiceAddPassesViewControllerProtocol.h"

@class NSString, PKAddPassesCardStackViewController;

@interface PKServiceAddPassesViewController : PKNavigationController <PKAddPassesCardStackViewControllerDelegate, PKServiceAddPassesViewControllerProtocol>
{
    struct CGSize _screenSize;
    float _screenScale;
    _Bool _placeholderViewControllerDidCancel;
    PKAddPassesCardStackViewController *_cardStackViewController;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
+ (_Bool)_preventsAppearanceProxyCustomization;
- (void).cxx_destruct;
- (void)resetBrightness;
- (void)evaluateBrightness;
- (void)ingestPassesWithData:(id)arg1 fromPresentationSource:(unsigned int)arg2;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize)arg1 scale:(float)arg2;
- (void)addPassesCardStackViewController:(id)arg1 didCancelAddingPasses:(id)arg2;
- (void)addPassesCardStackViewController:(id)arg1 didFinishAddingPasses:(id)arg2;
- (int)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (unsigned int)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
