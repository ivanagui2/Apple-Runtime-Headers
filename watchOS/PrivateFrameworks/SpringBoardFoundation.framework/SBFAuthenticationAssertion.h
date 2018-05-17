//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSString, SBFUserAuthenticationController;

@interface SBFAuthenticationAssertion : NSObject <BSDescriptionProviding>
{
    _Bool _activated;
    _Bool _invalidated;
    int _type;
    NSString *_identifier;
    SBFUserAuthenticationController *_controller;
}

@property(readonly, nonatomic) __weak SBFUserAuthenticationController *controller; // @synthesize controller=_controller;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)invalidate;
- (void)deactivate;
- (void)activate;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @dynamic valid;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)publicDescription;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 type:(int)arg2 withController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
