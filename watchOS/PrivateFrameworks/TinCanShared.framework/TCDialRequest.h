//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TUDialRequest.h"

@interface TCDialRequest : TUDialRequest
{
    _Bool _remoteUplinkMuted;
    unsigned int _state;
}

@property(nonatomic, getter=isRemoteUplinkMuted) _Bool remoteUplinkMuted; // @synthesize remoteUplinkMuted=_remoteUplinkMuted;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
- (id)URL;
- (id)initWithURL:(id)arg1;

@end
