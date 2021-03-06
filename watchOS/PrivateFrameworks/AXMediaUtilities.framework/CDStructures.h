//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    float a;
    float b;
    float c;
    float d;
    float tx;
    float ty;
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

struct CGVector {
    float _field1;
    float _field2;
};

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct mach_task_basic_info {
    unsigned long long virtual_size;
    unsigned long long resident_size;
    unsigned long long resident_size_max;
    struct time_value user_time;
    struct time_value system_time;
    int policy;
    int suspend_count;
};

struct task_vm_info {
    unsigned long long virtual_size;
    int region_count;
    int page_size;
    unsigned long long resident_size;
    unsigned long long resident_size_peak;
    unsigned long long device;
    unsigned long long device_peak;
    unsigned long long internal;
    unsigned long long internal_peak;
    unsigned long long external;
    unsigned long long external_peak;
    unsigned long long reusable;
    unsigned long long reusable_peak;
    unsigned long long purgeable_volatile_pmap;
    unsigned long long purgeable_volatile_resident;
    unsigned long long purgeable_volatile_virtual;
    unsigned long long compressed;
    unsigned long long compressed_peak;
    unsigned long long compressed_lifetime;
    unsigned long long phys_footprint;
    unsigned long long min_address;
    unsigned long long max_address;
};

struct time_value {
    int seconds;
    int microseconds;
};

#pragma mark Typedef'd Structures

typedef struct {
    struct {
        int location;
        int length;
    } range;
    unsigned long attributes;
} CDStruct_7f2bddd5;

