//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Automator/_AMiTunes7Item.h>

@class NSString;

@interface _AMiTunes7Playlist : _AMiTunes7Item
{
}

- (id)searchFor:(id)arg1 only:(int)arg2;
- (void)moveTo:(id)arg1;
@property(readonly) BOOL visible;
@property(readonly, copy) NSString *time;
@property(readonly) int specialKind;
@property int songRepeat;
@property(readonly) long long size;
@property BOOL shuffle;
@property(readonly, copy) _AMiTunes7Playlist *parent;
@property(copy) NSString *name;
@property(readonly) long long index;
@property(readonly) long long duration;
- (id)tracks;

@end
