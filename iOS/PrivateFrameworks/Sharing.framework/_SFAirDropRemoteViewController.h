//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <Sharing/SFAirDropViewServiceHostProtocol-Protocol.h>

@class NSExtension, NSString;
@protocol NSCopying><NSObject, SFAirDropViewServiceHostProtocol;

@interface _SFAirDropRemoteViewController : _UIRemoteViewController <SFAirDropViewServiceHostProtocol>
{
    id <SFAirDropViewServiceHostProtocol> _airDropHost;
    NSExtension *_extension;
    id <NSCopying><NSObject> _extensionRequestIdentifier;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (void)instantiateViewControllerWithInputItems:(id)arg1 connectionHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) id <NSCopying><NSObject> extensionRequestIdentifier; // @synthesize extensionRequestIdentifier=_extensionRequestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(nonatomic) __weak id <SFAirDropViewServiceHostProtocol> airDropHost; // @synthesize airDropHost=_airDropHost;
- (void).cxx_destruct;
- (void)airDropViewServiceDidRequestDismissal;
- (void)airDropViewServiceRequestingSharedItemsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)airDropExtensionService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

