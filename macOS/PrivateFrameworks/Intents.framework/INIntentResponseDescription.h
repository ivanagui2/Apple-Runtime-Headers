//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INIntentResponseDescriptionExport.h"
#import "NSCopying.h"

@class NSDictionary, NSString;

@interface INIntentResponseDescription : NSObject <INIntentResponseDescriptionExport, NSCopying>
{
    BOOL _isPrivate;
    NSString *_name;
    Class _facadeClass;
    Class _dataClass;
    NSString *_type;
    NSDictionary *_slotsByName;
}

@property(readonly, copy, nonatomic) NSDictionary *slotsByName; // @synthesize slotsByName=_slotsByName;
@property(readonly, nonatomic) BOOL isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) Class dataClass; // @synthesize dataClass=_dataClass;
@property(readonly, nonatomic) Class facadeClass; // @synthesize facadeClass=_facadeClass;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithName:(id)arg1 facadeClass:(Class)arg2 dataClass:(Class)arg3 type:(id)arg4 isPrivate:(BOOL)arg5 slotsByName:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
