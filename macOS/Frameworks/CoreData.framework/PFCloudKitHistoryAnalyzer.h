//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecordZone;

__attribute__((visibility("hidden")))
@interface PFCloudKitHistoryAnalyzer : NSObject
{
    CKRecordZone *_zone;
}

+ (BOOL)isPrivateTransaction:(id)arg1;
- (id)newAnalyzerContextForStore:(id)arg1 sinceLastHistoryToken:(id)arg2 inManagedObjectContext:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)initWithZone:(id)arg1;

@end

