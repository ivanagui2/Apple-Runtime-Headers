//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _NCActionButtonDescription : NSObject
{
    NSString *_selectorString;
    _Bool _defaultActionButton;
    NSString *_title;
}

@property(readonly, nonatomic, getter=isDefaultActionButton) _Bool defaultActionButton; // @synthesize defaultActionButton=_defaultActionButton;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) SEL selector;
- (id)initWithTitle:(id)arg1 selector:(SEL)arg2 defaultActionButton:(_Bool)arg3;

@end
