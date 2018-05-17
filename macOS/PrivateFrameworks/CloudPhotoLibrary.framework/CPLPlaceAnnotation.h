//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface CPLPlaceAnnotation : NSObject <NSSecureCoding, NSCopying>
{
    NSNumber *_placeLevel;
    NSString *_placeName;
}

+ (BOOL)supportsSecureCoding;
+ (id)placeAnnotationWithCPLPlaceAnnotationDictionary:(id)arg1;
@property(copy, nonatomic) NSString *placeName; // @synthesize placeName=_placeName;
@property(copy, nonatomic) NSNumber *placeLevel; // @synthesize placeLevel=_placeLevel;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)cplPlaceAnnotationDictionary;

@end
