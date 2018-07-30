//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "USSXPCEncodable.h"

@class NSString;

@interface USSSceneActiveRequest : NSObject <USSXPCEncodable>
{
    BOOL _isWindowOnActiveSpace;
    BOOL _isWindowVisible;
    BOOL _isAppActive;
    BOOL _isAppHidden;
    NSString *_identifier;
}

+ (id)sceneActiveRequestForScene:(id)arg1 isWindowOnActiveSpace:(BOOL)arg2 isWindowVisible:(BOOL)arg3 isAppActive:(BOOL)arg4 isAppHidden:(BOOL)arg5;
@property(nonatomic) BOOL isAppHidden; // @synthesize isAppHidden=_isAppHidden;
@property(nonatomic) BOOL isAppActive; // @synthesize isAppActive=_isAppActive;
@property(nonatomic) BOOL isWindowVisible; // @synthesize isWindowVisible=_isWindowVisible;
@property(nonatomic) BOOL isWindowOnActiveSpace; // @synthesize isWindowOnActiveSpace=_isWindowOnActiveSpace;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initCommon;

@end
