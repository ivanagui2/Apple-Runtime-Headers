//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITMLKit/IKCSSParseObject.h>

@class NSString;

@interface IKCSSParseDeclaration : IKCSSParseObject
{
    _Bool _important;
    NSString *_name;
    struct _NSRange _nameRange;
    struct _NSRange _valueRange;
}

@property(nonatomic) _Bool important; // @synthesize important=_important;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct _NSRange valueRange; // @synthesize valueRange=_valueRange;
@property(nonatomic) struct _NSRange nameRange; // @synthesize nameRange=_nameRange;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
