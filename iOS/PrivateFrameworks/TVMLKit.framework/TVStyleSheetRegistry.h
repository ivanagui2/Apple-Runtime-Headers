//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface TVStyleSheetRegistry : NSObject
{
    NSMutableArray *_rootNodes;
    NSMutableDictionary *_nodesByTemplateName;
}

+ (id)_urlForStyleSheetName:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *nodesByTemplateName; // @synthesize nodesByTemplateName=_nodesByTemplateName;
@property(retain, nonatomic) NSMutableArray *rootNodes; // @synthesize rootNodes=_rootNodes;
- (void).cxx_destruct;
- (void)_commitTemplateTreeNode:(id)arg1 withParentStyleSheetURLs:(id)arg2;
- (void)_createDefaultRootNodes;
- (void)commitStyleSheets;
- (void)registerStyleSheetURLs:(id)arg1 forTemplateName:(id)arg2 basedOnTemplateName:(id)arg3;
- (id)init;

@end
