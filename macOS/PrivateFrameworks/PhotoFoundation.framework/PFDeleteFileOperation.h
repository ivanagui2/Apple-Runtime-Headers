//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoFoundation/PFFileOperation.h>

@interface PFDeleteFileOperation : PFFileOperation
{
    int _type;
}

@property int type; // @synthesize type=_type;
- (BOOL)performOperationForWorkContext:(id)arg1 atEnd:(CDUnknownBlockType)arg2;
- (unsigned long long)operation;
- (id)initWithSourcePath:(id)arg1 type:(int)arg2;
- (id)initWithSource:(id)arg1 type:(int)arg2;

@end
