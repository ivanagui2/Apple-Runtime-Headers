//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XSCertificateKeychainManager : NSObject
{
    struct OpaqueSecKeychainRef *_tempKeychain;
    struct __CFData *_tempKeychainPasswordData;
}

- (void)unlockKeychain;
- (void)disposeOfTemporaryKeychain;
- (struct OpaqueSecKeychainRef *)temporaryKeychain;
- (void)dealloc;

@end

