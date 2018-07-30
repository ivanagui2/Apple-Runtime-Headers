//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSServiceViewController.h"

#import "PHExtensionServiceViewControllerProtocol.h"

@class NSViewController, NSWindow, PHExtensionHostViewPreferredSizes;

@interface PHExtensionServiceViewController : NSServiceViewController <PHExtensionServiceViewControllerProtocol>
{
    NSWindow *_serviceWindow;
    NSViewController *_extensionViewController;
    PHExtensionHostViewPreferredSizes *_preferredSizes;
}

+ (id)expectedPrincipalObjectProtocol;
+ (Class)expectedExtensionContextClass;
+ (Class)windowClass;
@property(nonatomic) __weak PHExtensionHostViewPreferredSizes *preferredSizes; // @synthesize preferredSizes=_preferredSizes;
@property(nonatomic) __weak NSViewController *extensionViewController; // @synthesize extensionViewController=_extensionViewController;
@property(retain, nonatomic) NSWindow *serviceWindow; // @synthesize serviceWindow=_serviceWindow;
- (void).cxx_destruct;
- (void)didConnectToExtensionContext:(id)arg1;
- (struct CGSize)preferredMaximumSize;
- (struct CGSize)preferredMinimumSize;
- (void)updatePreferredSizesIfNeeeded;
- (BOOL)remoteViewSizeChanged:(struct CGSize)arg1 transaction:(id)arg2;
- (void)setupWithController:(id)arg1;
- (void)connectToContextWithSessionID:(id)arg1 sizeHint:(struct CGSize)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)remoteViewControllerInterface;
- (id)exportedInterface;
- (id)exportedObject;
- (void)invalidate;
- (void)loadView;

@end
