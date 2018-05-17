//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface RTVisitMonitorStatus : NSObject <NSCopying>
{
    BOOL _monitoringVisitIncidents;
    BOOL _monitoringLeechedVisitIncidents;
    BOOL _monitoringLowConfidenceVisitIncidents;
    unsigned long long _engineDependentCount;
}

@property(nonatomic) unsigned long long engineDependentCount; // @synthesize engineDependentCount=_engineDependentCount;
@property(nonatomic) BOOL monitoringLowConfidenceVisitIncidents; // @synthesize monitoringLowConfidenceVisitIncidents=_monitoringLowConfidenceVisitIncidents;
@property(nonatomic) BOOL monitoringLeechedVisitIncidents; // @synthesize monitoringLeechedVisitIncidents=_monitoringLeechedVisitIncidents;
@property(nonatomic) BOOL monitoringVisitIncidents; // @synthesize monitoringVisitIncidents=_monitoringVisitIncidents;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)invalid;
- (id)description;
- (id)initWithMonitoringVisitIncidents:(BOOL)arg1 monitoringLeechedVisitIncidents:(BOOL)arg2 monitoringLowConfidenceVisitIncidents:(BOOL)arg3 engineDependentCount:(unsigned long long)arg4;

@end
