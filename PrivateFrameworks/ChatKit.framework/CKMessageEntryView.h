/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKContentEntryView, UIButton, UIImageView, UILabel, UIPanGestureRecognizer, UIView;

@interface CKMessageEntryView : UIImageView <UIScrollViewDelegate> {
    int _animationState;
    unsigned int _characterCountDenominator;
    UILabel *_characterCountLabel;
    unsigned int _characterCountNumerator;
    CKContentEntryView *_contentField;
    id _delegate;
    BOOL _dimmed;
    UIView *_dimmingView;
    UIView *_inputFieldBackground;
    UIImageView *_inputFieldCover;
    BOOL _isCharacterCountVisible;
    BOOL _keyboardVisible;
    UIPanGestureRecognizer *_panGestureRecognizer;
    id _panGestureRecognizerBlock;
    UIButton *_photoButton;
    UIImageView *_roundedBottomLeftCorner;
    UIButton *_sendButton;
    int _sendButtonColor;
    BOOL _supportsAttachments;
    BOOL _wasFirstResponderBeforeBubblizing;
}

@property int animationState;
@property id delegate;
@property(getter=isDimmed) BOOL dimmed;
@property(getter=isKeyboardVisible) BOOL keyboardVisible;
@property(copy) id panGestureRecognizerBlock;
@property(readonly) UIButton * photoButton;
@property int sendButtonColor;

+ (float)defaultHeight;
+ (float)defaultWidthInPortrait;
+ (float)defaultWidthInPortraitSupportsAttachments:(BOOL)arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })entryAreaViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 supportsAttachments:(BOOL)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })photoButtonFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 supportsAttachments:(BOOL)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sendButtonFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 supportsAttachments:(BOOL)arg2;

- (void)_handleUIApplicationResumed:(id)arg1;
- (void)_updateCharacterCountLabel;
- (void)_updateSendButtonColor;
- (int)animationState;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })balloonViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })characterCountFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)ckContentEntryViewContentSizeChanged:(id)arg1 height:(float)arg2 animate:(BOOL)arg3;
- (void)ckContentEntryViewPressedSendButton:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentEntryFrame:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFieldViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (float)defaultWidthInPortrait;
- (id)delegate;
- (struct CGSize { float x1; float x2; })desiredSize;
- (void)disableSendButton;
- (unsigned int)displayedLines;
- (void)enableSendButton;
- (id)entryField;
- (void)handlePan:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 supportsAttachments:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isCharacterCountVisible;
- (BOOL)isDimmed;
- (BOOL)isKeyboardVisible;
- (void)layoutSubviews;
- (id)panGestureRecognizerBlock;
- (id)photoButton;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)scrollToBottom:(BOOL)arg1;
- (void)send:(id)arg1;
- (int)sendButtonColor;
- (void)setAnimationState:(int)arg1;
- (void)setCharacterCountNumerator:(unsigned int)arg1 denominator:(unsigned int)arg2;
- (void)setCharacterCountVisible:(BOOL)arg1;
- (void)setDefaultText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmed:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setKeyboardVisible:(BOOL)arg1;
- (void)setPanGestureRecognizerBlock:(id)arg1;
- (void)setSendButtonColor:(int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateForSettingsChange;
- (void)updateSendButtonTitle:(id)arg1;

@end
