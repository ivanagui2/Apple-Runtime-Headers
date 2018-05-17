//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLArgument.h>

@class MTLType, NSString;

__attribute__((visibility("hidden")))
@interface MTLArgumentInternal : MTLArgument
{
    NSString *_name;
    unsigned int _type;
    unsigned int _access;
    unsigned int _index;
    _Bool _active;
    unsigned int _arrayLength;
    MTLType *_typeInfo;
}

- (unsigned int)arrayLength;
- (_Bool)isActive;
- (unsigned int)index;
- (unsigned int)access;
- (unsigned int)type;
- (id)name;
- (id)description;
- (id)formattedDescription:(unsigned int)arg1;
- (id)dataTypeDescription;
- (unsigned int)textureDataType;
- (unsigned int)textureType;
- (unsigned int)threadgroupMemoryDataSize;
- (unsigned int)threadgroupMemoryAlignment;
- (id)bufferPointerType;
- (id)bufferStructType;
- (id)bufferIndirectArgumentType;
- (unsigned int)indirectConstantDataType;
- (unsigned int)indirectConstantDataSize;
- (unsigned int)indirectConstantAlignment;
- (unsigned int)bufferDataType;
- (unsigned int)bufferDataSize;
- (unsigned int)bufferAlignment;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 access:(unsigned int)arg3 index:(unsigned int)arg4 active:(_Bool)arg5 arrayLength:(unsigned int)arg6 typeDescription:(id)arg7;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 access:(unsigned int)arg3 index:(unsigned int)arg4 active:(_Bool)arg5 arrayLength:(unsigned int)arg6;

@end
