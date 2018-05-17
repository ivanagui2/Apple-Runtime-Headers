//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSSet, NSURL, QLPreviewContext, QLSpotlightSearchableItemInfo;

@protocol QLItemTransformerProtocol <NSObject>
+ (NSSet *)allowedOutputClasses;

@optional
- (id)transformedContentsFromSpotlightSearchableItemInfo:(QLSpotlightSearchableItemInfo *)arg1 context:(QLPreviewContext *)arg2 error:(id *)arg3;
- (id)transformedContentsFromData:(NSData *)arg1 context:(QLPreviewContext *)arg2 error:(id *)arg3;
- (id)transformedContentsFromURL:(NSURL *)arg1 context:(QLPreviewContext *)arg2 error:(id *)arg3;
@end
