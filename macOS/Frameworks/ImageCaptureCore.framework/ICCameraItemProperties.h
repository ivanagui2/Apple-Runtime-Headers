//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICCameraDevice, ICCameraFolder, NSMutableDictionary, NSString;

@interface ICCameraItemProperties : NSObject
{
    ICCameraDevice *_device;
    ICCameraFolder *_parentFolder;
    unsigned long long _objectID;
    unsigned long long _parentID;
    unsigned long long _ownerID;
    unsigned long long _twinID;
    NSString *_name;
    NSString *_UTI;
    BOOL _locked;
    BOOL _inTemporaryStore;
    NSMutableDictionary *_userData;
    unsigned int _ptpObjectHandle;
    BOOL _addedAfterContentCatalogCompleted;
    id _userObject;
}

@property(retain) id userObject; // @synthesize userObject=_userObject;
@property(getter=wasAddedAfterContentCatalogCompleted) BOOL addedAfterContentCatalogCompleted; // @synthesize addedAfterContentCatalogCompleted=_addedAfterContentCatalogCompleted;
@property unsigned int ptpObjectHandle; // @synthesize ptpObjectHandle=_ptpObjectHandle;
@property(retain) NSMutableDictionary *userData; // @synthesize userData=_userData;
@property(getter=isInTemporaryStore) BOOL inTemporaryStore; // @synthesize inTemporaryStore=_inTemporaryStore;
@property(getter=isLocked) BOOL locked; // @synthesize locked=_locked;
@property NSString *UTI; // @synthesize UTI=_UTI;
@property(retain) NSString *name; // @synthesize name=_name;
@property unsigned long long twinID; // @synthesize twinID=_twinID;
@property unsigned long long ownerID; // @synthesize ownerID=_ownerID;
@property unsigned long long parentID; // @synthesize parentID=_parentID;
@property unsigned long long objectID; // @synthesize objectID=_objectID;
@property ICCameraFolder *parentFolder; // @synthesize parentFolder=_parentFolder;
@property ICCameraDevice *device; // @synthesize device=_device;
- (void)finalize;
- (void)dealloc;
- (void)removeDeviceAssignment;
- (void)removeParentAssignment;

@end
