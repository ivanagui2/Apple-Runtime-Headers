//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ACDEClient/ACMMessage.h>

#import "ACMBaseAuthenticationRequest.h"

@class NSNumber, NSString;

@interface ACMBaseAuthenticationRequestImpl : ACMMessage <ACMBaseAuthenticationRequest>
{
}


// Remaining properties
@property(retain, nonatomic) NSNumber *appID; // @dynamic appID;
@property(retain, nonatomic) NSString *appIDKey; // @dynamic appIDKey;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *realm; // @dynamic realm;
@property(retain, nonatomic) NSNumber *serverResponseTimeout; // @dynamic serverResponseTimeout;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;
@end
