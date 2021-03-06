/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <_UIPeripheralHostCustomTransition>, CADisplayLink, NSMutableArray, NSMutableDictionary, NSMutableSet, UIInputViewPostPinningReloadState, UIInputViewSet, UIInputViewTransition, UIKeyboard, UIKeyboardAutomatic, UIKeyboardRotationState, UIPanGestureRecognizer, UIPeripheralHostState, UIPeripheralHostView, UIResponder, UIScrollView, UITextEffectsWindow, UIView;

@interface UIPeripheralHost : NSObject <UIScrollViewIntersectionDelegate, UIKeyboardSplitTransitionDelegate, UIGestureRecognizerDelegate> {
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    float _ambiguousControlCenterActivationMargin;
    BOOL _animateCornerRefresh;
    BOOL _animationFencingEnabled;
    NSMutableArray *_animationStyleStack;
    BOOL _automaticAppearanceEnabled;
    BOOL _automaticAppearanceEnabledInternal;
    UIKeyboardAutomatic *_automaticKeyboard;
    BOOL _automaticKeyboardAnimatingIn;
    BOOL _automaticKeyboardAnimatingOut;
    int _automaticKeyboardState;
    BOOL _blockedReloadInputViewsForDictation;
    id _bounceCompletionBlock;
    } _clippingKeyboardAdjustmentEnd;
    } _clippingKeyboardAdjustmentStart;
    int _clippingKeyboardMode;
    UITextEffectsWindow *_containerWindow;
    UIInputViewTransition *_currentTransition;
    <_UIPeripheralHostCustomTransition> *_customTransitionInfo;
    BOOL _didFadeInputViews;
    int _disableAnimationsCount;
    CADisplayLink *_displayLink;
    NSMutableArray *_dropShadowViews;
    NSMutableArray *_extraViews;
    BOOL _hasCustomAnimationProperties;
    UIPeripheralHostView *_hostView;
    BOOL _ignoreInputModeChanges;
    BOOL _ignoresPinning;
    int _ignoringReloadInputViews;
    } _initialTransform;
    UIInputViewSet *_inputViewSet;
    BOOL _interfaceAutorotationDisabled;
    BOOL _isSplitting;
    BOOL _isTranslating;
    BOOL _isUndocked;
    double _lastAutomaticKeyboardDuration;
    double _lastBounceTime;
    } _lastKnownIAVFrame;
    } _lastKnownIVFrame;
    double _lastTranslationNotificationTime;
    int _nextAutomaticOrderInDirection;
    double _nextAutomaticOrderInDuration;
    NSMutableSet *_pinningResponders;
    UIInputViewPostPinningReloadState *_postPinningReloadState;
    NSMutableDictionary *_preservedAccessoryViewNextResponderSets;
    NSMutableDictionary *_preservedViewSets;
    } _previousShadowFrameLeft;
    } _previousShadowFrameRight;
    BOOL _reloadInputViewsForcedIsAllowed;
    UIResponder *_responder;
    UIResponder *_responderWithoutAutomaticAppearanceEnabled;
    UIKeyboardRotationState *_rotationState;
    UIScrollView *_scrollViewForTransition;
    BOOL _scrollViewShowsHorizontalScrollIndicator;
    UIInputViewTransition *_scrollViewTransition;
    BOOL _scrollViewTransitionFinishing;
    } _scrollViewTransitionPreviousPoint;
    } _scrollViewTransitionVelocity;
    UIResponder *_selfHostingTrigger;
    int _shadowStyle;
    BOOL _showCorners;
    BOOL _splitLockState;
    BOOL _springBoardLockStateIsLocked;
    BOOL _suppresingNotifications;
    int _targetRotatedOrientation;
    NSMutableArray *_targetStateStack;
    } _targetTransform;
    UIInputViewSet *_transientInputViewSet;
    UIPanGestureRecognizer *_translateRecognizer;
    BOOL _useHideNotificationsWhenNotVisible;
    } _velocity;
    BOOL _wasBackgroundSplit;
    float m_keyboardAttachedViewHeight;
}

