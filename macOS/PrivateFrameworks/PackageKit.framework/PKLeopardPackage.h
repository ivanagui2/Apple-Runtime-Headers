//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PackageKit/PKPackage.h>

@interface PKLeopardPackage : PKPackage
{
}

- (id)_staticObsoleteFilesOrRecursiveDirectories;
- (id)_staticObsoleteDirectories;
- (id)_staticObsoleteFiles;
- (id)_staticObsoleteListAtRelativeSubpath:(id)arg1;
- (id)scriptsExtractorWithDestination:(id)arg1 error:(id *)arg2;
- (id)scriptsSubpath;
- (id)payloadExtractorWithDestination:(id)arg1 externalRoot:(id)arg2 error:(id *)arg3;
- (id)BOMData;
- (id)initWithURL:(id)arg1;
- (id)_archiveSubpathWithFileName:(id)arg1;

@end

