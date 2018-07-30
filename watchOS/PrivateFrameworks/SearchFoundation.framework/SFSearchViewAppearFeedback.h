//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@interface SFSearchViewAppearFeedback : SFFeedback
{
    _Bool _isOnLockScreen;
    _Bool _isOverApp;
    _Bool _readerTextAvailable;
    unsigned int _viewAppearEvent;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool readerTextAvailable; // @synthesize readerTextAvailable=_readerTextAvailable;
@property(nonatomic) _Bool isOverApp; // @synthesize isOverApp=_isOverApp;
@property(nonatomic) _Bool isOnLockScreen; // @synthesize isOnLockScreen=_isOnLockScreen;
@property(nonatomic) unsigned int viewAppearEvent; // @synthesize viewAppearEvent=_viewAppearEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(unsigned int)arg1;

@end
