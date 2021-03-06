//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class GFGraph, GFGraphEditorView, GFNode, NSPathControl;

@interface GFGraphPathView : NSView
{
    GFGraph *_rootGraph;
    GFGraphEditorView *_graphEditor;
    GFNode *_currentNode;
    NSPathControl *_control;
    void *_unused[4];
}

+ (BOOL)_isGraph:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)graphEditor;
- (void)setGraphEditor:(id)arg1;
- (void)setCurrentNode:(id)arg1;
- (void)setPath:(id)arg1;
- (void)__graphDidChange:(id)arg1;
- (id)currentNode;
- (id)rootGraph;
- (void)setRootGraph:(id)arg1;
- (id)nodes;
- (void)_finishInitialization;
- (void)__hierarchyControlAction:(id)arg1;
- (void)_graphUpdated:(id)arg1;
- (id)_setPathWithArray:(id)arg1;
- (void)_setCurrentNode:(id)arg1;
- (BOOL)_getPathFromGraph:(id)arg1 toNode:(id)arg2 withArray:(id)arg3;

@end

