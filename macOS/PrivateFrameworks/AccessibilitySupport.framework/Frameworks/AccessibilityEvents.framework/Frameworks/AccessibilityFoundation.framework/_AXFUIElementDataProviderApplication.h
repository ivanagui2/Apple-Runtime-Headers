//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilityFoundation/_AXFUIElementDataProviderIPC.h>

@interface _AXFUIElementDataProviderApplication : _AXFUIElementDataProviderIPC
{
    int _applicationProcessIdentifier;
    int _realApplicationProcessIdentifier;
    struct ProcessSerialNumber _applicationProcessSerialNumber;
    struct ProcessSerialNumber _realApplicationProcessSerialNumber;
}

+ (BOOL)_shouldCreateInstanceForApplicationRef:(struct __AXUIElement *)arg1 applicationProcessIdentifier:(int)arg2 applicationProcessSerialNumber:(struct ProcessSerialNumber)arg3 applicationIdentifier:(id)arg4;
+ (struct __AXUIElement *)_validateApplicationRef:(struct __AXUIElement *)arg1 withPID:(int)arg2;
+ (int)_validatePID:(int)arg1 withPSN:(struct ProcessSerialNumber)arg2;
+ (id)_validateIdentifier:(id)arg1 withPSN:(struct ProcessSerialNumber)arg2;
+ (struct ProcessSerialNumber)_validatePSN:(struct ProcessSerialNumber)arg1 withPID:(int)arg2;
+ (int)_validatePID:(int)arg1 withApplicationRef:(struct __AXUIElement *)arg2;
@property(nonatomic) struct ProcessSerialNumber realApplicationProcessSerialNumber; // @synthesize realApplicationProcessSerialNumber=_realApplicationProcessSerialNumber;
@property(nonatomic) int realApplicationProcessIdentifier; // @synthesize realApplicationProcessIdentifier=_realApplicationProcessIdentifier;
@property(nonatomic) struct ProcessSerialNumber applicationProcessSerialNumber; // @synthesize applicationProcessSerialNumber=_applicationProcessSerialNumber;
@property(nonatomic) int applicationProcessIdentifier; // @synthesize applicationProcessIdentifier=_applicationProcessIdentifier;
- (id)applicationElement;
- (id)initWithApplicationRef:(struct __AXUIElement *)arg1 applicationProcessIdentifier:(int)arg2 applicationProcessSerialNumber:(struct ProcessSerialNumber)arg3 applicationIdentifier:(id)arg4;

@end

