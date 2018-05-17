//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface PUPhotoPickerRemoteSessionManager : NSObject
{
    NSArray *_allowedViewControlerClassNames;
    NSMutableDictionary *_viewControllerByRequestIdentifier;
    NSObject<OS_dispatch_queue> *_viewControllerByRequestIdentifierIsolationQueue;
}

+ (id)sharedPhotoPickerSessionManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *viewControllerByRequestIdentifierIsolationQueue; // @synthesize viewControllerByRequestIdentifierIsolationQueue=_viewControllerByRequestIdentifierIsolationQueue;
@property(retain, nonatomic) NSMutableDictionary *viewControllerByRequestIdentifier; // @synthesize viewControllerByRequestIdentifier=_viewControllerByRequestIdentifier;
@property(copy, nonatomic) NSArray *allowedViewControlerClassNames; // @synthesize allowedViewControlerClassNames=_allowedViewControlerClassNames;
- (void).cxx_destruct;
- (id)_popViewControllerForRequestIdentifier:(id)arg1;
- (_Bool)isAllowedViewControllerClassName:(id)arg1;
- (void)setViewController:(id)arg1 forRequestIdentifier:(id)arg2;
- (id)popViewControllerForRequestIdentifier:(id)arg1;
- (id)init;

@end
