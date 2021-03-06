//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorGizmo/NSSecureCoding-Protocol.h>

@class NSString, UIImage;

@interface BLTSettingsApplicationInfo : NSObject <NSSecureCoding>
{
    NSString *_remoteLocalizedName;
    UIImage *_icon;
}

+ (_Bool)supportsSecureCoding;
+ (id)applicationInfoWithRemoteLocalizedName:(id)arg1 icon:(id)arg2;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *remoteLocalizedName; // @synthesize remoteLocalizedName=_remoteLocalizedName;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRemoteLocalizedName:(id)arg1 icon:(id)arg2;

@end

