//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDSPathFilterGenerator, NSMutableSet, NSSet, NSString;

@interface TMPathFilterGenerator : NSObject
{
    unsigned int _baseRuleSet;
    NSString *_mountPoint;
    MDSPathFilterGenerator *_baseFilterGenerator;
    MDSPathFilterGenerator *_customExclusionsFilterGenerator;
    NSMutableSet *_stickyExclusionPaths;
}

+ (id)_extensionMapForRuleSet:(unsigned int)arg1;
@property(readonly) NSSet *stickyExclusionPaths; // @synthesize stickyExclusionPaths=_stickyExclusionPaths;
@property(readonly) NSString *mountPoint; // @synthesize mountPoint=_mountPoint;
@property(readonly) unsigned int baseRuleSet; // @synthesize baseRuleSet=_baseRuleSet;
- (BOOL)_canExcludePath:(id)arg1;
- (id)_rerootPath:(id)arg1;
- (void)_addCustomExclusionForPath:(id)arg1;
- (void)addStickyExclusionForPath:(id)arg1;
- (void)addExclusionForPath:(id)arg1;
- (void)addRulesForUserHome:(id)arg1;
- (void)addUserLibraryMailRealm:(id)arg1;
- (id)_copyCompiledFilterGenerator:(id)arg1;
- (id)copyCustomExclusionsPathFilter;
- (id)copyBasePathFilter;
- (id)_customExclusionsFilterGenerator;
- (void)dealloc;
- (id)initWithBaseRuleSet:(unsigned int)arg1 forMountPoint:(id)arg2;

@end