@property(retain) UIInputViewSet * _inputViews;
@property UIInputViewSet * _transientInputViews;
@property float ambiguousControlCenterActivationMargin;
@property BOOL animationFencingEnabled;
@property BOOL animationFencingEnabled;
@property(readonly) BOOL animationsEnabled;
@property BOOL automaticAppearanceEnabled;
@property BOOL automaticAppearanceInternalEnabled;
@property(readonly) BOOL automaticAppearanceReallyEnabled;
@property(readonly) UIKeyboard * automaticKeyboard;
@property(readonly) UIKeyboardAutomatic * automaticKeyboard;
@property int currentState;
@property(retain) UIInputViewTransition * currentTransition;
@property(retain) <_UIPeripheralHostCustomTransition> * customTransitionInfo;
@property(readonly) NSMutableArray * dropShadowViews;
@property BOOL ignoresPinning;
@property(getter=_isIgnoringReloadInputViews,readonly) BOOL ignoringReloadInputViews;
@property(retain) UIInputViewSet * inputViews;
@property(readonly) BOOL keyClicksEnabled;
@property(readonly) UIInputViewSet * loadAwareInputViews;
@property(retain) UIInputViewPostPinningReloadState * postPinningReloadState;
@property(readonly) UIResponder * responder;
@property(retain) UIResponder * responder;
@property(retain) UIKeyboardRotationState * rotationState;
@property(retain) UIResponder * selfHostingTrigger;
@property(retain) UIPeripheralHostState * targetState;
@property(readonly) UIView * view;

+ (void)_releaseSharedInstance;
+ (id)activeInstance;
+ (float)gridViewRubberBandValueForValue:(float)arg1 target:(float)arg2 timeInterval:(float)arg3 velocity:(float*)arg4;
+ (Class)hostViewClass;
+ (id)passthroughViews;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })screenBoundsInAppOrientation;
+ (id)sharedInstance;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visiblePeripheralFrame;

