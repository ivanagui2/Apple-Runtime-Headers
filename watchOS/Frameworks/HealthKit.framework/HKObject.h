//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKDevice, HKSource, HKSourceRevision, NSDate, NSDictionary, NSString, NSUUID;

@interface HKObject : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;
    HKSourceRevision *_sourceRevision;
    HKDevice *_device;
    NSDictionary *_metadata;
    int _provenanceID;
    NSString *_sourceBundleIdentifier;
    double _creationTimestamp;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isConcreteObjectClass;
+ (id)_objectWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(double)arg4;
+ (id)_newDataObjectWithMetadata:(id)arg1 device:(id)arg2 config:(CDUnknownBlockType)arg3;
@property(nonatomic, getter=_creationTimestamp, setter=_setCreationTimestamp:) double creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(copy, nonatomic, getter=_sourceBundleIdentifier, setter=_setSourceBundleIdentifier:) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(readonly) HKDevice *device; // @synthesize device=_device;
@property(readonly) HKSourceRevision *sourceRevision; // @synthesize sourceRevision=_sourceRevision;
- (void).cxx_destruct;
@property(nonatomic, getter=_creationDate, setter=_setCreationDate:) NSDate *creationDate;
- (void)_setDevice:(id)arg1;
- (void)_setSourceRevision:(id)arg1;
- (id)_source;
@property(readonly) HKSource *source;
- (void)_setMetadata:(id)arg1;
@property(readonly, copy) NSDictionary *metadata;
- (void)_setUUID:(id)arg1;
@property(readonly) NSUUID *UUID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (int)_externalSyncObjectCode;
- (id)_valueDescription;
- (id)description;
- (_Bool)_shouldNotifyOnInsert;
- (id)_validateConfigurationAllowingPrivateMetadata:(_Bool)arg1;
- (id)_validateConfiguration;
- (_Bool)prepareForDelivery:(id *)arg1;
- (_Bool)prepareForSaving:(id *)arg1;
- (_Bool)_validateForSavingWithClientEntitlements:(id)arg1 error:(id *)arg2;
- (void)_validateForCreation;
- (id)_copyByArchiving;
- (id)_init;
- (id)init;
- (int)hk_integerValue;

@end

