//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMDIdentityAttesting.h"

@class NSData, NSString;

@interface FMDIdentityAttested : NSObject <FMDIdentityAttesting>
{
    NSData *_attestation;
    NSData *_signature;
    NSString *_sessionIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSData *attestation; // @synthesize attestation=_attestation;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
