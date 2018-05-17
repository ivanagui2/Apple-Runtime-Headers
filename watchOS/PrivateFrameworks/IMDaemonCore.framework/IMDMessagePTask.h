//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IMDMessagePTask : NSObject
{
    NSString *_guid;
    unsigned int _taskFlags;
}

@property(readonly, nonatomic) unsigned int taskFlags; // @synthesize taskFlags=_taskFlags;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void)compeletedTask:(unsigned int)arg1;
- (_Bool)needsProccesingFor:(unsigned int)arg1;
- (void)setTaskFlag:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithStoreDictionary:(id)arg1;
- (id)initWithGUID:(id)arg1;

@end
