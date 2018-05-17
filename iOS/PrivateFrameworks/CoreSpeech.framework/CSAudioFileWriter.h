//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface CSAudioFileWriter : NSObject
{
    _Bool isWriting;
    struct OpaqueExtAudioFile *fFile;
    struct AudioStreamBasicDescription inASBD;
    struct AudioStreamBasicDescription outASBD;
    NSURL *_fileURL;
}

@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (short)addSamples:(const void *)arg1 len:(long long)arg2;
- (void)close;
- (void)dealloc;
- (id)initWithURL:(id)arg1 inputFormat:(struct AudioStreamBasicDescription)arg2 outputFormat:(struct AudioStreamBasicDescription)arg3;

@end
