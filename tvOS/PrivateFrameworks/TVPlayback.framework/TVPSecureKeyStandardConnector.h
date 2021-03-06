//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVPlayback/TVPSecureKeyStandardLoaderConnectionHandling-Protocol.h>
#import <TVPlayback/TVPSecureKeyStandardLoaderRequestGenerating-Protocol.h>

@class NSString;

@interface TVPSecureKeyStandardConnector : NSObject <TVPSecureKeyStandardLoaderRequestGenerating, TVPSecureKeyStandardLoaderConnectionHandling>
{
}

- (void)secureKeyStandardLoader:(id)arg1 sendAsynchronousRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isStoreDomainURL:(id)arg1;
- (id)secureKeyStandardLoader:(id)arg1 requestForPostingData:(id)arg2 toURL:(id)arg3;
- (id)secureKeyStandardLoader:(id)arg1 requestForFetchingDataFromURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

