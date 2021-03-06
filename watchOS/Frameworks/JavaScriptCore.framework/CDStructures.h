//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AuxiliaryBarrier<JSC::Butterfly *> {
    struct Butterfly *_field1;
};

struct Butterfly;

struct CGPoint {
    float _field1;
    float _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    float _field1;
    float _field2;
};

struct CallbackData {
    struct CallbackData *_field1;
    id _field2;
    id _field3;
    struct OpaqueJSValue *_field4;
    struct OpaqueJSValue *_field5;
    unsigned int _field6;
    struct OpaqueJSValue **_field7;
    id _field8;
};

struct InferredTypeTable;

struct InlineWatchpointSet {
    unsigned int _field1;
};

struct JSCell;

struct JSGlobalObject;

struct JSLock;

struct JSObject {
    struct Structure *_field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    struct AuxiliaryBarrier<JSC::Butterfly *> _field6;
    unsigned int _field7;
};

struct JSValue {
    union EncodedValueDescriptor u;
};

struct JSWeakValue {
    int m_tag;
    union WeakValueUnion m_value;
};

struct NoLock;

struct OpaqueJSValue;

struct Poisoned<WTF::Poison<&JSC::g_GlobalDataPoison>, const JSC::ClassInfo *, void> {
    unsigned int _field1;
};

struct PropertyTable;

struct RefPtr<JSC::JSLock, WTF::DumbPtrTraits<JSC::JSLock>> {
    struct JSLock *m_ptr;
};

struct RefPtr<WTF::UniquedStringImpl, WTF::DumbPtrTraits<WTF::UniquedStringImpl>> {
    struct UniquedStringImpl *_field1;
};

struct Strong<JSC::JSObject> {
    struct JSValue *m_slot;
};

struct Structure {
    struct Structure *_field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    struct StructureIDBlob _field6;
    unsigned short _field7;
    unsigned char _field8;
    struct NoLock _field9;
    unsigned int _field10;
    struct WriteBarrier<JSC::JSGlobalObject, WTF::DumbPtrTraits<JSC::JSGlobalObject>> _field11;
    struct WriteBarrier<JSC::Unknown, WTF::DumbValueTraits<JSC::Unknown>> _field12;
    struct WriteBarrier<JSC::StructureChain, WTF::DumbPtrTraits<JSC::StructureChain>> _field13;
    struct WriteBarrier<JSC::JSCell, WTF::DumbPtrTraits<JSC::JSCell>> _field14;
    struct RefPtr<WTF::UniquedStringImpl, WTF::DumbPtrTraits<WTF::UniquedStringImpl>> _field15;
    struct Poisoned<WTF::Poison<&JSC::g_GlobalDataPoison>, const JSC::ClassInfo *, void> _field16;
    struct StructureTransitionTable _field17;
    struct WriteBarrier<JSC::PropertyTable, WTF::DumbPtrTraits<JSC::PropertyTable>> _field18;
    struct WriteBarrier<JSC::InferredTypeTable, WTF::DumbPtrTraits<JSC::InferredTypeTable>> _field19;
    struct InlineWatchpointSet _field20;
    int _field21;
    unsigned int _field22;
};

struct StructureChain;

struct StructureIDBlob {
    union {
        struct {
            struct Structure *_field1;
            unsigned char _field2;
            unsigned char _field3;
            unsigned char _field4;
            unsigned char _field5;
        } _field1;
        CDStruct_c10b32d8 _field2;
        long long _field3;
    } _field1;
};

struct StructureTransitionTable {
    int _field1;
};

struct UniquedStringImpl;

struct Weak<JSC::JSGlobalObject> {
    struct WeakImpl *m_impl;
};

struct Weak<JSC::JSObject> {
    struct WeakImpl *m_impl;
};

struct Weak<JSC::JSString> {
    struct WeakImpl *m_impl;
};

struct Weak<JSC::Structure> {
    struct WeakImpl *m_impl;
};

struct WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>>;

struct WeakImpl;

struct WriteBarrier<JSC::InferredTypeTable, WTF::DumbPtrTraits<JSC::InferredTypeTable>> {
    struct InferredTypeTable *_field1;
};

struct WriteBarrier<JSC::JSCell, WTF::DumbPtrTraits<JSC::JSCell>> {
    struct JSCell *_field1;
};

struct WriteBarrier<JSC::JSGlobalObject, WTF::DumbPtrTraits<JSC::JSGlobalObject>> {
    struct JSGlobalObject *_field1;
};

struct WriteBarrier<JSC::PropertyTable, WTF::DumbPtrTraits<JSC::PropertyTable>> {
    struct PropertyTable *_field1;
};

struct WriteBarrier<JSC::StructureChain, WTF::DumbPtrTraits<JSC::StructureChain>> {
    struct StructureChain *_field1;
};

struct WriteBarrier<JSC::Unknown, WTF::DumbValueTraits<JSC::Unknown>> {
    long long _field1;
};

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct pair<JSC::JSObject *, JSC::JSObject *> {
    struct JSObject *_field1;
    struct JSObject *_field2;
};

struct unique_ptr<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>>, std::__1::default_delete<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>>>> {
    struct __compressed_pair<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>>*, std::__1::default_delete<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>>>> {
        struct WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>> *__value_;
    } __ptr_;
};

#pragma mark Typedef'd Structures

typedef struct {
    int payload;
    int tag;
} CDStruct_c10b32d8;

// Template types
typedef struct pair<JSC::JSObject *, JSC::JSObject *> {
    struct JSObject *_field1;
    struct JSObject *_field2;
} pair_bfa3637f;

#pragma mark Named Unions

union EncodedValueDescriptor {
    long long asInt64;
    double asDouble;
    CDStruct_c10b32d8 asBits;
};

union WeakValueUnion {
    struct JSValue primitive;
    struct Weak<JSC::JSObject> object;
    struct Weak<JSC::JSString> string;
};

