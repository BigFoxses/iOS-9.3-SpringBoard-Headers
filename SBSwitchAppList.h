/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:34 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSArray;

@interface SBSwitchAppList : NSObject {

	NSArray* _list;

}

@property (nonatomic,retain) NSArray * list;              //@synthesize list=_list - In the implementation block
-(BOOL)containsBundleID:(id)arg1 ;
-(void)resetList;
-(id)applicationBundleIDBeforeBundleID:(id)arg1 ;
-(id)applicationBundleIDAfterBundleID:(id)arg1 ;
-(void)_resetList;
-(id)_findApplicationInDirection:(unsigned long long)arg1 startLookingAtIndex:(unsigned long long)arg2 ;
-(BOOL)_bundleIDShouldBeRepresentedInList:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)list;
-(void)setList:(NSArray *)arg1 ;
@end

