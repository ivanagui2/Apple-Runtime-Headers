//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VTVoiceProfileMigration : NSObject
{
}

+ (void)updateVoiceProfileVersionFileForLanguageCode:(id)arg1;
+ (BOOL)migrateVoiceProfileToVersion:(unsigned long long)arg1 withAnalyzer:(id)arg2 forLanguageCode:(id)arg3;
+ (BOOL)checkIfMigrationNecessaryForCompatibilityVersion:(unsigned long long)arg1 forLanguageCode:(id)arg2;
+ (unsigned long long)getCurrentVoiceProfileVersionForLanguageCode:(id)arg1;

@end

