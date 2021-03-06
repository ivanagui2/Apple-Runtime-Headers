//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXSharingSettings : PXSettings
{
    BOOL _showConfidentialityWarnings;
    BOOL _showInternalGIFExport;
    unsigned long long _confidentialityWarningsVersion;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long confidentialityWarningsVersion; // @synthesize confidentialityWarningsVersion=_confidentialityWarningsVersion;
@property(nonatomic) BOOL showInternalGIFExport; // @synthesize showInternalGIFExport=_showInternalGIFExport;
@property(nonatomic) BOOL showConfidentialityWarnings; // @synthesize showConfidentialityWarnings=_showConfidentialityWarnings;
- (id)debugDescription;
- (void)defaultValueDidChangeForKey:(id)arg1;
- (void)setDefaultValues;

@end

