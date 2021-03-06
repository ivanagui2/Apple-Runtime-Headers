//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFMultiStateControlItem.h>

#import <Home/HFTogglableControlItem-Protocol.h>

@class HFMultiStateValueSet, HFPowerStateControlItem, NSString;

@interface HFTargetModeControlItem : HFMultiStateControlItem <HFTogglableControlItem>
{
    NSString *_targetModeCharacteristicType;
    HFMultiStateValueSet *_targetModeValueSet;
    HFPowerStateControlItem *_primaryPowerStateControlItem;
}

@property(readonly, nonatomic) HFPowerStateControlItem *primaryPowerStateControlItem; // @synthesize primaryPowerStateControlItem=_primaryPowerStateControlItem;
@property(readonly, nonatomic) HFMultiStateValueSet *targetModeValueSet; // @synthesize targetModeValueSet=_targetModeValueSet;
@property(readonly, nonatomic) NSString *targetModeCharacteristicType; // @synthesize targetModeCharacteristicType=_targetModeCharacteristicType;
- (void).cxx_destruct;
- (id)toggleValue;
- (id)characteristicValuesForValue:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)updateWithOptions:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 possibleValueSet:(id)arg3 displayResults:(id)arg4;
- (id)initWithValueSource:(id)arg1 targetModeCharacteristicType:(id)arg2 targetModeValueSet:(id)arg3 primaryPowerStateControlItem:(id)arg4 displayResults:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

