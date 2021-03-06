/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:34 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBLockScreenViewController, SBLockScreenPlugin;

@interface SBLockScreenPluginTransitionContext : NSObject {

	SBLockScreenViewController* _lockScreenViewController;
	SBLockScreenPlugin* _fromPlugin;
	SBLockScreenPlugin* _toPlugin;

}

@property (nonatomic,retain) SBLockScreenViewController * lockScreenViewController;              //@synthesize lockScreenViewController=_lockScreenViewController - In the implementation block
@property (nonatomic,retain) SBLockScreenPlugin * fromPlugin;                                    //@synthesize fromPlugin=_fromPlugin - In the implementation block
@property (nonatomic,retain) SBLockScreenPlugin * toPlugin;                                      //@synthesize toPlugin=_toPlugin - In the implementation block
-(SBLockScreenViewController *)lockScreenViewController;
-(SBLockScreenPlugin *)fromPlugin;
-(SBLockScreenPlugin *)toPlugin;
-(void)setFromPlugin:(SBLockScreenPlugin *)arg1 ;
-(void)setToPlugin:(SBLockScreenPlugin *)arg1 ;
-(void)setLockScreenViewController:(SBLockScreenViewController *)arg1 ;
@end

