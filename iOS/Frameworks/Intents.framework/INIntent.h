//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INFileURLEnumerable-Protocol.h>
#import <Intents/INGenericIntent-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>
#import <Intents/INIntentExport-Protocol.h>
#import <Intents/INIntentSlotComposing-Protocol.h>
#import <Intents/INKeyImageProducing-Protocol.h>
#import <Intents/INRuntimeObject-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, NSArray, NSDictionary, NSMutableDictionary, NSOrderedSet, NSString, PBCodable, _INPBIntentMetadata;

@interface INIntent : NSObject <INImageProxyInjecting, INIntentSlotComposing, INFileURLEnumerable, INKeyImageProducing, INIntentExport, INGenericIntent, INRuntimeObject, NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_intentInstanceDescriptionMapping;
    NSArray *_parameterImages;
    NSDictionary *_parameterCombinations;
    unsigned long long _indexingHash;
    NSString *_identifier;
    PBCodable *_backingStore;
    NSArray *_airPlayRouteIds;
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)intentDescription;
+ (id)typeName;
+ (void)initialize;
+ (id)_ignoredParameters;
@property(retain, nonatomic, setter=_setAirPlayRouteIds:) NSArray *airPlayRouteIds; // @synthesize airPlayRouteIds=_airPlayRouteIds;
@property(copy, nonatomic) PBCodable *backingStore; // @synthesize backingStore=_backingStore;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic, setter=_setParameterCombinations:) NSDictionary *_parameterCombinations; // @synthesize _parameterCombinations;
- (void).cxx_destruct;
- (id)_spotlightContentType;
- (_Bool)configureAttributeSet:(id)arg1 includingData:(_Bool)arg2;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)valueForKey:(id)arg1;
@property(readonly, nonatomic) NSOrderedSet *_displayOrderedAttributes;
@property(readonly, nonatomic) NSArray *_codableAttributes;
- (id)_inCodable;
- (id)_className;
- (id)_intentInstanceDescription;
- (_Bool)isGenericIntent;
@property(copy, nonatomic) NSDictionary *parametersByName;
@property(copy, nonatomic) NSString *verb;
@property(copy, nonatomic) NSString *domain;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)_typedBackingStore;
- (id)protoData;
- (id)_impl;
- (id)_dictionaryRepresentation;
@property(readonly, copy) NSString *debugDescription;
- (id)_redactedDictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)trimDataAgainstTCCForAuditToken:(CDStruct_6ad76789)arg1 bundle:(id)arg2;
@property(nonatomic, getter=_isUserConfirmationRequired, setter=_setUserConfirmationRequired:) _Bool _userConfirmationRequired;
@property(readonly) unsigned long long _indexingHash; // @synthesize _indexingHash;
@property(readonly, nonatomic) long long _type;
- (id)_emptyCopy;
- (id)_nonNilParameters;
@property(readonly, nonatomic) _Bool _supportsBackgroundExecution;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
@property(readonly, nonatomic) NSDictionary *_validParameterCombinations;
@property(copy, nonatomic, getter=_parameterImages, setter=_setParameterImages:) NSArray *parameterImages;
@property(readonly, copy, nonatomic, getter=_sortedParameterImages) NSArray *sortedParameterImages;
- (id)_imageForParameter:(id)arg1;
- (void)_setImage:(id)arg1 forParameter:(id)arg2;
- (id)keyImage;
- (id)imageForParameterNamed:(id)arg1;
- (void)setImage:(id)arg1 forParameterNamed:(id)arg2;
@property(readonly, copy, nonatomic) NSString *intentDescription;
@property(copy, nonatomic) NSString *suggestedInvocationPhrase;
@property(readonly, nonatomic) long long triggerMethod;
@property(nonatomic, setter=_setExecutionContext:) long long _executionContext;
@property(retain, nonatomic, setter=_setNanoLaunchId:) NSString *_nanoLaunchId;
@property(retain, nonatomic, setter=_setUiExtensionBundleId:) NSString *_uiExtensionBundleId;
@property(retain, nonatomic, setter=_setExtensionBundleId:) NSString *extensionBundleId;
@property(retain, nonatomic, setter=_setLaunchId:) NSString *launchId;
@property(retain, nonatomic, setter=_setDefaultImage:) INImage *_defaultImage;
- (void)_setCategoryVerb:(id)arg1;
@property(readonly, nonatomic) NSString *_categoryVerb;
- (void)_setIntentCategory:(long long)arg1;
@property(readonly, nonatomic) long long _intentCategory;
- (id)_defaultImageNameWithSchema:(id)arg1;
@property(readonly, nonatomic) NSString *intentId;
@property(readonly, nonatomic) NSString *utteranceString;
@property(retain, nonatomic, setter=_setMetadata:) _INPBIntentMetadata *_metadata;
@property(readonly, nonatomic) NSString *typeName;
- (id)_initWithIdentifier:(id)arg1 schema:(id)arg2 name:(id)arg3 data:(id)arg4;
- (id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id *)arg4;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;
- (id)init;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_injectProxiesForImagesUsingIntentSlotDescriptionStrategy:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_injectProxiesForParameterImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_injectProxyForDefaultImage:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_injectProxiesForImagesUsingCustomCodableStrategy:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly) long long _intents_toggleState;
- (id)localizeValueOfSlotDescription:(id)arg1 forLanguage:(id)arg2;
- (id)intentSlotDescriptions;
- (id)_localizedCombinationStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 bundleURL:(id)arg4 language:(id)arg5;
@property(readonly, copy, nonatomic) NSString *_localizedVerb;
- (id)_subtitleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (id)_subtitleForLanguage:(id)arg1;
@property(readonly, copy, nonatomic) NSString *_subtitle;
- (id)_titleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (id)_titleForLanguage:(id)arg1;
@property(readonly, copy, nonatomic) NSString *_title;
@property(readonly, nonatomic) _Bool _hasTitle;
- (id)_intents_bundleIdForDisplay;
- (id)_intents_bundleIdForLaunching;
- (id)_intents_bestBundleIdentifier;
- (id)_intents_launchIdForCurrentPlatform;
- (void)_enumerateFileURLsWithMutatingBlock:(CDUnknownBlockType)arg1;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
@property(readonly) INImage *_keyImage;
- (id)_keyImageWithIntentDescriptionStrategy;

// Remaining properties
@property(readonly) Class superclass;

@end

