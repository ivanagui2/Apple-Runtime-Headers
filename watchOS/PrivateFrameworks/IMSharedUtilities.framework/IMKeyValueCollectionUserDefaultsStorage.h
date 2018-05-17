//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMKeyValueCollectionStorage.h"

@class NSString;

@interface IMKeyValueCollectionUserDefaultsStorage : NSObject <IMKeyValueCollectionStorage>
{
    NSString *_domain;
}

@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)_actuallyWriteObject:(id)arg1 forKey:(id)arg2;
- (id)_actuallyReadObjectForKey:(id)arg1;
- (id)_decodeData:(id)arg1 forKey:(id)arg2;
- (id)initWithDomain:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
