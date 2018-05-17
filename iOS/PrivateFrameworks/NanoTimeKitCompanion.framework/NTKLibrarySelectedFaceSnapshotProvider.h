//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NTKFaceCollectionObserver.h"
#import "NTKFaceObserver.h"

@class NSObject<OS_dispatch_queue>, NSString, NTKFace, NTKFaceCollection;

@interface NTKLibrarySelectedFaceSnapshotProvider : NSObject <NTKFaceCollectionObserver, NTKFaceObserver>
{
    NTKFaceCollection *_libraryCollection;
    NTKFace *_selectedFace;
    NSString *_snapshotKey;
    NSObject<OS_dispatch_queue> *_snapshotRequestsQueue;
    _Bool _resumedQueue;
    id <NTKLibrarySelectedFaceSnapshotProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <NTKLibrarySelectedFaceSnapshotProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)snapshotSelectedFaceWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleFaceChange:(id)arg1;
- (void)_updateSelectedFaceAndSnapshotKey;
- (void)_notifyIfSnapshotAvailable;
- (void)_handleSnapshotChangedNotification:(id)arg1;
- (void)faceResourceDirectoryDidChange:(id)arg1;
- (void)faceConfigurationDidChange:(id)arg1;
- (void)faceCollection:(id)arg1 didSelectFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollectionDidLoad:(id)arg1;
- (id)snapshotImage;
- (void)dealloc;
- (id)initWithDeviceUUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
