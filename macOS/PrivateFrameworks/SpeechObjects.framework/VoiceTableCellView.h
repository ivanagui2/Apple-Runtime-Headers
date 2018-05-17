//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSPopUpButton, NSTextField, SOVoiceRowCheckboxButton;

@interface VoiceTableCellView : NSTableCellView
{
    SOVoiceRowCheckboxButton *_activeCheckbox;
    SOVoiceRowCheckboxButton *_downloadCheckbox;
    NSTextField *_downloadMessageTextField;
    NSPopUpButton *_downloadVariantPopUpButton;
}

@property(readonly, nonatomic) NSPopUpButton *downloadVariantPopUpButton; // @synthesize downloadVariantPopUpButton=_downloadVariantPopUpButton;
@property(readonly, nonatomic) NSTextField *downloadMessageTextField; // @synthesize downloadMessageTextField=_downloadMessageTextField;
@property(readonly, nonatomic) SOVoiceRowCheckboxButton *downloadCheckbox; // @synthesize downloadCheckbox=_downloadCheckbox;
@property(readonly, nonatomic) SOVoiceRowCheckboxButton *activeCheckbox; // @synthesize activeCheckbox=_activeCheckbox;

@end
