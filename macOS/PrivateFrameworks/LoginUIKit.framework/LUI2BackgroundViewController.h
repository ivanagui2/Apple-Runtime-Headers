//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoginUIKit/LUI2ViewController.h>

@class CAGradientLayer, CALayer, DPRemoteDesktopPicture, NSImage;

@interface LUI2BackgroundViewController : LUI2ViewController
{
    BOOL _useDesktopLayer;
    id _target;
    SEL _action;
    CALayer *_imageLayer;
    CALayer *_darkenSourceOver;
    CALayer *_lightenSourceOver;
    CAGradientLayer *_gradient;
    DPRemoteDesktopPicture *_remoteDesktopPicture;
    double _remoteDesktopPictureScale;
}

@property double remoteDesktopPictureScale; // @synthesize remoteDesktopPictureScale=_remoteDesktopPictureScale;
@property(retain) DPRemoteDesktopPicture *remoteDesktopPicture; // @synthesize remoteDesktopPicture=_remoteDesktopPicture;
@property BOOL useDesktopLayer; // @synthesize useDesktopLayer=_useDesktopLayer;
@property(retain) CAGradientLayer *gradient; // @synthesize gradient=_gradient;
@property(retain) CALayer *lightenSourceOver; // @synthesize lightenSourceOver=_lightenSourceOver;
@property(retain) CALayer *darkenSourceOver; // @synthesize darkenSourceOver=_darkenSourceOver;
@property(retain) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property SEL action; // @synthesize action=_action;
@property id target; // @synthesize target=_target;
- (void)dealloc;
- (void)viewDidLoad;
- (void)mouseUp:(id)arg1;
- (void)viewWillLayout;
@property(retain) NSImage *image;
@property BOOL usesDesktopLayer;
- (void)_fadeInLayer:(id)arg1;
- (void)saveImage:(id)arg1;
- (void)_updateWindow;
- (void)_updateDesktopPictureLayerForScreen:(id)arg1;
- (void)_darkeningLayersSetHidden:(BOOL)arg1;
- (void)_companionPressed:(id)arg1;
- (void)_initImageLayer;
- (id)_backgroundColor;

@end
