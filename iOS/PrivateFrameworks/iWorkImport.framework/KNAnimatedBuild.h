//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KNBuildAttributes, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface KNAnimatedBuild : NSObject
{
    _Bool _automatic;
    _Bool _animateAtEndOfPreviousBuild;
    _Bool _isVisibleAtBeginning;
    _Bool _isVisibleAtEnd;
    _Bool _isInitialAmbientBuild;
    long long _buildType;
    NSString *_effectIdentifier;
    long long _eventIndex;
    long long _stageIndex;
    unsigned long long _direction;
    unsigned long long _deliveryOption;
    unsigned long long _deliveryStyle;
    Class _pluginClass;
    KNBuildAttributes *_attributes;
    double _startTime;
    double _eventStartTime;
    double _duration;
    double _endTime;
    double _eventEndTime;
    NSDictionary *_previousAttributes;
    NSDictionary *_finalAttributes;
    KNAnimatedBuild *_parentBuild;
    NSArray *_childBuilds;
}

@property(readonly, nonatomic) NSArray *childBuilds; // @synthesize childBuilds=_childBuilds;
@property(nonatomic) KNAnimatedBuild *parentBuild; // @synthesize parentBuild=_parentBuild;
@property(copy, nonatomic) NSDictionary *finalAttributes; // @synthesize finalAttributes=_finalAttributes;
@property(copy, nonatomic) NSDictionary *previousAttributes; // @synthesize previousAttributes=_previousAttributes;
@property(nonatomic) _Bool isInitialAmbientBuild; // @synthesize isInitialAmbientBuild=_isInitialAmbientBuild;
@property(nonatomic) _Bool isVisibleAtEnd; // @synthesize isVisibleAtEnd=_isVisibleAtEnd;
@property(nonatomic) _Bool isVisibleAtBeginning; // @synthesize isVisibleAtBeginning=_isVisibleAtBeginning;
@property(nonatomic) _Bool animateAtEndOfPreviousBuild; // @synthesize animateAtEndOfPreviousBuild=_animateAtEndOfPreviousBuild;
@property(readonly, nonatomic) _Bool automatic; // @synthesize automatic=_automatic;
@property(readonly, nonatomic) double eventEndTime; // @synthesize eventEndTime=_eventEndTime;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double eventStartTime; // @synthesize eventStartTime=_eventStartTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) KNBuildAttributes *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) Class pluginClass; // @synthesize pluginClass=_pluginClass;
@property(readonly, nonatomic) unsigned long long deliveryStyle; // @synthesize deliveryStyle=_deliveryStyle;
@property(readonly, nonatomic) unsigned long long deliveryOption; // @synthesize deliveryOption=_deliveryOption;
@property(readonly, nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) long long stageIndex; // @synthesize stageIndex=_stageIndex;
@property(nonatomic) long long eventIndex; // @synthesize eventIndex=_eventIndex;
@property(readonly, nonatomic) NSString *effectIdentifier; // @synthesize effectIdentifier=_effectIdentifier;
@property(readonly, nonatomic) long long buildType; // @synthesize buildType=_buildType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *requiredScales;
@property(readonly, nonatomic) double maxScale;
@property(readonly, nonatomic) double finalScale;
@property(readonly, nonatomic) double initialScale;
@property(readonly, nonatomic) _Bool hasPreviousActionRotate;
@property(readonly, nonatomic) _Bool hasPreviousActionScale;
@property(readonly, nonatomic) _Bool isActionMotionPath;
@property(readonly, nonatomic) _Bool isActionOpacity;
@property(readonly, nonatomic) _Bool isActionRotation;
@property(readonly, nonatomic) _Bool isActionScale;
- (_Bool)p_isActionEffect:(id)arg1;
- (void)addChildBuild:(id)arg1;
- (_Bool)isRelatedTo:(id)arg1;
- (_Bool)isSiblingTo:(id)arg1;
@property(readonly, nonatomic) double durationWithChildren;
@property(readonly, nonatomic) _Bool isChildBuild;
@property(readonly, nonatomic) _Bool isParentBuild;
@property(readonly, nonatomic) _Bool isImplicitlyVisibleAtBeginning;
@property(readonly, nonatomic) _Bool isMagicChartBuild;
@property(readonly, nonatomic) _Bool isDriftBuild;
@property(readonly, nonatomic) _Bool isLineDrawBuild;
@property(readonly, nonatomic) _Bool isContentBuild;
@property(readonly, nonatomic) _Bool isEmphasisBuild;
@property(readonly, nonatomic) _Bool isActionBuild;
@property(readonly, nonatomic) _Bool isBuildOut;
@property(readonly, nonatomic) _Bool isBuildIn;
- (id)description;
- (id)initWithBuildType:(long long)arg1 effectIdentifier:(id)arg2 attributes:(id)arg3 pluginClass:(Class)arg4 deliveryStyle:(unsigned long long)arg5 eventIndex:(long long)arg6 stageIndex:(long long)arg7 startTime:(double)arg8 eventStartTime:(double)arg9 duration:(double)arg10 direction:(unsigned long long)arg11 automatic:(_Bool)arg12 animateAtEndOfPreviousBuild:(_Bool)arg13 parentBuild:(id)arg14;

@end

