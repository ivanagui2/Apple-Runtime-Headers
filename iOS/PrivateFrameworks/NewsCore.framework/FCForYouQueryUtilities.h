//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FCForYouQueryUtilities : NSObject
{
}

+ (id)_filterTagsForQuerying:(id)arg1 withMutedTagIDs:(id)arg2;
+ (id)feedRequestsForTags:(id)arg1 tagBinProvider:(CDUnknownBlockType)arg2 hiddenFeedIDs:(id)arg3 purchasedTagIDs:(id)arg4 configuration:(id)arg5 maxCount:(unsigned long long)arg6 tagIDFeedRangeProvider:(CDUnknownBlockType)arg7 isRunningPPT:(_Bool)arg8;
+ (void)fetchTagsForQueryingWithSubscribedTagIDs:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 configuration:(id)arg4 contentContext:(id)arg5 fallbackToPresubscribedTagIDs:(_Bool)arg6 qualityOfService:(long long)arg7 completionHandler:(CDUnknownBlockType)arg8;
+ (void)fetchTagsForQueryingWithSubscribedTags:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 configuration:(id)arg4 contentContext:(id)arg5 fallbackToPresubscribedTagIDs:(_Bool)arg6 qualityOfService:(long long)arg7 completionHandler:(CDUnknownBlockType)arg8;

@end
