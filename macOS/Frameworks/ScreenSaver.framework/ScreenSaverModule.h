//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSBundle, NSString;

@interface ScreenSaverModule : NSObject <NSCopying>
{
    NSString *_moduleName;
    NSString *_displayName;
    NSString *_path;
    NSBundle *_bundle;
    id _representedObject;
    int _type;
    BOOL _enabled;
    BOOL _archCompatible;
    BOOL _requiresGraphicsAcceleration;
}

+ (id)defaultModuleName;
+ (id)floatingMessageModuleWithMessage:(id)arg1;
+ (id)randomModule;
+ (id)defaultModule;
+ (id)moduleFromLegacyDefaults:(id)arg1;
+ (id)moduleWithDictionary:(id)arg1;
+ (id)moduleWithName:(id)arg1;
+ (id)moduleWithPath:(id)arg1;
+ (id)localizedSaverNameForPath:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (long long)caseInsensitiveCompare:(id)arg1;
- (long long)compare:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
- (BOOL)canRunAtLoginWindow;
- (BOOL)signedByApple;
- (id)saverPath;
- (BOOL)isCompatibleWithCurrentArch;
- (void)setPath:(id)arg1;
- (id)path;
- (id)bundle;
- (id)bundleID;
- (id)dictionaryRepresentation;
- (void)setDisplayName:(id)arg1;
- (id)crashReporterString;
- (id)thumbnail;
- (BOOL)needsAnimationTimer;
- (id)displayName;
- (id)defaultsName;
- (void)setName:(id)arg1;
- (id)name;
- (void)setRequiresGraphicsAcceleration:(BOOL)arg1;
- (BOOL)requiresGraphicsAcceleration;
- (BOOL)isQC;
- (BOOL)isScreenSaver;
- (void)addMessageTracerEntry;
- (BOOL)is32bitOnly;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end
