//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteViewServices/NSRemotePanel.h>

@class NSString;

@interface PBOXRemoteMediaBrowserPanel : NSRemotePanel
{
    unsigned long long _browserType;
    struct CGRect _frame;
    NSString *_autosaveName;
    BOOL _isVisible;
}

+ (id)keyPathsForPanelSettings;
@property(copy) NSString *autosaveName; // @synthesize autosaveName=_autosaveName;
@property unsigned long long browserType; // @synthesize browserType=_browserType;
@property(readonly) BOOL isVisible;
@property struct CGRect frame;
- (void)orderOut:(id)arg1;
- (void)orderFront:(id)arg1;
- (id)dictionaryForObservedValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)serializeSettings;
- (void)dealloc;
- (unsigned long long)_panelType;

@end

