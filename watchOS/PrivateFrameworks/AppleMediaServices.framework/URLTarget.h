//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface URLTarget : NSObject
{
    unsigned int _applicationState;
    NSString *_bundleId;
    int _defaultIndex;
    NSString *_normalScheme;
    NSString *_secureScheme;
}

+ (id)targetWithBundle:(id)arg1 scheme:(id)arg2 secureScheme:(id)arg3;
@property(retain, nonatomic) NSString *secureScheme; // @synthesize secureScheme=_secureScheme;
@property(retain, nonatomic) NSString *normalScheme; // @synthesize normalScheme=_normalScheme;
@property(nonatomic) int defaultIndex; // @synthesize defaultIndex=_defaultIndex;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(nonatomic) unsigned int applicationState; // @synthesize applicationState=_applicationState;
- (void).cxx_destruct;
- (id)initWithBundle:(id)arg1 scheme:(id)arg2 secureScheme:(id)arg3;

@end
