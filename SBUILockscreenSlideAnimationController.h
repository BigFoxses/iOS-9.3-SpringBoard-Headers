/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:33 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBLockScreenViewControllerBase, SBLockScreenClippedSlideController, SBSceneLayoutAnimationWrapperView, NSMutableArray;

@interface SBUILockscreenSlideAnimationController : SBUIMainScreenAnimationController {

	int _transitionStyle;
	SBLockScreenViewControllerBase* _lockscreenViewController;
	SBLockScreenClippedSlideController* _lockscreenClippedSlideController;
	SBSceneLayoutAnimationWrapperView* _animationWrapperView;
	NSMutableArray* _appsNeedingContextHosting;
	double _animationDuration;
	BOOL _fromCC;
	BOOL _fromNC;
	BOOL _finishedSliding;
	BOOL _waitForAppActivationForContextHostView;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_cleanupAnimation;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(id)_animationProgressDependencies;
-(void)_prepareAnimation;
-(void)_applicationDependencyStateChanged;
-(void)_maybeReportAnimationFinished;
-(void)_willSetupStartDependencies;
-(void)_setup:(id)arg1 transitionStyle:(int)arg2 ;
-(void)_finishedSliding;
-(BOOL)_areApplicationLaunchesFinished;
-(void)dealloc;
-(id)description;
-(void)_startAnimation;
@end

