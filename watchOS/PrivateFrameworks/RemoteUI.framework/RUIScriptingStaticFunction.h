//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RUIScriptingStaticFunction : NSObject
{
    const char *_identifier;
    CDUnknownFunctionPointerType _function;
    int _JSPropertyAttributes;
}

@property(nonatomic) int JSPropertyAttributes; // @synthesize JSPropertyAttributes=_JSPropertyAttributes;
@property(nonatomic) CDUnknownFunctionPointerType function; // @synthesize function=_function;
@property(nonatomic) const char *identifier; // @synthesize identifier=_identifier;
- (id)description;

@end
