//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _DKCachedLocationVisit : NSObject
{
    double _entryTime;
    double _exitTime;
    NSString *_locationId;
}

@property(retain, nonatomic) NSString *locationId; // @synthesize locationId=_locationId;
@property(nonatomic) double exitTime; // @synthesize exitTime=_exitTime;
@property(nonatomic) double entryTime; // @synthesize entryTime=_entryTime;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqualToVisit:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
