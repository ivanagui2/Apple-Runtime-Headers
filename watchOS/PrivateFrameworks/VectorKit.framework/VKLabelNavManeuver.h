//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VKLabelNavFeature.h"

@class NSString, VKLabelNavRoadLabel;

__attribute__((visibility("hidden")))
@interface VKLabelNavManeuver : NSObject <VKLabelNavFeature>
{
    VKLabelNavRoadLabel *_maneuverSign;
    Matrix_6e1d3589 _worldPoint;
    struct PolylineCoordinate _routeOffset;
    NSString *_name;
    int _type;
    int _drivingSide;
    _Bool _isVisible;
    _Bool _isPicked;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool isPicked; // @synthesize isPicked=_isPicked;
@property(readonly, nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(readonly, nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;
@property(readonly, nonatomic) VKLabelNavRoadLabel *maneuverSign; // @synthesize maneuverSign=_maneuverSign;
- (id).cxx_construct;
@property(readonly, nonatomic) _Bool isTrafficCameraFeature;
@property(readonly, nonatomic) _Bool isEtaFeature;
@property(readonly, nonatomic) _Bool isGuidanceStepStart;
@property(readonly, nonatomic) NSString *shieldDisplayGroup;
@property(readonly, nonatomic) _Bool isInGuidance;
@property(readonly, nonatomic) _Bool isStartOfRoadName;
@property(readonly, nonatomic) _Bool isAwayFromRoute;
@property(readonly, nonatomic) _Bool isRamp;
@property(readonly, nonatomic) int intraRoadPriority;
@property(readonly, nonatomic) _Bool isOnRoute;
- (void)prepareStyleVarsWithContext:(struct NavContext *)arg1;
- (void)layoutWithNavContext:(struct NavContext *)arg1;
- (void)createLabelWithNavContext:(struct NavContext *)arg1 artworkCache:(struct VKLabelNavArtworkCache *)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithGEOComposedRouteStep:(id)arg1;

@end
