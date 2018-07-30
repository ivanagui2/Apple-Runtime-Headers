//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface SFSafariViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _entersReaderIfAvailable;
    _Bool _barCollapsingEnabled;
    int _redirectNotificationBehavior;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool barCollapsingEnabled; // @synthesize barCollapsingEnabled=_barCollapsingEnabled;
@property(nonatomic) _Bool entersReaderIfAvailable; // @synthesize entersReaderIfAvailable=_entersReaderIfAvailable;
@property(nonatomic) int _redirectNotificationBehavior; // @synthesize _redirectNotificationBehavior;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
