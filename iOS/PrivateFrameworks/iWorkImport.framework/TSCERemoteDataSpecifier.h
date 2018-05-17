//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface TSCERemoteDataSpecifier : NSObject <NSCopying>
{
    int _functionIndex;
    NSString *_symbol;
    long long _attribute;
    NSDate *_date;
    long long _year;
    unsigned long long _hashVal;
}

+ (id)specifierFromArchive:(const struct RemoteDataSpecifierArchive *)arg1;
+ (id)specifierWithFunctionIndex:(int)arg1 symbol:(id)arg2 attribute:(long long)arg3 date:(id)arg4;
@property(readonly, nonatomic) unsigned long long hashVal; // @synthesize hashVal=_hashVal;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) long long attribute; // @synthesize attribute=_attribute;
@property(readonly, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
@property(readonly, nonatomic) int functionIndex; // @synthesize functionIndex=_functionIndex;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *functionName;
- (id)description;
@property(readonly, nonatomic) struct TSCEValue invalidSymbolErrorValue;
@property(readonly, nonatomic) struct TSCEValue invalidAttributeErrorValue;
@property(readonly, nonatomic) long long year; // @synthesize year=_year;
@property(readonly, nonatomic) _Bool isCurrency;
@property(readonly, nonatomic) _Bool isCold;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeToArchive:(struct RemoteDataSpecifierArchive *)arg1;
- (id)initFromArchive:(const struct RemoteDataSpecifierArchive *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFunctionIndex:(int)arg1 symbol:(id)arg2 attribute:(long long)arg3 date:(id)arg4;

@end
