//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IMDCoreRecentsProtocol;

@interface IMDCoreSpotlightDispatchObject : NSObject
{
    BOOL _allowsOverrideOfObjects;
    BOOL _shouldAddToSuggestions;
    BOOL _shouldAddToSpotlight;
    BOOL _shouldAddToCoreRecents;
    NSObject<IMDCoreRecentsProtocol> *_recentsInstance;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL shouldAddToCoreRecents; // @synthesize shouldAddToCoreRecents=_shouldAddToCoreRecents;
@property(nonatomic) BOOL shouldAddToSpotlight; // @synthesize shouldAddToSpotlight=_shouldAddToSpotlight;
@property(nonatomic) BOOL shouldAddToSuggestions; // @synthesize shouldAddToSuggestions=_shouldAddToSuggestions;
@property(nonatomic) BOOL allowsOverrideOfObjects; // @synthesize allowsOverrideOfObjects=_allowsOverrideOfObjects;
@property(nonatomic) NSObject<IMDCoreRecentsProtocol> *recentsInstance; // @synthesize recentsInstance=_recentsInstance;
- (void)contactStoreDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

