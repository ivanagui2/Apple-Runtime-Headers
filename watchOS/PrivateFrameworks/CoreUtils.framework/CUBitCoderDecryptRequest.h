//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface CUBitCoderDecryptRequest : NSObject
{
    NSData *_aad;
    unsigned int _authTagLength;
    NSData *_data;
    NSData *_nonce;
}

@property(copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned int authTagLength; // @synthesize authTagLength=_authTagLength;
@property(copy, nonatomic) NSData *aad; // @synthesize aad=_aad;
- (void).cxx_destruct;

@end
