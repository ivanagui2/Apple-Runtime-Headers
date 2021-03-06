//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>
#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteConnectionOptions : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _readOnly;
    NSString *_databasePath;
    long long _cacheSize;
    NSString *_protectionType;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isReadOnly) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property(copy, nonatomic) NSString *protectionType; // @synthesize protectionType=_protectionType;
@property(nonatomic) long long cacheSize; // @synthesize cacheSize=_cacheSize;
@property(copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)applyToDatabase:(struct sqlite3 *)arg1;
- (void)setCacheSizeWithNumberOfKilobytes:(long long)arg1;
- (void)setCacheSizeWithNumberOfDatabasePages:(long long)arg1;
- (id)initWithDatabasePath:(id)arg1;

@end

