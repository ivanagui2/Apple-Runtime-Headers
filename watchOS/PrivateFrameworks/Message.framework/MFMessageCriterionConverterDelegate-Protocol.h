//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFMessageCriterionConverter, NSArray, NSString;

@protocol MFMessageCriterionConverterDelegate <NSObject>

@optional
- (int)messageCriterionConverter:(MFMessageCriterionConverter *)arg1 criterionTypeForKey:(NSString *)arg2;
- (unsigned int)messageCriterionConverter:(MFMessageCriterionConverter *)arg1 willUsePredicateOperatorType:(unsigned int)arg2 forKey:(NSString *)arg3;
- (NSArray *)messageCriterionConverter:(MFMessageCriterionConverter *)arg1 predicateKeysForCriterionType:(int)arg2;
@end
