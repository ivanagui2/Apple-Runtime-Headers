//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NTKFace;

@protocol NTKFaceSnapshotServer <NSObject>
- (void)performAfterCompletingCurrentlyPendingSnapshots:(void (^)(void))arg1;
- (void)snapshotFace:(NTKFace *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(UIImage *))arg3;
- (void)requestSnapshotOfFace:(NTKFace *)arg1;
- (void)createFaceForPerformanceTesting:(long long)arg1;
- (void)updateAllSnapshots;
- (void)registerForUpdates;
@end
