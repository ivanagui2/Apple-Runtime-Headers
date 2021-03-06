//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SiriUIPluginManager : NSObject
{
    NSString *_path;
    NSArray *_domainKeys;
    CDUnknownBlockType _factoryInitializationBlock;
    NSMutableDictionary *_domainKeyDictionary;
}

+ (id)pluginManagerForPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)description;
- (void)_registerBundle:(id)arg1;
- (void)_loadBundles;
- (void)enumerateFactoryInstancesForDomainKey:(id)arg1 groupIdentifier:(id)arg2 classIdentifier:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)initWithPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(CDUnknownBlockType)arg3;

@end

