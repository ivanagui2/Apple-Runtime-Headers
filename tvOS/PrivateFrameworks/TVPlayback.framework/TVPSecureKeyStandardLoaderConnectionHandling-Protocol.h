//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TVPSecureKeyStandardLoader;

@protocol TVPSecureKeyStandardLoaderConnectionHandling <NSObject>
- (void)secureKeyStandardLoader:(TVPSecureKeyStandardLoader *)arg1 sendAsynchronousRequest:(id)arg2 completionHandler:(void (^)(NSData *, NSURLResponse *, NSError *))arg3;
@end
