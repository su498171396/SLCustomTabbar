//
//  SLCustomTabBar.h
//  SLCustomTabBar
//
//  Created by 苏磊 on 2017/6/14.
//  Copyright © 2017年 苏磊. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SLButton;
@class SLCenterButton;

@interface SLCustomTabBar : UIView

/** tabbar按钮显示信息 */
@property(copy, nonatomic) NSArray<UITabBarItem *> *items;
/** 设置文字颜色 */
@property (strong , nonatomic) UIColor *textColor;
/** 设置选中颜色 */
@property (strong , nonatomic) UIColor *selectedTextColor;
/** 其他按钮 */
@property (strong , nonatomic) NSMutableArray <SLButton*> *btnArr;
/** 中间按钮 */
@property (strong , nonatomic) SLCenterButton *centerBtn;

@end
