//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TVHKContributorImageLoadOperation, TVHKContributorImageLoadParams;

@protocol TVHKContributorImageLoadOperationDelegate <NSObject>
- (void)operation:(TVHKContributorImageLoadOperation *)arg1 templateImageURLStringForParams:(TVHKContributorImageLoadParams *)arg2 withCompletionHandler:(void (^)(NSString *, NSError *))arg3;
@end
