//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXMJSONSerializable.h"
#import "NSSecureCoding.h"

@class AXMLanguage, AXMTaggedText, AXMVisionFeatureAssetMetadata, AXMVisionFeatureColorInfo, AXMVisionFeatureFaceLandmarks, NSArray, NSDictionary, NSNumber, NSString;

@interface AXMVisionFeature : NSObject <AXMJSONSerializable, NSSecureCoding>
{
    unsigned int _featureType;
    NSArray *_subfeatures;
    NSString *_barcodeType;
    int _ocrFeatureType;
    AXMLanguage *_detectionLanguage;
    double _creationDate;
    struct CGRect _frame;
    struct CGRect _normalizedFrame;
    NSString *_value;
    NSNumber *_isValueSpeakable;
    AXMTaggedText *_taggedText;
    AXMVisionFeatureColorInfo *_colorInfo;
    AXMVisionFeatureAssetMetadata *_assetMetadata;
    float _blur;
    float _brightness;
    float _confidence;
    struct CGAffineTransform _horizonTransform;
    float _horizonAngle;
    AXMVisionFeatureFaceLandmarks *_faceLandmarks;
    AXMVisionFeatureFaceLandmarks *_faceLandmarks3d;
    NSDictionary *_faceExpressionsAndConfidence;
    int _likelyExpression;
    unsigned int _faceId;
    struct CGSize _canvasSize;
}

+ (id)flattenedFeatureList:(id)arg1;
+ (void)_append:(id)arg1 toList:(id)arg2;
+ (id)debugNameForFeatureType:(unsigned int)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)featureWithAssetMetadata:(id)arg1;
+ (id)featureWithColorInfo:(id)arg1 canvasSize:(struct CGSize)arg2;
+ (id)featureWithMediaLegibility:(id)arg1;
+ (id)featureWithMetadata:(id)arg1 canvasSize:(struct CGSize)arg2;
+ (id)unitTestingHorizonFeature;
+ (id)unitTestingFaceFeature;
+ (id)unitTestingFeature;
+ (id)unitTestingFeatureWithType:(unsigned int)arg1 canvasSize:(struct CGSize)arg2 frame:(struct CGRect)arg3 value:(id)arg4 barcodeType:(id)arg5 ocrFeatureType:(int)arg6 subFeatures:(id)arg7;
- (void).cxx_destruct;
- (float)confidenceForExpression:(int)arg1;
@property(readonly, nonatomic) int likelyExpression;
- (id)stringForExpression:(int)arg1;
- (int)expressionForString:(id)arg1;
@property(readonly) unsigned int hash;
- (_Bool)isEqualToAXMVisionFeature:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)_nameForOCRFeatureType:(int)arg1;
@property(readonly, nonatomic) _Bool isTrackable;
@property(readonly, nonatomic) _Bool isTextDiacritic;
@property(readonly, nonatomic) _Bool isTextCharacter;
@property(readonly, nonatomic) _Bool isTextSequence;
@property(readonly, nonatomic) _Bool isTextLine;
@property(readonly, nonatomic) _Bool isTextRegion;
@property(readonly, nonatomic) _Bool isTextDocument;
@property(readonly, nonatomic) _Bool isOCR;
@property(readonly, nonatomic) _Bool isRectangle;
@property(readonly, nonatomic) _Bool isAssetMetadata;
@property(readonly, nonatomic) _Bool isMediaLegibility;
@property(readonly, nonatomic) _Bool isHorizon;
@property(readonly, nonatomic) _Bool isBlur;
@property(readonly, nonatomic) _Bool isBrightness;
@property(readonly, nonatomic) _Bool isColor;
@property(readonly, nonatomic) _Bool isModelClassification;
@property(readonly, nonatomic) _Bool isClassification;
@property(readonly, nonatomic) _Bool isHuman;
@property(readonly, nonatomic) _Bool isFace;
@property(readonly, nonatomic) _Bool isBarcode;
- (_Bool)_isTextFeatureValueSpeakable;
@property(readonly, nonatomic) _Bool isValueSpeakable;
- (id)_valueForTextFeature;
@property(readonly, nonatomic) NSString *value;
@property(readonly, nonatomic) float horizonAngle;
@property(readonly, nonatomic) struct CGAffineTransform horizonTransform;
@property(readonly, nonatomic) unsigned int faceId;
@property(readonly, nonatomic) NSDictionary *faceExpressionsAndConfidence;
@property(readonly, nonatomic) AXMVisionFeatureFaceLandmarks *faceLandmarks3d;
@property(readonly, nonatomic) AXMVisionFeatureFaceLandmarks *faceLandmarks;
@property(readonly, nonatomic) float brightness;
@property(readonly, nonatomic) float blur;
@property(readonly, nonatomic) AXMVisionFeatureAssetMetadata *assetMetadata;
@property(readonly, nonatomic) AXMVisionFeatureColorInfo *colorInfo;
@property(readonly, nonatomic) AXMLanguage *detectionLanguage;
@property(readonly, nonatomic) int ocrFeatureType;
@property(readonly, nonatomic) NSString *barcodeType;
@property(readonly, nonatomic) float confidence;
@property(readonly, nonatomic) struct CGRect normalizedFrame;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) double creationDate;
@property(readonly, nonatomic) NSArray *subfeatures;
@property(readonly, nonatomic) unsigned int featureType;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)_serializeWithCoder:(id)arg1 orDictionary:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
@property(readonly, nonatomic) AXMTaggedText *taggedText;

// Remaining properties
@property(readonly) Class superclass;

@end
