//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSURL, TVPSecureKeyStandardLoader;

@protocol TVPSecureKeyStandardLoaderRequestGenerating <NSObject>
- (id)secureKeyStandardLoader:(TVPSecureKeyStandardLoader *)arg1 requestForPostingData:(NSData *)arg2 toURL:(NSURL *)arg3;
- (id)secureKeyStandardLoader:(TVPSecureKeyStandardLoader *)arg1 requestForFetchingDataFromURL:(NSURL *)arg2;
@end
