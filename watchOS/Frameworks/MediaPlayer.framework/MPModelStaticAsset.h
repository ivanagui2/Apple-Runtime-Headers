//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class NSURL;

@interface MPModelStaticAsset : MPModelObject
{
}

+ (id)__url_KEY;
+ (id)__mediaType_KEY;
+ (id)__flavorType_KEY;
+ (id)__duration_KEY;

// Remaining properties
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic) int flavorType; // @dynamic flavorType;
@property(nonatomic) int mediaType; // @dynamic mediaType;
@property(copy, nonatomic) NSURL *url; // @dynamic url;

@end
