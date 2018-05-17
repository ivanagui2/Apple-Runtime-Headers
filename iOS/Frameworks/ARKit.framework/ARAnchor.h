//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSUUID;

@interface ARAnchor : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_identifier;
    double _lastUpdateTimestamp;
    // Error parsing type: {?="columns"[4]}, name: _transform
    // Error parsing type: {?="columns"[4]}, name: _referenceTransform
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double lastUpdateTimestamp; // @synthesize lastUpdateTimestamp=_lastUpdateTimestamp;
// Error parsing type for property referenceTransform:
// Property attributes: T{?=[4]},N,V_referenceTransform

// Error parsing type for property transform:
// Property attributes: T{?=[4]},N,V_transform

@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (id)_description:(_Bool)arg1;
- (_Bool)isEqualToAnchor:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
-     // Error parsing type: @88@0:8@16{?=[4]}24, name: initWithIdentifier:transform:
-     // Error parsing type: @80@0:8{?=[4]}16, name: initWithTransform:

@end
