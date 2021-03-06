//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityVisuals/NSCopying-Protocol.h>
#import <AccessibilityVisuals/NSSecureCoding-Protocol.h>

@class NSString;

@interface AXVMenuItem : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _hasSubmenu;
    NSString *_label;
    NSString *_keyboardShortcut;
    long long _tag;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) BOOL hasSubmenu; // @synthesize hasSubmenu=_hasSubmenu;
@property(copy, nonatomic) NSString *keyboardShortcut; // @synthesize keyboardShortcut=_keyboardShortcut;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_isEqualToMenuItem:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithLabel:(id)arg1;

@end

