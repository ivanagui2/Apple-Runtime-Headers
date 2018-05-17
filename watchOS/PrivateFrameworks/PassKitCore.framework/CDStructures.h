//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    float _field13;
    float _field14;
    float _field15;
    float _field16;
};

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct CLLocationCoordinate2D {
    double _field1;
    double _field2;
};

struct PKEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    _Bool _field2;
} CDStruct_3d581f42;

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

// Ambiguous groups
typedef struct {
    unsigned int amount:1;
    unsigned int type:1;
} CDStruct_9fb36b4c;

typedef struct {
    unsigned int status:1;
} CDStruct_47fe53f2;
