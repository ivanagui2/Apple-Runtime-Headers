//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoFoundation/_PFActionLogEvent.h>

@interface _PFActionLogStateChange : _PFActionLogEvent
{
    int _oldStatus;
    int _newStatus;
}

@property(readonly) int newStatus; // @synthesize newStatus=_newStatus;
@property(readonly) int oldStatus; // @synthesize oldStatus=_oldStatus;
- (id)description;
- (id)initWithAction:(id)arg1 oldStatus:(int)arg2 newStatus:(int)arg3;

@end
