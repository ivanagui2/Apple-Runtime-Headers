//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SXAction;

@protocol SXActionActivityProvider <NSObject>
- (id <SXActionActivityGroup>)activityGroupForAction:(SXAction *)arg1;

@optional
- (id <SXActionPreviewActivity>)previewActivityForAction:(SXAction *)arg1;
@end
