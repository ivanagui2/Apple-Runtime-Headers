//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _HKDaemonPreferences : NSObject
{
}

+ (_Bool)_setPreferenceValue:(void *)arg1 forKey:(id)arg2;
+ (id)_safePreferenceForKey:(id)arg1 expectedReturnClass:(Class)arg2;
+ (_Bool)_boolValueForKey:(id)arg1;
+ (void)synchronizePreferencesWithWatch:(id)arg1;
+ (_Bool)setValue:(id)arg1 forKey:(id)arg2;
+ (id)valueForKey:(id)arg1;
+ (_Bool)shouldGenerateDemoData;
+ (_Bool)isStoreDemoModeSet;
+ (_Bool)isGenerateDemoDataSet;
+ (_Bool)usingDemoDataDatabase;

@end

