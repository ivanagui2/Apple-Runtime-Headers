//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKUpNextElementAction.h>

@class NTKUpNextElementContent;

@interface NTKUpNextElementDisplayAction : NTKUpNextElementAction
{
    NTKUpNextElementContent *_content;
}

@property(readonly, nonatomic) NTKUpNextElementContent *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContent:(id)arg1;
- (id)init;

@end
