//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXTransitionDataSourceProvider.h"

@class NSString, SXComponentController, SXTransitionDataSourceNode, UIScrollView;

@interface SXTransitionDataSourceProvider : NSObject <SXTransitionDataSourceProvider>
{
    SXComponentController *_componentController;
    UIScrollView *_scrollView;
    SXTransitionDataSourceNode *_currentNode;
}

@property(retain, nonatomic) SXTransitionDataSourceNode *currentNode; // @synthesize currentNode=_currentNode;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) SXComponentController *componentController; // @synthesize componentController=_componentController;
- (void).cxx_destruct;
- (id)transitionDataSourceForType:(unsigned long long)arg1;
- (id)initWithComponentController:(id)arg1 scrollView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
