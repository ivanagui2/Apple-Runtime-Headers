//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKExtendedHealthStore;

@interface FIUIAchievementsModel : NSObject
{
    HKExtendedHealthStore *_extendedHealthStore;
    id <FIUIAchievementsModelDelegate> _delegate;
}

+ (int)compareAchievement:(id)arg1 toAchievement:(id)arg2;
@property(nonatomic) __weak id <FIUIAchievementsModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fetchAchievementsOnDay:(id)arg1 inCalendar:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end
