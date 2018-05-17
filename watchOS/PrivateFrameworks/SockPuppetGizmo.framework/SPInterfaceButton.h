//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "SPInterfaceActionItem.h"

@class NSBundle, NSDictionary, NSString, PUICButton, SPInterfaceGroupView, UIColor;

@interface SPInterfaceButton : UIControl <SPInterfaceActionItem>
{
    _Bool _isNativeInterfaceObject;
    _Bool _hasCustomBackgroundImage;
    _Bool _hasGroupButton;
    NSDictionary *_itemDescriptionForIB;
    NSBundle *_bundle;
    NSString *_stringsFileName;
    NSDictionary *_companionProperty;
    int _interfaceAlignment;
    int _verticalInterfaceAlignment;
    NSString *_actionValue;
    NSDictionary *_segueValue;
    UIColor *_titleColor;
    float _width;
    float _widthAdjustment;
    float _height;
    float _heightAdjustment;
    PUICButton *_buttonControl;
    SPInterfaceGroupView *_groupView;
    id _target;
    SEL _action;
    struct CGSize _interfacePlistSize;
    struct CGSize _cachedContainerSize;
    struct CGSize _cachedSize;
}

@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) SPInterfaceGroupView *groupView; // @synthesize groupView=_groupView;
@property(retain, nonatomic) PUICButton *buttonControl; // @synthesize buttonControl=_buttonControl;
@property(nonatomic) struct CGSize cachedSize; // @synthesize cachedSize=_cachedSize;
@property(nonatomic) struct CGSize cachedContainerSize; // @synthesize cachedContainerSize=_cachedContainerSize;
@property(nonatomic) struct CGSize interfacePlistSize; // @synthesize interfacePlistSize=_interfacePlistSize;
@property(nonatomic) float heightAdjustment; // @synthesize heightAdjustment=_heightAdjustment;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float widthAdjustment; // @synthesize widthAdjustment=_widthAdjustment;
@property(nonatomic) float width; // @synthesize width=_width;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) _Bool hasGroupButton; // @synthesize hasGroupButton=_hasGroupButton;
@property(nonatomic) _Bool hasCustomBackgroundImage; // @synthesize hasCustomBackgroundImage=_hasCustomBackgroundImage;
@property(copy, nonatomic) NSDictionary *segueValue; // @synthesize segueValue=_segueValue;
@property(copy, nonatomic) NSString *actionValue; // @synthesize actionValue=_actionValue;
@property(nonatomic) int verticalInterfaceAlignment; // @synthesize verticalInterfaceAlignment=_verticalInterfaceAlignment;
@property(nonatomic) int interfaceAlignment; // @synthesize interfaceAlignment=_interfaceAlignment;
@property(nonatomic) _Bool isNativeInterfaceObject; // @synthesize isNativeInterfaceObject=_isNativeInterfaceObject;
@property(copy, nonatomic) NSDictionary *companionProperty; // @synthesize companionProperty=_companionProperty;
@property(copy, nonatomic) NSString *stringsFileName; // @synthesize stringsFileName=_stringsFileName;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) NSDictionary *itemDescriptionForIB; // @synthesize itemDescriptionForIB=_itemDescriptionForIB;
- (void).cxx_destruct;
- (void)doButton;
- (void)setTarget:(id)arg1 forInterfaceItemAction:(SEL)arg2;
- (void)layoutSubviews;
- (_Bool)hasIntrinsicHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setInterfaceItemValue:(id)arg1 property:(id)arg2;
- (void)setInterfaceItemValue:(id)arg1 forKey:(id)arg2 property:(id)arg3;
- (_Bool)_setInterfaceItemValue:(id)arg1 forKey:(id)arg2 property:(id)arg3;
- (id)allProperties;
- (id)interfaceAction;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithItemDescription:(id)arg1 bundle:(id)arg2 stringsFileName:(id)arg3 native:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
