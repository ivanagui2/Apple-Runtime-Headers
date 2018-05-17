//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSString;

@interface AMResultsItem : NSObject
{
    id _object;
    NSString *_humanReadableName;
    NSImage *_icon;
    NSString *_iconPath;
    NSString *_UUID;
}

+ (id)resultsItemWithObject:(id)arg1;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (id)imageSubtitle;
- (id)imageTitle;
@property(readonly, nonatomic) NSString *imageUID;
@property(readonly, nonatomic) NSString *imageRepresentationType;
@property(readonly, nonatomic) NSImage *imageRepresentation;
@property(readonly, nonatomic) NSString *iconPath;
@property(readonly, nonatomic) NSImage *icon;
@property(readonly, nonatomic) id result;
@property(readonly, nonatomic) NSString *humanReadableName;
- (id)description;
- (id)initWithObject:(id)arg1;

@end
