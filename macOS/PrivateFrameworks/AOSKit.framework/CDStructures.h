//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AOSCallbackInfo {
    long long _field1;
    CDUnknownFunctionPointerType _field2;
    void *_field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownBlockType _field7;
    id _field8;
};

struct AOSTransactionC {
    Class _field1;
    unsigned char _field2;
    unsigned char _field3;
    void *_field4;
    struct __CFError *_field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownBlockType _field7;
    id _field8;
    void *_field9;
    id _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
};
