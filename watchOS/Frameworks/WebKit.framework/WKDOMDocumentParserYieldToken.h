//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface WKDOMDocumentParserYieldToken : NSObject
{
    struct unique_ptr<WebCore::DocumentParserYieldToken, std::__1::default_delete<WebCore::DocumentParserYieldToken>> _token;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithDocument:(struct Document *)arg1;

@end
