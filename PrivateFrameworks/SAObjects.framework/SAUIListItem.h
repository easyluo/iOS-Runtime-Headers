/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class <SAAceSerializable>, NSString, NSArray;

@interface SAUIListItem : SAAceView  {
}

@property(copy) NSArray * commands;
@property(retain) <SAAceSerializable> * object;
@property(copy) NSString * selectionResponse;
@property(copy) NSString * selectionText;
@property(copy) NSString * speakableSelectionResponse;
@property(copy) NSString * title;

+ (id)listItem;
+ (id)listItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (void)setObject:(id)arg1;
- (id)title;
- (id)object;
- (void)setTitle:(id)arg1;
- (id)selectionResponse;
- (void)setSelectionResponse:(id)arg1;
- (id)selectionText;
- (void)setSelectionText:(id)arg1;
- (id)speakableSelectionResponse;
- (void)setSpeakableSelectionResponse:(id)arg1;
- (id)encodedClassName;
- (void)setCommands:(id)arg1;
- (id)commands;

@end