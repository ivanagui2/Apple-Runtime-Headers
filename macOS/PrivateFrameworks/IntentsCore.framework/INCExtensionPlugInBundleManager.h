//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface INCExtensionPlugInBundleManager : NSObject
{
    NSMutableDictionary *_intentsSupported;
    NSDictionary *_pluginsPlistDictionary;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (BOOL)_registerBundle:(id)arg1 bundleIdentifier:(id)arg2;
- (BOOL)loadBundleForBundleIdentifier:(id)arg1 wasPrewarmed:(char *)arg2;
- (id)extensionForIntent:(id)arg1;
- (id)init;

@end
