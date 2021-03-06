/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:30 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, UIWindow;

@interface SBSheetController : NSObject {

	NSMutableDictionary* _appToSheetMap;
	UIWindow* _presentationWindow;

}
+(id)sharedInstance;
-(BOOL)isShowingSheets;
-(id)applicationForTopSheet;
-(void)dismissAllSheets;
-(void)dismissSheetsForApplication:(id)arg1 ;
-(BOOL)presentRemoteViewIdentifier:(id)arg1 asSheetForApplication:(id)arg2 requireTopApplication:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)dismissRemoteViewIdentifier:(id)arg1 forApplication:(id)arg2 animated:(BOOL)arg3 ;
-(void)_tearDownSheet:(id)arg1 ;
-(void)presentSheetView:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissSheetView:(id)arg1 animated:(BOOL)arg2 ;
-(void)sendStatusBarOrientationWillChangeToSheets:(long long)arg1 duration:(float)arg2 ;
-(BOOL)sheetWantsProgress;
-(id)init;
-(BOOL)isShowingSheetsForApplication:(id)arg1 ;
@end

