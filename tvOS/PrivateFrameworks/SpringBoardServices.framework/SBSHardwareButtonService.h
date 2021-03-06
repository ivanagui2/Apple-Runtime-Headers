//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardServices/SBSAbstractSystemService.h>

@class NSMutableArray;

@interface SBSHardwareButtonService : SBSAbstractSystemService
{
    NSMutableArray *_consumers;
    struct SBSHardwareButtonServiceButtonConfiguration _homeButtonConfiguration;
    struct SBSHardwareButtonServiceButtonConfiguration _lockButtonConfiguration;
}

+ (id)sharedInstance;
@property(nonatomic) struct SBSHardwareButtonServiceButtonConfiguration lockButtonConfiguration; // @synthesize lockButtonConfiguration=_lockButtonConfiguration;
@property(nonatomic) struct SBSHardwareButtonServiceButtonConfiguration homeButtonConfiguration; // @synthesize homeButtonConfiguration=_homeButtonConfiguration;
@property(retain, nonatomic) NSMutableArray *consumers; // @synthesize consumers=_consumers;
- (void).cxx_destruct;
- (void)handleButtonPressMessage:(long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3;
- (void)fetchHapticTypeForButtonKind:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setHapticType:(long long)arg1 forButtonKind:(long long)arg2;
- (void)consumerInfoWillInvalidate:(id)arg1;
- (id)beginConsumingPressesForButtonKind:(long long)arg1 eventConsumer:(id)arg2 priority:(long long)arg3;
- (void)_mainQueue_handleButtonPressMessage:(long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3;
- (void)_addEventConsumerInfo:(id)arg1;
- (id)_viableConsumerForEvent:(long long)arg1 priority:(long long)arg2;
- (void)_resetEventMaskForButtonKind:(long long)arg1;
- (void)_setApplicationClientEventMask:(unsigned long long)arg1 buttonKind:(long long)arg2 priority:(long long)arg3;
- (id)description;
- (void)acquireHomeHardwareButtonHintSuppressionAssertionForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

