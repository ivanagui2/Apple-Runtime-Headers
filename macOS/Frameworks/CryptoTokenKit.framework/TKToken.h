//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TKTokenDriver, TKTokenKeychainContents;

@interface TKToken : NSObject
{
    TKTokenDriver *_tokenDriver;
    id <TKTokenDelegate> _delegate;
    TKTokenKeychainContents *_keychainContents;
    NSString *_tokenID;
}

+ (id)encodedObjectID:(id)arg1;
@property(readonly) NSString *tokenID; // @synthesize tokenID=_tokenID;
@property(retain) TKTokenKeychainContents *keychainContents; // @synthesize keychainContents=_keychainContents;
@property __weak id <TKTokenDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) TKTokenDriver *tokenDriver; // @synthesize tokenDriver=_tokenDriver;
- (void).cxx_destruct;
@property(readonly) BOOL valid;
- (void)terminate;
- (id)decodedObjectID:(id)arg1 error:(id *)arg2;
- (id)initWithTokenDriver:(id)arg1 instanceID:(id)arg2;
- (id)description;

@end
