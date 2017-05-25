//
//  MLKMenuPopover.h
//  MLKMenuPopover
//
//  Created by NagaMalleswar on 20/11/14.
//  Copyright (c) 2014 NagaMalleswar. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MLKMenuPopover;

@protocol MLKMenuPopoverDelegate

- (void)menuPopover:(MLKMenuPopover *)menuPopover didSelectMenuItemAtSection:(NSInteger)selectedSection didSelectMenuItemAtIndex:(NSInteger)selectedIndex;

@end

@interface MLKMenuPopover : UIView <UITableViewDataSource,UITableViewDelegate>


@property(nonatomic,assign) id<MLKMenuPopoverDelegate> menuPopoverDelegate;

- (id)initWithFrame:(CGRect)frame withPointerFrame:(CGRect)pointerFrame menuItems:(NSMutableArray *)menuItems;
- (void)showInView:(UIView *)view;
- (void)dismissMenuPopover;
- (void)layoutUIForInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation;

@end
