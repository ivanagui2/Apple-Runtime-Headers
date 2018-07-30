//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebItemProviderRegistrar.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface WebItemProviderWritableObjectRegistrar : NSObject <WebItemProviderRegistrar>
{
    struct RetainPtr<id<UIItemProviderWriting>> _representingObject;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)registerItemProvider:(id)arg1;
@property(readonly, nonatomic) id <NSItemProviderWriting> representingObjectForClient;
@property(readonly, nonatomic) id <UIItemProviderWriting> representingObject;
- (id)initWithObject:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSData *dataForClient;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *typeIdentifierForClient;

@end
