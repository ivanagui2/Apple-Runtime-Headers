//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol SFSharingExtensionWebProcessController <NSObject>
- (void)finalizeJavaScriptForSharingExtension:(NSString *)arg1 arguments:(NSDictionary *)arg2;
- (void)evaluateJavaScriptForSharingExtension:(NSString *)arg1 javaScript:(NSString *)arg2 extraArguments:(NSDictionary *)arg3 completionHandler:(void (^)(NSDictionary *))arg4;
@end
