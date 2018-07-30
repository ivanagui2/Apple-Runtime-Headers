//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVTAvatarAttributeEditorSection.h"

@class NSArray, NSString;

@interface AVTAvatarAttributeEditorSection : NSObject <AVTAvatarAttributeEditorSection>
{
    NSArray *_sectionItems;
    NSString *_localizedName;
    NSString *_identifier;
}

@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, copy, nonatomic) NSArray *sectionItems; // @synthesize sectionItems=_sectionItems;
- (void).cxx_destruct;
- (_Bool)shouldDisplaySeparatorBeforeSection:(id)arg1;
- (_Bool)shouldDisplayTitle;
@property(readonly, copy) NSString *description;
- (id)initWithSectionItems:(id)arg1 localizedName:(id)arg2 identifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
