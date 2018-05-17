//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"

@class CKRecord, HMFVersion, NSMutableDictionary, NSSet, NSString, NSUUID;

@interface HMDBackingStoreModelObject : HMFObject <HMFLogging>
{
    NSMutableDictionary *_reserved;
    _Bool _bsoDataVersionOverride;
    NSUUID *_uuid;
    NSUUID *_parentUUID;
    id <HMDBackingStoreObjectProtocol> _bsoDelegate;
    NSString *_bsoType;
    HMFVersion *_bsoDataVersion;
    unsigned int _objectChangeType;
    CKRecord *_bsoRecord;
    unsigned long long _bsoLogRowID;
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (id)logCategory;
+ (id)formatValue:(id)arg1;
+ (id)objectFromCloud:(id)arg1 error:(id *)arg2;
+ (id)objectFromData:(id)arg1 encoding:(unsigned int)arg2 record:(id)arg3 error:(id *)arg4;
+ (id)objectFromData:(id)arg1 encoding:(unsigned int)arg2 rowID:(unsigned long long)arg3 error:(id *)arg4;
+ (id)objectFromData:(id)arg1 encoding:(unsigned int)arg2 error:(id *)arg3;
+ (id)objectFromDictionaryData:(id)arg1 error:(id *)arg2;
+ (id)objectFromDictionaryData:(id)arg1 type:(id)arg2 error:(id *)arg3;
+ (Class)genericRepresentation;
+ (id)readonlyBefore;
+ (id)bsoSchemaHash;
+ (id)properties;
@property _Bool bsoDataVersionOverride; // @synthesize bsoDataVersionOverride=_bsoDataVersionOverride;
@property(readonly, nonatomic) CKRecord *bsoRecord; // @synthesize bsoRecord=_bsoRecord;
@property(nonatomic) unsigned int objectChangeType; // @synthesize objectChangeType=_objectChangeType;
@property(readonly, nonatomic) HMFVersion *bsoDataVersion; // @synthesize bsoDataVersion=_bsoDataVersion;
@property(readonly) unsigned long long bsoLogRowID; // @synthesize bsoLogRowID=_bsoLogRowID;
@property(retain, nonatomic) NSString *bsoType; // @synthesize bsoType=_bsoType;
@property(nonatomic) __weak id <HMDBackingStoreObjectProtocol> bsoDelegate; // @synthesize bsoDelegate=_bsoDelegate;
@property(retain, nonatomic) NSUUID *parentUUID; // @synthesize parentUUID=_parentUUID;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)dumpDebug;
- (void)dumpDebug:(id)arg1;
- (void)clearVersionOverride;
- (id)debugString:(_Bool)arg1;
@property(readonly, copy) NSString *description;
- (id)defaultValueForPropertyNamed:(id)arg1 isSet:(_Bool *)arg2;
- (void)setPropertyIfNotNil:(id)arg1 named:(id)arg2;
- (_Bool)diff:(id)arg1 differingFields:(id *)arg2;
- (id)merge:(id)arg1;
- (id)merge:(id)arg1 from:(unsigned int)arg2;
- (_Bool)validForStorage;
- (_Bool)propertyIsAvailable:(id)arg1;
- (_Bool)propertyIsReadOnly:(id)arg1;
@property(readonly, nonatomic, getter=isReplayable) _Bool replayable;
@property(readonly, nonatomic, getter=isGenericRepresentation) _Bool isGenericRepresentation; // @dynamic isGenericRepresentation;
@property(readonly, nonatomic, getter=isReadOnly) _Bool isReadOnly; // @dynamic isReadOnly;
- (_Bool)propertyWasSet:(id)arg1;
- (id)setProperties;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (id)encodeForCloud:(id *)arg1;
- (id)encodeWithEncoding:(unsigned int)arg1 for:(unsigned int)arg2 error:(id *)arg3;
- (id)encodeFor:(unsigned int)arg1 error:(id *)arg2;
- (id)encodeWithEncoding:(unsigned int)arg1 error:(id *)arg2;
- (id)encodeWithError:(id *)arg1;
- (id)encodeAsNSDictionaryFor:(unsigned int)arg1 error:(id *)arg2;
- (id)prepareFor:(unsigned int)arg1;
- (id)validateType:(id)arg1 path:(id)arg2;
- (_Bool)_validateType:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSSet *dependentUUIDs; // @dynamic dependentUUIDs;
- (id)initWithUUID:(id)arg1 parentUUID:(id)arg2;
- (id)initWithUUID:(id)arg1;
- (id)initWithObjectChangeType:(unsigned int)arg1 uuid:(id)arg2 parentUUID:(id)arg3;
- (id)initWithVersion:(id)arg1 changeType:(unsigned int)arg2 uuid:(id)arg3 parentUUID:(id)arg4;
- (id)typeNameForDebug;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
