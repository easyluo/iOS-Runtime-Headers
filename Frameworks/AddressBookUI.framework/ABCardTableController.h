/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, NSString, ABCardController, ABPersonImageView, ABRingtoneManager, ABCardNameControl, ABCardRecentDatesView, NSMutableArray, UIView, ABActionsController, ABCardTitleView;



@interface ABCardTableController : NSObject 
{
    ABCardController *_cardController;
    struct __CFArray { } *_optionalProperties;
    NSMutableArray *_propertyGroups;
    NSMutableArray *_editablePropertyGroups;
    void *_displayedPerson;
    BOOL _editable;
    BOOL _allowsActions;
    BOOL _allowsDelete;
    BOOL _showMapActions;
    ABCardNameControl *_nameControl;
    ABCardTitleView *_customizedNameView;
    ABPersonImageView *_imageView;
    UIView *_textActionView;
    UIView *_addToFavoritesActionView;
    ABActionsController *_phoneActionsController;
    NSArray *_dates;
    ABCardRecentDatesView *_datesView;
    NSString *_datesMessageFormat;
    NSInteger _highlightIdentifier;
    BOOL _highlightImportant;
    NSInteger _highlightProperty;
    ABRingtoneManager *_ringtoneManager;
}


- (id)initWithCardController:(id)arg1;
- (void)dealloc;
- (id)personImageView;
- (id)itemViewForPerson:(void*)arg1 property:(NSInteger)arg2 identifier:(NSInteger)arg3 withTable:(id)arg4;
- (void)setDisplayedPerson:(void*)arg1;
- (void)displayedPersonWasModified:(void*)arg1;
- (void)setShowsMapActions:(BOOL)arg1;
- (void*)displayedPerson;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setAllowsCardDeletion:(BOOL)arg1;
- (BOOL)allowsCardDeletion;
- (BOOL)hasAdditionalProperties;
- (BOOL)isPropertyOptional:(NSInteger)arg1;
- (void*)policyForPerson:(void*)arg1;
- (id)createPropertyGroupsForEditing:(BOOL)arg1 person:(void*)arg2 withDisplayedProperties:(struct __CFArray { }*)arg3 ignoringValue:(id)arg4;
- (id)createPropertyGroupsForEditing:(BOOL)arg1;
- (id)propertyGroupsForEditing:(BOOL)arg1;
- (struct __CFArray { }*)createAdditionalPropertiesArray;
- (id)propertyGroups;
- (BOOL)isCardPartiallyFilled;
- (BOOL)shouldShowRingtoneCellWhenEditing:(BOOL)arg1;
- (id)ringtoneManager;
- (void)setIsEditable:(BOOL)arg1 animated:(BOOL)arg2 withTable:(id)arg3;
- (BOOL)isEditable;
- (void)setHighlightedItemForProperty:(NSInteger)arg1 withIdentifier:(NSInteger)arg2 important:(BOOL)arg3;
- (BOOL)performDefaultActionForPerson:(void*)arg1 property:(NSInteger)arg2 identifier:(NSInteger)arg3;
- (void)setNameIsCustomized:(BOOL)arg1;
- (void)setTagLine:(id)arg1;
- (id)createDateMessageString;
- (void)setDates:(id)arg1 withMessageFormat:(id)arg2;
- (void)setTitleColor:(id)arg1;
- (void)setTitleIsImportant:(BOOL)arg1;
- (void)setTitle:(id)arg1 withMessage:(id)arg2;
- (BOOL)hasInlineActions;
- (BOOL)hasDeleteButton;
- (BOOL)hasMapActions;
- (NSInteger)firstPropertyGroupIndex;
- (void)getFirstPropertyGroupIndex:(NSInteger*)arg1 lastPropertyGroupIndex:(NSInteger*)arg2;
- (NSInteger)phoneTableGroupIndex;
- (NSInteger)inlineActionsTableGroupIndex;
- (void)updateNameControlSizeWithTableSize:(struct CGSize { float x1; float x2; })arg1 outHeight:(float*)arg2;
- (id)createNameCellWithTableSize:(struct CGSize { float x1; float x2; })arg1;
- (id)createRecentDatesCellWithTableSize:(struct CGSize { float x1; float x2; })arg1;
- (id)createValueCellForRow:(NSInteger)arg1 inGroup:(NSInteger)arg2 withTableSize:(struct CGSize { float x1; float x2; })arg3;
- (id)createDeleteCellWithTableSize:(struct CGSize { float x1; float x2; })arg1;
- (id)createAddPropertiesCellWithTableSize:(struct CGSize { float x1; float x2; })arg1;
- (id)titleForNoValueWithProperty:(NSInteger)arg1;
- (id)createNoValueCellWithTableSize:(struct CGSize { float x1; float x2; })arg1;
- (id)propertyGroupForProperty:(NSInteger)arg1;
- (void)performActionFromSender:(id)arg1 buttonClicked:(NSInteger)arg2;
- (void)alertSheet:(id)arg1 buttonClicked:(NSInteger)arg2;
- (void)inlineActionButtonClicked:(id)arg1;
- (BOOL)isPhonePropertyDisplayed;
- (BOOL)shouldShowAddToFavoritesAction;
- (BOOL)shouldShowTextAction;
- (id)createActionCellWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 font:(id)arg2;
- (id)createActionCellWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)createActionButtonWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 tag:(NSInteger)arg2 font:(id)arg3;
- (id)createActionsCellWithTableSize:(struct CGSize { float x1; float x2; })arg1;
- (id)createMapDirectionsTo:(BOOL)arg1 cellWithTableSize:(struct CGSize { float x1; float x2; })arg2;
- (void)addActionCellWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 width:(float)arg4 height:(float)arg5 toCell:(id)arg6 atPosition:(float*)arg7;
- (id)createAddressBookAndSharingActionCellWithTarget:(id)arg1 width:(float)arg2 showAddToAddressBook:(BOOL)arg3 showAddToBookmarks:(BOOL)arg4 showShareLocation:(BOOL)arg5;
- (id)createMapAddToBookmarksCellWithTableSize:(struct CGSize { float x1; float x2; })arg1;
- (void)reloadPhoneFavoritesInTable:(id)arg1;
- (void)reloadNameData;
- (NSInteger)numberOfGroupsInPreferencesTable:(id)arg1;
- (NSInteger)preferencesTable:(id)arg1 numberOfRowsInGroup:(NSInteger)arg2;
- (id)preferencesTable:(id)arg1 cellForRow:(NSInteger)arg2 inGroup:(NSInteger)arg3;
- (float)preferencesTable:(id)arg1 heightForRow:(NSInteger)arg2 inGroup:(NSInteger)arg3 withProposedHeight:(float)arg4;
- (BOOL)table:(id)arg1 canDeleteRow:(NSInteger)arg2;
- (void)removeValueAtIndex:(NSInteger)arg1 fromPropertyGroup:(id)arg2;
- (void)performDeleteForCell:(id)arg1;
- (void)preferencesTable:(id)arg1 deleteRow:(NSInteger)arg2 inGroup:(NSInteger)arg3 outDeletionItemCopy:(id*)arg4;
- (void)preferencesTable:(id)arg1 deleteRow:(NSInteger)arg2 inGroup:(NSInteger)arg3 outDeletionItemCopy:(id*)arg4 outReloadRow:(NSInteger*)arg5;
- (BOOL)table:(id)arg1 canInsertAtRow:(NSInteger)arg2;
- (void)tableSelectionDidChange:(id)arg1;
- (BOOL)table:(id)arg1 showDisclosureForRow:(NSInteger)arg2;
- (BOOL)table:(id)arg1 shouldIndentRow:(NSInteger)arg2;

@end