//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ISDNameNumberMapping;

@interface ISDNameNumberProvider : NSObject
{
    ISDNameNumberMapping *_entityMapping;
    ISDNameNumberMapping *_clientMapping;
    BOOL _mapsInitialized;
    BOOL _isValid;
    BOOL _canCreate;
    BOOL _canSave;
    BOOL _irreplaceable;
    BOOL _useRegardless;
    id _basis;
    BOOL _inRefresh;
}

+ (BOOL)syncClientCanCreateMappings;
+ (void)setSyncClientCanCreateMappings:(BOOL)arg1;
+ (void)setProvider:(id)arg1;
+ (void)replaceProvider:(id)arg1;
+ (id)provider;
+ (void)revertToDefault;
+ (id)defaultProvider;
- (void)allowNonPersistentCreation;
- (BOOL)canCreateNewMapping;
- (BOOL)mergeMissingMappingsFrom:(id)arg1;
- (void)saveMappings;
- (void)saveMappingsFor:(id)arg1;
- (BOOL)canSaveMappings;
- (void)reset;
- (void)refresh;
- (id)clientMapping;
- (id)entityMapping;
- (BOOL)foundMappingForNewName:(id)arg1 inMap:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)allMappings;
- (void)makeIrreplaceable;
- (BOOL)isReplaceable;
- (void)invalidate;
- (void)clear;
- (BOOL)isDefaultProvider;
- (void)refreshFromNameNumberMappings:(id)arg1;
- (id)init;

@end
