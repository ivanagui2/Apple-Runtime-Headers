//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMKTextDocumentTraits : NSObject
{
    unsigned long long _autoCapitalizationType;
    BOOL _autoPeriodEnabled;
    BOOL _secureTextEntry;
}

@property(readonly, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(readonly, nonatomic, getter=isAutoPeriodEnabled) BOOL autoPeriodEnabled; // @synthesize autoPeriodEnabled=_autoPeriodEnabled;
@property(readonly, nonatomic) unsigned long long autoCapitalizationType; // @synthesize autoCapitalizationType=_autoCapitalizationType;
- (id)initWithAutoCapitalizationType:(unsigned long long)arg1 autoPeriodEnabled:(BOOL)arg2 secureTextEntry:(BOOL)arg3;
- (id)init;

@end
