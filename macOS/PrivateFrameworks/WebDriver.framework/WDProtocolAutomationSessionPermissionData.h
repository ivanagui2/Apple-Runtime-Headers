//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RWIProtocolJSONObject.h"

@interface WDProtocolAutomationSessionPermissionData : RWIProtocolJSONObject
{
}

@property(nonatomic) BOOL value;
@property(nonatomic) long long permission;
- (id)initWithPermission:(long long)arg1 value:(BOOL)arg2;
- (id)initWithProtocolObject:(id)arg1;
- (id)initWithPayload:(id)arg1;

@end
