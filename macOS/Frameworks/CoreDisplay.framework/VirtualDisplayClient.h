//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface VirtualDisplayClient : NSObject
{
    unsigned int _vendorID;
    unsigned int _productID;
    unsigned int _serialNum;
    NSString *_name;
    struct CGSize _sizeInMillimeters;
    unsigned int _maxPixelsWide;
    unsigned int _maxPixelsHigh;
    struct CGPoint _redPrimary;
    struct CGPoint _greenPrimary;
    struct CGPoint _bluePrimary;
    struct CGPoint _whitePoint;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _terminationHandler;
    void *_arg;
    unsigned int _displayID;
    unsigned int _serverRPC_port;
    unsigned int _proxyRPC_port;
    unsigned int _clientHandler_port;
}

@property(readonly, nonatomic) unsigned int displayID; // @synthesize displayID=_displayID;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned int serialNum; // @synthesize serialNum=_serialNum;
@property(readonly, nonatomic) unsigned int productID; // @synthesize productID=_productID;
@property(readonly, nonatomic) unsigned int vendorID; // @synthesize vendorID=_vendorID;
- (unsigned int)proxyGone;
- (BOOL)applyModes:(CDStruct_1c8e0384 *)arg1 count:(unsigned int)arg2 hiDPI:(unsigned int)arg3;
- (void)dealloc;
- (id)initWithVendorID:(unsigned int)arg1 productID:(unsigned int)arg2 serialNum:(unsigned int)arg3 name:(id)arg4 sizeInMillimeters:(struct CGSize)arg5 maxPixelsWide:(unsigned int)arg6 maxPixelsHigh:(unsigned int)arg7 redPrimary:(struct CGPoint)arg8 greenPrimary:(struct CGPoint)arg9 bluePrimary:(struct CGPoint)arg10 whitePoint:(struct CGPoint)arg11 queue:(id)arg12 terminationHandler:(CDUnknownBlockType)arg13 arg:(void *)arg14;
- (void)unplug;
- (BOOL)plugin;

@end

