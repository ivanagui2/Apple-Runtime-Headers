//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSHMDMetalSessionDrawable.h"

@class NSHMDIOSurfaceDrawable, NSHMDMetalSession, NSString;

@interface NSHMDMetalSessionDrawable : NSObject <NSHMDMetalSessionDrawable>
{
    NSHMDMetalSession *_session;
    NSHMDIOSurfaceDrawable *_drawable;
}

- (void)presentAtTime:(double)arg1;
- (void)present;
@property(readonly) id <MTLTexture> texture;
- (void)presentAtTimestamp:(double)arg1;
@property unsigned long long debugSignpost;
@property double inputTimeStamp;
@property(readonly) NSHMDMetalSession *session;
- (void)dealloc;
- (id)initWithSession:(id)arg1 surfaceDrawable:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
