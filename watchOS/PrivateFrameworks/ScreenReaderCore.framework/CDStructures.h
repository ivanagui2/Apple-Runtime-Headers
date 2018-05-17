//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

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

struct SCRCFingerState {
    unsigned int identifier;
    int xDirection;
    int yDirection;
    struct SCRCMathAverageValue normalizedVelocityPerSample;
    struct SCRCMathAverageValue deltaXPerSample;
    struct SCRCMathAverageValue deltaYPerSample;
    struct SCRCMathAverageValue distancePerSample;
    float distanceTraveledWithInertiaApplied;
    _Bool dragStalled;
    unsigned int type;
    struct CGPoint startTouchPoint;
    struct CGPoint mostRecentTouchPoint;
    struct CGPoint lastDownPoint;
    float orbValue;
    float altitude;
    float azimuth;
};

struct SCRCMathAverageValue {
    unsigned int samples;
    float fifo[50];
    int fifoIndex;
    float sum;
    float average;
    float current;
};

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    int _field1;
    int _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    _Bool _field10;
    struct CGPoint _field11;
    float _field12;
    float _field13;
    float _field14;
    struct CGPoint _field15;
    struct CGPoint _field16;
    struct CGPoint _field17;
    struct CGRect _field18;
    struct CGRect _field19;
    struct CGPoint _field20;
    struct CGPoint _field21;
    double _field22;
} CDStruct_f471ea72;
