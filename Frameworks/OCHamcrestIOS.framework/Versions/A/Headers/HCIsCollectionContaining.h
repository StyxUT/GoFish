//
//  OCHamcrest - HCIsCollectionContaining.h
//  Copyright 2011 hamcrest.org. See LICENSE.txt
//
//  Created by: Jon Reid
//

    // Inherited
#import <OCHamcrestIOS/HCBaseMatcher.h>


/**
    Matches a collection if any element satisfies a given matcher.
    @ingroup collection_matchers
 */
@interface HCIsCollectionContaining : HCBaseMatcher
{
    id<HCMatcher> elementMatcher;
}

+ (id) isCollectionContaining:(id<HCMatcher>)anElementMatcher;
- (id) initWithMatcher:(id<HCMatcher>)anElementMatcher;

@end


/**
    Matches a collection if any element satifies a given matcher.
 
    @b Synonym: @ref hasItem
    @param item  A matcher, or a value for @ref equalTo matching.
    @see HCIsCollectionContaining
    @ingroup collection_matchers
 */
OBJC_EXPORT id<HCMatcher> HC_hasItem(id item);

/**
    Synonym for @ref HC_hasItem, available if @c HC_SHORTHAND is defined.
    @ingroup collection_matchers
 */
#ifdef HC_SHORTHAND
    #define hasItem HC_hasItem
#endif


/**
    Matches a collection if all matchers are satisfied by any of the collection's elements.
 
    @b Synonym: @ref hasItems
    @param items  Comma-separated list of matchers - or values for @ref equalTo matching - ending with @c nil.
    @see HCIsCollectionContaining
    @ingroup collection_matchers
 */
OBJC_EXPORT id<HCMatcher> HC_hasItems(id items, ...);

/**
    Synonym for @ref HC_hasItems, available if @c HC_SHORTHAND is defined.
    @ingroup collection_matchers
 */
#ifdef HC_SHORTHAND
    #define hasItems HC_hasItems
#endif
