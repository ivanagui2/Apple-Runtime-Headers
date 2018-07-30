//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class ICMediaApplicationBanner, NSDictionary;

@interface ICMediaApplicationBannerSyncCommand : NSObject <NSCopying>
{
    NSDictionary *_responseDictionary;
    int _commandType;
    ICMediaApplicationBanner *_banner;
    unsigned long long _serialNumber;
}

@property(readonly, nonatomic) unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, nonatomic) ICMediaApplicationBanner *banner; // @synthesize banner=_banner;
@property(readonly, nonatomic) int commandType; // @synthesize commandType=_commandType;
@property(readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (void).cxx_destruct;
- (id)_nameForCommandType:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithResponseDictionary:(id)arg1;

@end
