//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SecurityFoundation/_SFKey.h>

@class _SFSymmetricKeySpecifier;

@interface _SFSymmetricKey : _SFKey
{
    id _symmetricKeyInternal;
}

+ (Class)_attributesClass;
- (void).cxx_destruct;
- (id)_keyData;
- (id)keyData;
- (id)initWithData:(id)arg1 specifier:(id)arg2 error:(id *)arg3;
- (id)initRandomKeyWithSpecifier:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) _SFSymmetricKeySpecifier *keySpecifier; // @dynamic keySpecifier;

@end

