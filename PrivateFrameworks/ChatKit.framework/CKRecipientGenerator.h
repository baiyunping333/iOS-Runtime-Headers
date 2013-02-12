/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSArray;

@interface CKRecipientGenerator : NSObject {
    void *_addressBook;
    NSArray *_searchABPropertyTypes;
}

@property(retain) NSArray *searchABPropertyTypes;

- (void)_appendSearchResults:(id)arg1 identifiers:(id)arg2 abPropertyType:(NSInteger)arg3 toArray:(id)arg4;
- (void)dealloc;
- (id)recipientWithAddress:(id)arg1;
- (id)recipientWithRecord:(void*)arg1 property:(NSInteger)arg2 identifier:(NSInteger)arg3;
- (id)resultsForText:(id)arg1;
- (id)searchABPropertyTypes;
- (void)setSearchABPropertyTypes:(id)arg1;

@end