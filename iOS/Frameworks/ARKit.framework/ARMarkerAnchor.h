//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ARKit/ARAnchor.h>

#import "ARTrackable.h"

@class NSString;

@interface ARMarkerAnchor : ARAnchor <ARTrackable>
{
    _Bool _isTracked;
    unsigned long long _markerID;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isTracked; // @synthesize isTracked=_isTracked;
@property(readonly, nonatomic) unsigned long long markerID; // @synthesize markerID=_markerID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
-     // Error parsing type: @92@0:8Q16{?=[4]}24B88, name: initWithMarkerID:transform:isTracked:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
