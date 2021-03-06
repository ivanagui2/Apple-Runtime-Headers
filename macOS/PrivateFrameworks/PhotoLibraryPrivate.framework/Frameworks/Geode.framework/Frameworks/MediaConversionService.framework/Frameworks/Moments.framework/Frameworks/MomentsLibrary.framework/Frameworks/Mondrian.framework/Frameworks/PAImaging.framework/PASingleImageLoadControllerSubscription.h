//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PAImageType, PASingleImageLoadController;

@interface PASingleImageLoadControllerSubscription : NSObject
{
    struct CGSize _size;
    BOOL _offscreen;
    BOOL _isCancelled;
    BOOL _isReady;
    BOOL _isDelivered;
    BOOL _loadFailed;
    BOOL _cacheChecked;
    BOOL _notified;
    int _priority;
    CDUnknownBlockType _readyHandler;
    CDUnknownBlockType _actionHandler;
    CDUnknownBlockType _willNotDeliverHandler;
    PAImageType *_imageType;
    PASingleImageLoadController *_controller;
}

+ (void)initialize;
@property BOOL notified; // @synthesize notified=_notified;
@property BOOL cacheChecked; // @synthesize cacheChecked=_cacheChecked;
@property __weak PASingleImageLoadController *controller; // @synthesize controller=_controller;
@property BOOL loadFailed; // @synthesize loadFailed=_loadFailed;
@property BOOL isDelivered; // @synthesize isDelivered=_isDelivered;
@property BOOL isReady; // @synthesize isReady=_isReady;
@property BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property BOOL offscreen; // @synthesize offscreen=_offscreen;
@property int priority; // @synthesize priority=_priority;
@property struct CGSize size; // @synthesize size=_size;
@property(retain) PAImageType *imageType; // @synthesize imageType=_imageType;
@property(copy) CDUnknownBlockType willNotDeliverHandler; // @synthesize willNotDeliverHandler=_willNotDeliverHandler;
@property(copy) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(copy) CDUnknownBlockType readyHandler; // @synthesize readyHandler=_readyHandler;
- (void).cxx_destruct;
- (id)description;
- (void)deliverLoadedImage:(id)arg1;
- (BOOL)checkCachedImageAndDeliver;
- (void)willNotDeliver:(id)arg1 cacheKey:(id)arg2;
- (id)imageRequest;
- (id)requestQueue;
- (void)notify:(int)arg1;
- (BOOL)shouldNotifyFor:(id)arg1;
- (id)cacheHint;
- (unsigned int)qos;
- (long long)loadPriority;
- (void)cancel;
- (void)detachHandlers;
- (void)ready;
- (void)willAddToController:(id)arg1;
- (void)dealloc;
- (id)initWithImageType:(id)arg1 readyHandler:(id)arg2;

@end

