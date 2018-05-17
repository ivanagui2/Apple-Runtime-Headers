//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, WLKUIAccessViewController;

@interface WLKUIOnboardingController : NSObject
{
    WLKUIAccessViewController *_accessVC;
    NSArray *_bundleIDs;
    NSDictionary *_options;
    CDUnknownBlockType _completionHandler;
}

+ (id)eligibleBundleIDs;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_runConsentFlow;
- (void)presentForBundleIDs:(id)arg1 withOptions:(id)arg2;
- (void)present;
- (void)dismiss;
- (void)dealloc;

@end
