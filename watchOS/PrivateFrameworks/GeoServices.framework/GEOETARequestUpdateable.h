//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOXPCRequest.h>

#import "GEOXPCRequest.h"

@class GEODataConditionalConnectionProperties, GEOETATrafficUpdateRequest, NSString;

@interface GEOETARequestUpdateable : GEOXPCRequest <GEOXPCRequest>
{
    GEOETATrafficUpdateRequest *_request;
    int _mode;
    GEODataConditionalConnectionProperties *_connectionProperties;
}

+ (Class)replyClass;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) GEODataConditionalConnectionProperties *connectionProperties; // @synthesize connectionProperties=_connectionProperties;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(retain, nonatomic) GEOETATrafficUpdateRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (_Bool)expectsReply;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
