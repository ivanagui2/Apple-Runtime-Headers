//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NFSessionCallbackInterface.h"
#import "NSObject.h"

@class NFTechnologyEvent;

@protocol NFFieldDetectSessionCallbacks <NSObject, NFSessionCallbackInterface>
- (void)didDetectTechnology:(NFTechnologyEvent *)arg1;
- (void)didDetectField:(BOOL)arg1;
@end
