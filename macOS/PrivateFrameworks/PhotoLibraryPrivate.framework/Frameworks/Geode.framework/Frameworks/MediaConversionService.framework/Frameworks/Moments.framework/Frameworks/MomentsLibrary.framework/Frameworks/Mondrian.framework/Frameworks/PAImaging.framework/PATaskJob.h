//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PAImaging/PAJob.h>

@interface PATaskJob : PAJob
{
    CDUnknownBlockType _task;
}

+ (id)jobWithTask:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)retire;
- (void)run:(id)arg1;

@end

