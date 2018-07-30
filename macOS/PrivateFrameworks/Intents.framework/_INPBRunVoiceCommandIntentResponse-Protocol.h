//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBArchivedObject, _INPBDictionary;

@protocol _INPBRunVoiceCommandIntentResponse <NSObject>
@property(readonly, nonatomic) BOOL hasVerb;
@property(copy, nonatomic) NSString *verb;
@property(readonly, nonatomic) BOOL hasUnderlyingIntentResponse;
@property(retain, nonatomic) _INPBArchivedObject *underlyingIntentResponse;
@property(readonly, nonatomic) BOOL hasUnderlyingIntent;
@property(retain, nonatomic) _INPBArchivedObject *underlyingIntent;
@property(nonatomic) BOOL hasToggleState;
@property(nonatomic) int toggleState;
@property(readonly, nonatomic) BOOL hasResponseTemplate;
@property(copy, nonatomic) NSString *responseTemplate;
@property(readonly, nonatomic) BOOL hasParameters;
@property(retain, nonatomic) _INPBDictionary *parameters;
@property(readonly, nonatomic) BOOL hasLocalizedAppName;
@property(copy, nonatomic) NSString *localizedAppName;
@property(nonatomic) BOOL hasInterstitialDisabled;
@property(nonatomic) BOOL interstitialDisabled;
@property(nonatomic) BOOL hasIntentCategory;
@property(nonatomic) int intentCategory;
@property(nonatomic) BOOL hasCustomResponsesDisabled;
@property(nonatomic) BOOL customResponsesDisabled;
@property(nonatomic) BOOL hasContinueRunning;
@property(nonatomic) BOOL continueRunning;
@property(readonly, nonatomic) BOOL hasAppBundleId;
@property(copy, nonatomic) NSString *appBundleId;
- (int)StringAsToggleState:(NSString *)arg1;
- (NSString *)toggleStateAsString:(int)arg1;
- (int)StringAsIntentCategory:(NSString *)arg1;
- (NSString *)intentCategoryAsString:(int)arg1;
@end
