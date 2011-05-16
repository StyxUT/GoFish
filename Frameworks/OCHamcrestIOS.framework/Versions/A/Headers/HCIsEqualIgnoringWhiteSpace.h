//
//  OCHamcrest - HCIsEqualIgnoringWhiteSpace.h
//  Copyright 2011 hamcrest.org. See LICENSE.txt
//
//  Created by: Jon Reid
//

    // Inherited
#import <OCHamcrestIOS/HCBaseMatcher.h>


/**
    Tests if a string is equal to another string, ignoring any changes in whitespace.
    @ingroup text_matchers
*/
@interface HCIsEqualIgnoringWhiteSpace : HCBaseMatcher
{
    NSString* originalString;
    NSString* strippedString;
}

+ (id) isEqualIgnoringWhiteSpace:(NSString*)aString;
- (id) initWithString:(NSString*)aString;

@end


/**
    Tests if a string is equal to another string, ignoring any changes in whitespace.
    
    @b Synonym: @ref equalToIgnoringWhiteSpace
    @see HCIsEqualIgnoringWhiteSpace
    @ingroup text_matchers
 */
OBJC_EXPORT id<HCMatcher> HC_equalToIgnoringWhiteSpace(NSString* string);

/**
    Synonym for @ref HC_equalToIgnoringWhiteSpace, available if @c HC_SHORTHAND is defined.
    @ingroup text_matchers
 */
#ifdef HC_SHORTHAND
    #define equalToIgnoringWhiteSpace HC_equalToIgnoringWhiteSpace
#endif


/** @} */
