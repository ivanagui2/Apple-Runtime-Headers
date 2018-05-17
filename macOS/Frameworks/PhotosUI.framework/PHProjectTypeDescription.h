//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSImage, NSString;

@interface PHProjectTypeDescription : NSObject <NSSecureCoding>
{
    NSString *_projectType;
    NSString *_localizedTitle;
    NSString *_localizedDescription;
    NSImage *_image;
    NSArray *_subtypeDescriptions;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *subtypeDescriptions; // @synthesize subtypeDescriptions=_subtypeDescriptions;
@property(readonly, copy, nonatomic) NSImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, copy, nonatomic) NSString *projectType; // @synthesize projectType=_projectType;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithProjectType:(id)arg1 title:(id)arg2 description:(id)arg3 image:(id)arg4;
- (id)initWithProjectType:(id)arg1 title:(id)arg2 description:(id)arg3 image:(id)arg4 subtypeDescriptions:(id)arg5;

@end
