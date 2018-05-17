//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSString;

@interface FBSSceneIdentity : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>
{
    NSString *_identifier;
    NSString *_workspaceIdentifier;
}

+ (id)identityForIdentifier:(id)arg1 workspaceIdentifier:(id)arg2;
+ (id)identityForIdentifier:(id)arg1;
+ (id)identity;
@property(copy, nonatomic) NSString *workspaceIdentifier; // @synthesize workspaceIdentifier=_workspaceIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
