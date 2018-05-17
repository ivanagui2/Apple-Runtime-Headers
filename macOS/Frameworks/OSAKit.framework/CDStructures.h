//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct ComponentDescription {
    unsigned int componentType;
    unsigned int componentSubType;
    unsigned int componentManufacturer;
    unsigned int componentFlags;
    unsigned int componentFlagsMask;
};

struct ComponentInstanceRecord {
    long long _field1[1];
};

struct ComponentRecord {
    long long _field1[1];
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _NSStringBuffer {
    unsigned long long _field1;
    unsigned long long _field2;
    id _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned short _field6[32];
    unsigned short _field7;
    unsigned short _field8;
};
