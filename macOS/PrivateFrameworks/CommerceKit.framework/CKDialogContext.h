//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSImage, NSWindow;

@interface CKDialogContext : NSObject <NSCopying>
{
    int _proxyPID;
    NSWindow *_hostWindow;
    NSImage *_icon;
}

@property(retain) NSImage *icon; // @synthesize icon=_icon;
@property __weak NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)_clickedButtonForModalResponse:(long long)arg1;
- (id)_alertForDialog:(id)arg1;
- (void)displayDialog:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property int proxyPID;

@end
