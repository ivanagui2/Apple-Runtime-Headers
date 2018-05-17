//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSNumber, NSString;

@interface MCUIPayloadUserInputField : NSObject
{
    NSMutableDictionary *_fieldDictionary;
    id _response;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isDevicePasscodeField;
@property(readonly, nonatomic) _Bool needsRetype;
@property(readonly, nonatomic) _Bool isPassword;
@property(readonly, nonatomic) _Bool isRequired;
@property(readonly, nonatomic) long long capitalizationType;
@property(readonly, nonatomic) long long keyboardType;
- (id)responseDictionary;
- (id)_uuid;
@property(readonly, nonatomic) NSString *placeholderValue;
@property(readonly, nonatomic) NSString *defaultValue;
@property(retain, nonatomic) NSString *finePrint;
@property(readonly, nonatomic) NSString *mismatchDescription;
@property(readonly, nonatomic) NSString *retypeDescription;
@property(retain, nonatomic) NSString *fieldDescription;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSNumber *minimumLength;
@property(readonly, nonatomic) int flags;
@property(readonly, nonatomic) int type;
- (id)description;
- (void)setUserResponse:(id)arg1;
- (id)initWithFieldDictionary:(id)arg1;

@end
