//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface ExpressMode : NSObject
{
}

+ (id)checkAppletCompatibility:(id)arg1 fastPath:(char *)arg2 error:(id *)arg3;
+ (BOOL)PerformActivations:(id)arg1 transceiver:(id)arg2 fastPath:(BOOL)arg3 seHasActivatedApplets:(char *)arg4 error:(id *)arg5;
+ (BOOL)configureSE:(id)arg1 transceiver:(id)arg2 seHasActivatedApplets:(char *)arg3 skipAllActivations:(BOOL)arg4 fastPath:(BOOL)arg5 error:(id *)arg6;
+ (id)SerializeConfigurationDataForSE:(id)arg1 fastPath:(BOOL)arg2 error:(id *)arg3;

@end