- (void)_beginDisablingAnimations;
- (void)_beginIgnoringReloadInputViews;
- (void)_beginPinningInputViewsOnBehalfOfResponder:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_centerStretchRectForWidth:(float)arg1;
- (void)_clearPinningResponders;
- (void)_clearPreservedInputViewsWithId:(id)arg1 clearKeyboard:(BOOL)arg2;
- (void)_clearPreservedInputViewsWithRestorableResponder:(id)arg1;
- (int)_clipCornersOfView:(id)arg1;
- (id)_currentInputView;
- (void)_endDisablingAnimations;
- (void)_endIgnoringReloadInputViews;
- (BOOL)_hasPostPinningReloadState;
- (BOOL)_hostFirstResponder:(id)arg1 onBehalfOfResponder:(id)arg2;
- (id)_inheritedRenderConfig;
- (void)_inputModeChangedWhileContextTracked:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_inputViewRectToAvoid;
- (id)_inputViews;
- (id)_inputViewsForResponder:(id)arg1 withAutomaticKeyboard:(BOOL)arg2;
- (id)_inputViewsForResponder:(id)arg1;
- (BOOL)_isAccessoryViewChangedOnly;
- (BOOL)_isCoordinatingWithSystemGestures;
- (BOOL)_isIgnoringReloadInputViews;
- (BOOL)_isPinningInputViewsOnBehalfOfResponder:(id)arg1;
- (BOOL)_isSelfHosting;
- (BOOL)_isSuppressedByManualKeyboard;
- (BOOL)_isTrackingResponder:(id)arg1;
- (BOOL)_isTransitioning;
- (void)_performRefreshCorners;
- (void)_preserveInputViewsWithId:(id)arg1 animated:(BOOL)arg2;
- (void)_reloadInputViewsForResponder:(id)arg1;
- (void)_resignFirstResponderIfHostingOnBehalfOfResponder:(id)arg1;
- (BOOL)_restoreInputViewsWithId:(id)arg1 animated:(BOOL)arg2;
- (id)_screenForFirstResponder:(id)arg1;
- (void)_setIgnoresPinning:(BOOL)arg1 allowImmediateReload:(BOOL)arg2;
- (void)_setReloadInputViewsForcedIsAllowed:(BOOL)arg1;
- (BOOL)_shouldDelayRotationForWindow:(id)arg1;
- (BOOL)_somePartOfKeyboardIsOnScreen:(id)arg1;
- (void)_stopPinningInputViewsOnBehalfOfResponder:(id)arg1;
- (void)_trackInputModeIfNecessary:(id)arg1;
- (id)_transientInputViews;
- (void)_updateBounceAnimation:(id)arg1;
- (void)_updateContainerWindowLevel;
- (float)accessoryViewFadeDuration:(id)arg1;
- (void)addExtraAnimatedView:(id)arg1 withAlignment:(int)arg2 animation:(id)arg3 onSnapshotView:(BOOL)arg4;
- (void)addExtraViewsForTransition:(id)arg1;
- (void)adjustAccessoryViewForSubsumedTransition:(id)arg1;
- (void)adjustHostViewForTransitionCompletion:(id)arg1;
- (void)adjustHostViewForTransitionEndFrame:(id)arg1;
- (void)adjustHostViewForTransitionStartFrame:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })adjustRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forStart:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })adjustedPersistentOffset;
- (float)ambiguousControlCenterActivationMargin;
- (void)animateKeyboardOutWithDuration:(double)arg1 delta:(float)arg2;
- (BOOL)animationFencingEnabled;
- (BOOL)animationsEnabled;
- (BOOL)automaticAppearanceEnabled;
- (BOOL)automaticAppearanceInternalEnabled;
- (BOOL)automaticAppearanceReallyEnabled;
- (id)automaticKeyboard;
- (void)bounceAnimationDidFinish;
- (struct UIPeripheralAnimationGeometry { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; })calculateAnimationGeometryForOrientation:(int)arg1 outDirection:(int)arg2 forTransition:(int)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calculateRectForTransition:(id)arg1 forStart:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calculateSnapshotRectForTransition:(id)arg1 forStart:(BOOL)arg2;
- (void)candidateBarWillChangeHeight:(float)arg1 withDuration:(float)arg2;
- (void)completeCurrentTransitionIfNeeded;
- (id)computeTransitionForInputViews:(id)arg1 fromOrientation:(int)arg2 toOrientation:(int)arg3;
- (id)computeTransitionFromInputViews:(id)arg1 toInputViews:(id)arg2 animationStyle:(id)arg3;
- (id)containerForClippingMode:(int)arg1 onTransition:(id)arg2;
- (id)containerTextEffectsWindow;
- (id)containerTextEffectsWindowAboveStatusBar;
- (id)containerWindow;
- (void)createAutomaticKeyboardIfNeeded;
- (void)createHostViewIfNeeded;
- (int)currentState;
- (id)currentTransition;
- (id)customTransitionInfo;
- (void)customTransitionWillStartWithSettings:(id)arg1;
- (void)dealloc;
- (void)disableInterfaceAutorotation:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })displayRectForViewSet:(id)arg1 orientation:(int)arg2 position:(int)arg3 fromRotation:(BOOL)arg4;
- (void)dock;
- (id)dropShadowViews;
- (void)enableKeyboardTyping;
- (void)endClippingForTransition:(id)arg1;
- (void)executeTransition:(id)arg1;
- (void)extendKeyboardBackdropHeight:(float)arg1 withDuration:(float)arg2;
- (void)fadeInInputViews:(BOOL)arg1;
- (void)fadeInputViewsIfNeeded;
- (void)finishExtraViewsForTransition:(id)arg1;
- (void)finishRotation;
- (void)finishRotationOfKeyboard:(id)arg1;
- (void)finishScrollViewTransition;
- (void)finishSplitTransition:(id)arg1;
- (void)forceOrderInAutomatic;
- (void)forceOrderInAutomaticAnimated:(BOOL)arg1;
- (void)forceOrderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2;
- (void)forceOrderOutAutomatic;
- (void)forceOrderOutAutomaticAnimated:(BOOL)arg1;
- (void)forceOrderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (double)getLastAutomaticDuration;
- (float)getVerticalOverlapForView:(id)arg1 usingKeyboardInfo:(id)arg2;
- (void)handleTranslateDetectedFinished:(id)arg1;
- (BOOL)hasCustomInputView;
- (BOOL)hasDictationKeyboard;
- (void)hideScrollViewHorizontalScrollIndicator:(BOOL)arg1;
- (BOOL)ignoresPinning;
- (void)implBoundsHeightChangeDoneForGeometry:(struct UIPeripheralAnimationGeometry { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; })arg1;
- (id)init;
- (void)initializeTranslateGestureRecognizer;
- (id)inputViews;
- (void)invalidateDisplayLink;
- (BOOL)isHostingActiveImpl;
- (BOOL)isOffScreen;
- (BOOL)isOnScreen;
- (BOOL)isSplitting;
- (BOOL)isTranslating;
- (BOOL)isUndocked;
- (BOOL)keyClicksEnabled;
- (float)keyboardAttachedViewHeight;
- (void)layoutIfNeeded;
- (void)layoutInputViews;
- (void)layoutInputViewsForGeometry:(struct UIPeripheralAnimationGeometry { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; })arg1;
- (id)loadAwareInputViews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })localDisplayRectForViewSet:(id)arg1 position:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })localDisplayRectForViewSet:(id)arg1;
- (void)logGeometryDescriptionFromUserInfo:(id)arg1;
- (void)manualKeyboardWasOrderedIn:(id)arg1;
- (void)manualKeyboardWasOrderedOut:(id)arg1;
- (void)manualKeyboardWillBeOrderedIn:(id)arg1;
- (void)manualKeyboardWillBeOrderedOut:(id)arg1;
- (BOOL)maximize;
- (BOOL)maximizeWithAnimation:(BOOL)arg1;
- (BOOL)minimize;
- (float)minimumOffsetForBuffer:(float)arg1;
- (void)moveToPersistentOffset;
- (id)nextAnimationStyle:(BOOL)arg1;
- (id)nextAnimationStyle;
- (struct CGPoint { float x1; float x2; })offHostPointForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)orderInAutomatic;
- (void)orderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2;
- (void)orderInAutomaticSkippingAnimation;
- (void)orderInWithAnimationStyle:(id)arg1;
- (void)orderOutAutomatic;
- (void)orderOutAutomaticSkippingAnimation;
- (void)orderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2;
- (void)orderOutWithAnimation:(BOOL)arg1 toDirection:(int)arg2 duration:(double)arg3;
- (void)orderOutWithAnimationStyle:(id)arg1;
- (void)peripheralHostDidEnterBackground:(id)arg1;
- (void)peripheralHostWillResume:(id)arg1;
- (void)peripheralViewMinMaximized:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (BOOL)pinningPreventsInputViews:(id)arg1;
- (void)popAnimationStyle;
- (void)postDidHideNotification;
- (void)postDidHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; })arg1;
- (void)postDidShowNotification;
- (void)postDidShowNotificationForGeometry:(struct UIPeripheralAnimationGeometry { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; })arg1;
- (void)postDockingNotification;
- (void)postKeyboardFrameChangeNotification:(id)arg1 withInfo:(id)arg2;
- (id)postPinningReloadState;
- (void)postUndockingNotification;
- (void)postWillHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; })arg1 duration:(double)arg2;
- (void)postWillShowNotificationForGeometry:(struct UIPeripheralAnimationGeometry { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; })arg1 duration:(double)arg2;
- (void)prepareForPinning;
- (void)prepareForRotationOfKeyboard:(id)arg1 toOrientation:(int)arg2;
- (void)prepareForRotationToOrientation:(int)arg1;
- (void)prepareForSplitTransition;
- (void)prepareToAnimateClippedKeyboardWithOffsets:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 orderingIn:(BOOL)arg2 onSnapshot:(BOOL)arg3;
- (void)pushAnimationStyle:(id)arg1;
- (void)refreshCorners;
- (void)removeExtraViewsForTransition:(id)arg1;
- (void)resetCurrentOrderOutAnimationDuration:(double)arg1;
- (void)resetNextAutomaticOrderInDirectionAndDuration;
- (id)responder;
- (id)retain;
- (void)rotateKeyboard:(id)arg1 toOrientation:(int)arg2;
- (void)rotateToOrientation:(int)arg1;
- (id)rotationState;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })screenRectFromBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 atCenter:(struct CGPoint { float x1; float x2; })arg2 applyingSourceHeightDelta:(float)arg3;
- (void)scrollView:(id)arg1 didFinishPanAtWindowPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)scrollView:(id)arg1 didPanAtWindowPoint:(struct CGPoint { float x1; float x2; })arg2;
- (id)selfHostingTrigger;
- (void)setAccessoryViewVisible:(BOOL)arg1 delay:(float)arg2;
- (void)setAmbiguousControlCenterActivationMargin:(float)arg1;
- (void)setAnimationFencingEnabled:(BOOL)arg1;
- (void)setAutomaticAppearanceEnabled:(BOOL)arg1;
- (void)setAutomaticAppearanceInternalEnabled:(BOOL)arg1;
- (void)setCurrentState:(int)arg1;
- (void)setCurrentTransition:(id)arg1;
- (void)setCustomTransitionInfo:(id)arg1;
- (void)setIgnoresPinning:(BOOL)arg1;
- (void)setInputViews:(id)arg1 animated:(BOOL)arg2;
- (void)setInputViews:(id)arg1 animationStyle:(id)arg2;
- (void)setInputViews:(id)arg1;
- (void)setKeyboardOnScreenNotifyKey:(BOOL)arg1;
- (void)setListeningToSpringBoardKeyboardNotifications:(BOOL)arg1;
- (void)setNextAutomaticOrderInDirection:(int)arg1 duration:(double)arg2;
- (void)setPeripheralFrameForHostBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPeripheralToolbarFrameForHostWidth:(float)arg1;
- (void)setPostPinningReloadState:(id)arg1;
- (void)setResponder:(id)arg1;
- (void)setRotationState:(id)arg1;
- (void)setSelfHostingTrigger:(id)arg1;
- (void)setTargetState:(id)arg1;
- (void)setTextEffectsWindowLevelForInputView:(id)arg1 responder:(id)arg2;
- (void)setUndockedWithOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)set_inputViews:(id)arg1;
- (void)set_transientInputViews:(id)arg1;
- (void)setkeyboardAttachedViewHeight:(float)arg1;
- (BOOL)shouldApplySettingsForBackdropView:(id)arg1;
- (BOOL)shouldUseHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; })arg1;
- (void)showCorners:(BOOL)arg1 withDuration:(float)arg2;
- (void)showDropShadows:(BOOL)arg1;
- (void)showInputViewsIfNeeded;
- (struct CGSize { float x1; float x2; })sizeOfInputViewForInputViewSet:(id)arg1 withInterfaceOrientation:(int)arg2;
- (BOOL)skipTransitionForInputViews:(id)arg1;
- (void)springBoardLockStateChanged:(id)arg1;
- (void)syncToExistingAnimations;
- (id)targetState;
- (void)textEffectsWindowDidRotate:(id)arg1;
- (struct CGSize { float x1; float x2; })totalPeripheralSizeForOrientation:(int)arg1;
- (void)transitionDidFinish:(BOOL)arg1;
- (void)translateDetected:(id)arg1;
- (void)undock;
- (id)undockedInfoFromDefaultInfo:(id)arg1 forNotification:(id)arg2;
- (void)updateAmbiguousControlCenterActivationMargin;
- (void)updateBackdrop;
- (void)updateDropShadow;
- (void)updateExtraViewsForStart:(BOOL)arg1 onTransition:(id)arg2;
- (void)updateInputAccessoryViewVisibility:(BOOL)arg1 withDuration:(float)arg2;
- (void)updateProgress:(float)arg1 mergedHeight:(float)arg2 splitHeight:(float)arg3;
- (void)updateScrollViewContentInsetBottom:(float)arg1;
- (BOOL)userInfoContainsActualGeometryChange:(id)arg1;
- (id)userInfoFromGeometry:(struct UIPeripheralAnimationGeometry { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; })arg1 duration:(double)arg2 forWill:(BOOL)arg3 forShow:(BOOL)arg4;
- (id)view;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visiblePeripheralFrame:(BOOL)arg1;

@end
