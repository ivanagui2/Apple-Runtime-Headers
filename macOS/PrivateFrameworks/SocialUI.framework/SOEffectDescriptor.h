//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSButton, NSString, NSTextField;
@protocol SOEffectDescriptorDelegate;

@interface SOEffectDescriptor : NSObject
{
    BOOL _activated;
    NSString *_displayName;
    NSString *_effectIdentifier;
    NSTextField *_label;
    id <SOEffectDescriptorDelegate> _delegate;
    id _target;
    SEL _action;
    NSButton *_previewButton;
    NSButton *_sendButton;
    struct CGRect _labelFrame;
}

@property(retain, nonatomic) NSButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) NSButton *previewButton; // @synthesize previewButton=_previewButton;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) __weak id <SOEffectDescriptorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect labelFrame; // @synthesize labelFrame=_labelFrame;
@property(retain, nonatomic) NSTextField *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *effectIdentifier; // @synthesize effectIdentifier=_effectIdentifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic, getter=isActivated) BOOL activated; // @synthesize activated=_activated;
- (void).cxx_destruct;
- (void)addButtonsToView:(id)arg1;
- (void)addLabelToView:(id)arg1;
- (void)willSend:(id)arg1;
- (void)willPreview:(id)arg1;
- (void)dealloc;
- (id)initWithDisplayName:(id)arg1 effectIdentifier:(id)arg2 target:(id)arg3 action:(SEL)arg4;

@end

