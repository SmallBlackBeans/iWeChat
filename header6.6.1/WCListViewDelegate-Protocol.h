//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, WCListViewController;

@protocol WCListViewDelegate <NSObject>
@property(nonatomic) WCListViewController *viewController;
- (void)reloadBackGround;
- (void)refreshFooterEnd:(unsigned int)arg1;
- (void)refreshHeaderEnd:(unsigned int)arg1;
- (void)onDataChanged:(NSArray *)arg1;
- (void)shouldReloadData:(NSArray *)arg1;

@optional
- (void)didReceiveMemoryWarning;
- (void)onNoMoreDataWithRet:(int)arg1;
@end

