//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSReceiverPreferences, NSSet;

@interface CSRecieverState : NSObject
{
    int _notifyToken;
    CSReceiverPreferences *_receiverPreferences;
    NSSet *_enabledBundleIdentifiers;
    NSSet *_disabledBundleIdentifiers;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(readonly, nonatomic) NSSet *disabledBundleIdentifiers; // @synthesize disabledBundleIdentifiers=_disabledBundleIdentifiers;
@property(readonly, nonatomic) NSSet *enabledBundleIdentifiers; // @synthesize enabledBundleIdentifiers=_enabledBundleIdentifiers;
@property(readonly, nonatomic) CSReceiverPreferences *receiverPreferences; // @synthesize receiverPreferences=_receiverPreferences;
- (void).cxx_destruct;
- (BOOL)checkBundleIdentifier:(id)arg1;
- (void)_updateFromPreferences;
- (id)init;

@end

