//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ISSupport/ISS_DAVRequest.h>

@interface ISS_DMDAVGetProps : ISS_DAVRequest
{
}

+ (id)getPropsRequestWithSession:(id)arg1 URI:(id)arg2 properties:(id)arg3;
- (void)finalizeOperation;
- (id)infos;
- (id)initGetPropsWithSession:(id)arg1 URI:(id)arg2 properties:(id)arg3;

@end
