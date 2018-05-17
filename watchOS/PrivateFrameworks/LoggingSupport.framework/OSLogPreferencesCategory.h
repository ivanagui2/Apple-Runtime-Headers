//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, OSLogPreferencesSubsystem;

@interface OSLogPreferencesCategory : NSObject
{
    NSString *_name;
    OSLogPreferencesSubsystem *_subsystem;
}

@property(readonly, nonatomic) OSLogPreferencesSubsystem *subsystem; // @synthesize subsystem=_subsystem;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)reset;
@property(nonatomic) int persistedLevel;
@property(nonatomic) int enabledLevel;
- (int)defaultPersistedLevel;
- (int)defaultEnabledLevel;
@property(readonly, nonatomic) int effectivePersistedLevel;
@property(readonly, nonatomic) int effectiveEnabledLevel;
@property(readonly, nonatomic) _Bool isLocked;
- (id)initWithName:(id)arg1 subsystem:(id)arg2;

@end
