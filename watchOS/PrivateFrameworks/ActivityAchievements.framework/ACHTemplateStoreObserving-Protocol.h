//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACHTemplateStore, NSArray;

@protocol ACHTemplateStoreObserving <NSObject>
- (void)templateStore:(ACHTemplateStore *)arg1 didRemoveTemplates:(NSArray *)arg2;
- (void)templateStore:(ACHTemplateStore *)arg1 didAddNewTemplates:(NSArray *)arg2;

@optional
- (void)templateStoreDidFinishInitialFetch:(ACHTemplateStore *)arg1;
@end
