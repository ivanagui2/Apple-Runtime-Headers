//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosImagingFoundation/IPAAutoSettings.h>

@class NSMutableDictionary;

@interface IPAManualAutoSettings : IPAAutoSettings
{
    NSMutableDictionary *_state;
}

- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)_applyArchiveDictionary:(id)arg1;
- (void)_archiveIntoDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end
