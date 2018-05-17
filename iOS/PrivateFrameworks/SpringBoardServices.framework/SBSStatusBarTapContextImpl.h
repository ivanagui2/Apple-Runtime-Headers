//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "SBSStatusBarTapContext.h"

@interface SBSStatusBarTapContextImpl : NSObject <NSSecureCoding, SBSStatusBarTapContext>
{
    int _styleOverride;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int styleOverride; // @synthesize styleOverride=_styleOverride;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyleOverride:(int)arg1;

@end
