//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _SGTABPersonResult : NSObject
{
    NSString *displayName;
    NSArray *values;
    id representedObject;
}

@property(readonly, nonatomic) NSArray *values; // @synthesize values;
@property(readonly, nonatomic) id representedObject; // @synthesize representedObject;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName;
- (void).cxx_destruct;
- (void)addValue:(id)arg1;
- (id)initWithPerson:(id)arg1 includeAllScreenNames:(BOOL)arg2;
- (id)initWithDisplayName:(id)arg1 values:(id)arg2;
- (id)initWithDisplayName:(id)arg1 representedObject:(id)arg2 values:(id)arg3;

@end
