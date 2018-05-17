//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NSAccessibilityCustomRotorItemResult : NSObject
{
    id <NSAccessibilityElement> _targetElement;
    struct _NSRange _targetRange;
    NSString *_customLabel;
    id <NSSecureCoding><NSObject> _itemLoadingToken;
}

@property(readonly) id <NSSecureCoding><NSObject> itemLoadingToken; // @synthesize itemLoadingToken=_itemLoadingToken;
@property(copy) NSString *customLabel; // @synthesize customLabel=_customLabel;
@property struct _NSRange targetRange; // @synthesize targetRange=_targetRange;
- (void).cxx_destruct;
@property(readonly) __weak id <NSAccessibilityElement> targetElement;
- (void)dealloc;
- (id)initWithItemLoadingToken:(id)arg1 customLabel:(id)arg2;
- (id)initWithTargetElement:(id)arg1;

@end
