//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _NSScrollingConcurrentSharedData : NSObject
{
    struct _opaque_pthread_mutex_t _synchMutex;
    struct CGPoint _canonicalClipBoundsOrigin;
    struct CGPoint _velocity;
    BOOL _isDrawingVisibleRect;
    struct CGRect _lastValidRenderedContentRect;
    struct CGRect _documentFrame;
    struct NSEdgeInsets _contentInsets;
    struct CGSize _clipViewSize;
    struct CGPoint _clipViewOrigin;
    double _progress;
    double _lastScrollDirection;
    double _lastFastFrameTimestamp;
    long long _referencePageNumber;
    long long _swipeCount;
}

- (void)threadSafePropertyAccess:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithConstantData:(id)arg1;
- (id)init;

@end
