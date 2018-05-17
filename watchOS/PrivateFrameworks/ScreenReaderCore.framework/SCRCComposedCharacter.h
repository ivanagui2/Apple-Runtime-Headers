//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCRCComposedCharacter : NSObject
{
    unsigned int _originalRepresentationLength;
    unsigned int _normalFormDRepresentationLength;
    unsigned int _normalFormKCRepresentationLength;
    int *_originalRepresentation;
    int *_normalFormDRepresentation;
    int *_normalFormKCRepresentation;
    long _originalCombinedCharacterLength;
    struct __CFString *_originalCombinedCharacter;
}

- (unsigned int)formKCLength;
- (unsigned int)formDLength;
- (unsigned int)originalLength;
- (unsigned int)length;
- (_Bool)containsUpperCase;
- (_Bool)_formKCContaintsUpperCase;
- (int)originalFromCharAtIndex:(unsigned int)arg1;
- (int)formKCCharAtIndex:(unsigned int)arg1;
- (int)formDCharAtIndex:(unsigned int)arg1;
- (int)charAtIndex:(unsigned int)arg1;
- (void)_buildFormKC;
- (void)_buildFormD;
- (struct __CFString *)copyUnicodeDescriptionString;
- (struct __CFString *)originalString;
- (_Bool)isEqualToUChar32:(int)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithComposedCharacter:(struct __CFString *)arg1;
- (id)_initWithComposedCharacter:(struct __CFString *)arg1;
- (id)initWithCharacter:(int)arg1;
- (id)_initWithSimpleCharacter:(int)arg1;
- (id)_initWithCharacter:(int)arg1;

@end
