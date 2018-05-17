//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABLabelsConstraint.h>

@interface ABExchangeLabelsConstraint : ABLabelsConstraint
{
}

+ (id)unsupportedProperties;
+ (id)urlLabels;
+ (id)otherDatesLabels;
+ (id)makeRelatedNamesLabels;
+ (id)relatedNamesLabels;
+ (id)makeAddressLabels;
+ (id)addressLabels;
+ (id)makeInstantMessageLabels;
+ (id)instantMessageLabels;
+ (id)emailLabels;
+ (id)makePhoneLabels;
+ (id)phoneLabels;
+ (id)propertyToValidLabelsDictionary;
+ (id)propertyToInitialLabelDictionary;
- (BOOL)isLabelSupported:(id)arg1 forProperty:(id)arg2;
- (BOOL)customLabelsSupported;
- (id)initialLabelsForProperty:(id)arg1;
- (id)availableLabelsForProperty:(id)arg1 activeLabels:(id)arg2;
- (BOOL)isPropertySupported:(id)arg1;

@end
