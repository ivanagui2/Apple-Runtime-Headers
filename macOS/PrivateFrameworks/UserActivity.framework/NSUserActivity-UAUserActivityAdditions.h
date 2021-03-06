//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreServices/NSUserActivity.h>

@class NSUUID;

@interface NSUserActivity (UAUserActivityAdditions)
+ (BOOL)_registerAsProxyForApplication:(int)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)_finishUserInfoUpdate;
- (unsigned long long)_beginUserInfoUpdate:(id)arg1;
@property(readonly) unsigned long long _userInfoChangeCount;
- (id)_copyWithNewUUID;
@property(readonly, copy) NSUUID *_originalUniqueIdentifier;
@end

