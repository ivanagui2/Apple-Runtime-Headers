//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL, SFSafariExtensionViewController, SFSafariPage, SFSafariWindow;

@protocol SFSafariExtensionHandling <NSObject>

@optional
- (void)additionalRequestHeadersForURL:(NSURL *)arg1 completionHandler:(void (^)(NSDictionary *))arg2;
- (SFSafariExtensionViewController *)popoverViewController;
- (void)popoverDidCloseInWindow:(SFSafariWindow *)arg1;
- (void)popoverWillShowInWindow:(SFSafariWindow *)arg1;
- (void)validateContextMenuItemWithCommand:(NSString *)arg1 inPage:(SFSafariPage *)arg2 userInfo:(NSDictionary *)arg3 validationHandler:(void (^)(BOOL, NSString *))arg4;
- (void)contextMenuItemSelectedWithCommand:(NSString *)arg1 inPage:(SFSafariPage *)arg2 userInfo:(NSDictionary *)arg3;
- (void)validateToolbarItemInWindow:(SFSafariWindow *)arg1 validationHandler:(void (^)(BOOL, NSString *))arg2;
- (void)toolbarItemClickedInWindow:(SFSafariWindow *)arg1;
- (void)messageReceivedFromContainingAppWithName:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)messageReceivedWithName:(NSString *)arg1 fromPage:(SFSafariPage *)arg2 userInfo:(NSDictionary *)arg3;
@end

