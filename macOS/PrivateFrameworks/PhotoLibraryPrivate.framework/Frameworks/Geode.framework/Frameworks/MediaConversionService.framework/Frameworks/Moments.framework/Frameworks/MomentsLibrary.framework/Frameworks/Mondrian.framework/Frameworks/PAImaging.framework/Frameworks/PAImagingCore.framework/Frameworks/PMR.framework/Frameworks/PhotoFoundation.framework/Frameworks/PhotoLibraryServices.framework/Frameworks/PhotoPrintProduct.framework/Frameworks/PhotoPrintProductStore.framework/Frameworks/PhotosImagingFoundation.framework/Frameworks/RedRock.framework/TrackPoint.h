//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedRock/NSCoding-Protocol.h>
#import <RedRock/NSCopying-Protocol.h>

@class ICCameraFile, NSDate, NSImage, NSString;

@interface TrackPoint : NSObject <NSCoding, NSCopying>
{
    ICCameraFile *_icaObject;
    double _timeInterval;
    double _longitude;
    double _latitude;
    int _type;
    long long _satelliteCount;
    long long _hdop;
    NSString *_uuid;
    NSImage *_image;
    long long _originalIndex;
    NSString *_imageTitle;
    NSString *_imageSubtitle;
}

@property(retain, nonatomic) NSString *imageSubtitle; // @synthesize imageSubtitle=_imageSubtitle;
@property(retain, nonatomic) NSString *imageTitle; // @synthesize imageTitle=_imageTitle;
@property(nonatomic) long long originalIndex; // @synthesize originalIndex=_originalIndex;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(nonatomic) long long satelliteCount; // @synthesize satelliteCount=_satelliteCount;
@property(nonatomic) long long hdop; // @synthesize hdop=_hdop;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) ICCameraFile *icaObject; // @synthesize icaObject=_icaObject;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithTimeInterval:(double)arg1 longitude:(double)arg2 latitude:(double)arg3 type:(int)arg4;
@property(readonly, nonatomic) NSDate *date;

@end

