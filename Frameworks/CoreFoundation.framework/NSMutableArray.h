/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */



@interface NSMutableArray : NSArray 
{
}

+ (id)arrayWithCapacity:(NSUInteger)arg1;

- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)replaceObjectAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (void)addObject:(id)arg1;
- (void)exchangeObjectAtIndex:(NSUInteger)arg1 withObjectAtIndex:(NSUInteger)arg2;
- (void)exchange:(NSUInteger)arg1 :(NSUInteger)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 withObjects:(id*)arg2 count:(NSUInteger)arg3;
- (void)replaceObjectsInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 withObjectsFromArray:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 withObjectsFromArray:(id)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (void)addObjectsFromArray:(id)arg1;
- (void)setObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setArray:(id)arg1;
- (void)removeAllObjects;
- (void)removeLastObject;
- (void)removeObjectsInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)removeObject:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 identical:(BOOL)arg3;
- (void)removeObject:(id)arg1;
- (void)removeObject:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)removeObjectIdenticalTo:(id)arg1;
- (void)removeObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)removeObjectsInArray:(id)arg1;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)initWithObjects:(id*)arg1 count:(NSUInteger)arg2;
- (Class)classForCoder;
- (void)sortUsingFunction:(int (*)())arg1 context:(void*)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)removeObjectsFromIndices:(NSUInteger*)arg1 numIndices:(NSUInteger)arg2;
- (void)sortUsingFunction:(int (*)())arg1 context:(void*)arg2;
- (void)sortUsingSelector:(SEL)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (void)sortUsingDescriptors:(id)arg1;
- (void)addObjectsFromArray:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)push:(void*)arg1;
- (void*)pop;
- (void*)top;
- (void)_kb_reverse;
- (void)abPush:(id)arg1;
- (id)abPop;
- (id)abTop;
- (void)abSortViewsTopToBottom;
- (void)setObject:(id)arg1 atIndex:(NSInteger)arg2;
- (NSUInteger)indexWhereObjectWouldBeInserted:(id)arg1 usingSortFunction:(int (*)())arg2 context:(void*)arg3;
- (NSUInteger)insertObject:(id)arg1 usingSortFunction:(int (*)())arg2 context:(void*)arg3;
- (NSUInteger)indexOfObject:(id)arg1 usingSortFunction:(int (*)())arg2 context:(void*)arg3;
- (BOOL)addObjectIfAbsent:(id)arg1;
- (BOOL)addObjectIfAbsentAccordingToEquals:(id)arg1;
- (void)addSearchResult:(id)arg1;
- (void)addSearchResultInAscendingLat:(id)arg1;
- (void)addSearchResultsFromArray:(id)arg1;
- (void)addPin:(id)arg1;
- (void)addMessageEntry:(id)arg1;
- (id)top;
- (void)push:(id)arg1;
- (id)pop;

@end