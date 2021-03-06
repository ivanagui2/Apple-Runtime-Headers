//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ICScannerProperties : NSObject
{
    NSArray *_devicePreferredResolutions;
    NSArray *_availableFunctionalUnitTypes;
    id _selectedFunctionalUnit;
    id _lastSelectedFunctionalUnit;
    unsigned long long _transferMode;
    NSURL *_downloadsDirectory;
    NSString *_documentName;
    NSString *_documentUTI;
    NSString *_defaultUsername;
    BOOL _scanCanceled;
    BOOL _supportsICARawFileFormat;
    NSMutableDictionary *_scanContext;
    BOOL _requestedToCancelScan;
    BOOL _scanParamsRetained;
    unsigned int _maxMemoryBandSize;
    BOOL _numOpenSessionRetries;
    BOOL _available;
}

@property BOOL available; // @synthesize available=_available;
@property BOOL numOpenSessionRetries; // @synthesize numOpenSessionRetries=_numOpenSessionRetries;
@property unsigned int maxMemoryBandSize; // @synthesize maxMemoryBandSize=_maxMemoryBandSize;
@property BOOL scanParamsRetained; // @synthesize scanParamsRetained=_scanParamsRetained;
@property BOOL requestedToCancelScan; // @synthesize requestedToCancelScan=_requestedToCancelScan;
@property(retain) NSMutableDictionary *scanContext; // @synthesize scanContext=_scanContext;
@property BOOL supportsICARawFileFormat; // @synthesize supportsICARawFileFormat=_supportsICARawFileFormat;
@property BOOL scanCanceled; // @synthesize scanCanceled=_scanCanceled;
@property(copy) NSString *defaultUsername; // @synthesize defaultUsername=_defaultUsername;
@property(copy) NSString *documentUTI; // @synthesize documentUTI=_documentUTI;
@property(copy) NSString *documentName; // @synthesize documentName=_documentName;
@property(retain) NSURL *downloadsDirectory; // @synthesize downloadsDirectory=_downloadsDirectory;
@property unsigned long long transferMode; // @synthesize transferMode=_transferMode;
@property(retain) id lastSelectedFunctionalUnit; // @synthesize lastSelectedFunctionalUnit=_lastSelectedFunctionalUnit;
@property(retain) id selectedFunctionalUnit; // @synthesize selectedFunctionalUnit=_selectedFunctionalUnit;
@property(retain) NSArray *availableFunctionalUnitTypes; // @synthesize availableFunctionalUnitTypes=_availableFunctionalUnitTypes;
@property(retain) NSArray *devicePreferredResolutions; // @synthesize devicePreferredResolutions=_devicePreferredResolutions;
- (void)dealloc;

@end

