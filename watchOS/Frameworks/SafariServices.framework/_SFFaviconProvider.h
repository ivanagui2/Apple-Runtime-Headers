//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSFaviconProvider.h"

@class NSCache;

__attribute__((visibility("hidden")))
@interface _SFFaviconProvider : WBSFaviconProvider
{
    NSCache *_monogramTitleToImageCache;
}

- (void).cxx_destruct;
- (id)fallbackIconForRequest:(id)arg1;
- (id)initWithPersistenceBaseURL:(id)arg1 persistenceName:(id)arg2 preferredIconSize:(struct CGSize)arg3 atScale:(float)arg4 allScales:(id)arg5 isReadOnly:(_Bool)arg6 shouldCheckIntegrityWhenOpeningDatabaseBlock:(CDUnknownBlockType)arg7;

@end
