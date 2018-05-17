//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDDeviceEntity : HDHealthEntity
{
}

+ (id)propertyForSyncProvenance;
+ (id)_codableDeviceWithRow:(struct HDSQLiteRow *)arg1;
+ (id)_deviceWithRow:(struct HDSQLiteRow *)arg1;
+ (id)_propertiesForDevice;
+ (id)_predicateForDevice:(id)arg1;
+ (id)_predicateForDeviceProperty:(id)arg1 withValues:(id)arg2;
+ (id)_predicateForDeviceWithUUID:(id)arg1;
+ (id)_sqlPropertyForPredicateProperty:(id)arg1;
+ (_Bool)_validateCodableDevice:(id)arg1 error:(id *)arg2;
+ (_Bool)_insertCodableDevices:(id)arg1 syncStore:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (id)_insertDeviceWithUUID:(id)arg1 creationDate:(double)arg2 name:(id)arg3 manufacturer:(id)arg4 model:(id)arg5 hardwareVersion:(id)arg6 firmwareVersion:(id)arg7 softwareVersion:(id)arg8 localIdentifier:(id)arg9 UDIDeviceIdentifier:(id)arg10 syncProvenance:(long long)arg11 database:(id)arg12 error:(id *)arg13;
+ (id)_deviceEntityWithDevice:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)_deviceEntitiesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)deviceEntitiesWithProperty:(id)arg1 matchingValues:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (id)deviceEntitiesWithDevice:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)deviceEntityWithUUID:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)deviceEntityWithDevice:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (id)columnsDefinition;
+ (id)databaseTable;
- (id)creationDateInHealthDatabase:(id)arg1 error:(id *)arg2;
- (id)deviceUUIDInHealthDatabase:(id)arg1 error:(id *)arg2;
- (id)deviceUUIDInDatabase:(id)arg1 error:(id *)arg2;
- (id)deviceInHealthDatabase:(id)arg1 error:(id *)arg2;

@end
