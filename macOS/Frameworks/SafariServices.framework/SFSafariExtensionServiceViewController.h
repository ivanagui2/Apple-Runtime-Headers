//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSServiceViewController.h"

#import "SFSafariRemoteViewProtocol.h"

@class NSWindow, SFSafariExtensionContext;

@interface SFSafariExtensionServiceViewController : NSServiceViewController <SFSafariRemoteViewProtocol>
{
    NSWindow *_window;
    SFSafariExtensionContext *_extensionContext;
}

@property(nonatomic) __weak SFSafariExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
- (void).cxx_destruct;
- (void)_connectChildView;
- (void)invalidate;
- (void)connectToContextWithSessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)exportedInterface;
- (void)loadView;

@end
