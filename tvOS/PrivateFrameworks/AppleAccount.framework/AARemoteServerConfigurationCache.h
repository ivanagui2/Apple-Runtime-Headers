//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AAURLConfiguration, NSDate, NSHTTPURLResponse;

@interface AARemoteServerConfigurationCache : NSObject
{
    NSDate *_creationDate;
    AAURLConfiguration *_configuration;
    NSHTTPURLResponse *_response;
}

+ (id)cacheWithConfiguration:(id)arg1 response:(id)arg2;
@property(readonly, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) AAURLConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 response:(id)arg2;
- (id)init;

@end
