//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSMutableData, NSString;

@interface SGKeyValueCacheFile : NSObject <NSSecureCoding>
{
    struct _opaque_pthread_mutex_t _lock;
    NSData *_data;
    int _fd;
    NSString *_tmpDir;
    NSString *_tmpPath;
    NSString *_tmpDest;
    NSMutableData *_memStore;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)deleteValueByRecordId:(id)arg1;
- (void)setValueIfNotPresent:(id)arg1 forKey:(id)arg2 fromRecordId:(id)arg3;
- (void)setValue:(id)arg1 forKey:(id)arg2 fromRecordId:(id)arg3;
- (id)valueForKey:(id)arg1 found:(_Bool *)arg2;
- (id)valueForKey:(id)arg1;
- (id)_map;
- (void)commitTemporaryFile;
- (void)dealloc;
- (id)initInMemory;
- (id)initTemporaryForOverwritingPath:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1;
- (id)initBlank;
- (id)init;

@end
