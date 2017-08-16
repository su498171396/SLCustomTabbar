//
//  SLBadgeView.h
//  SLCustomTabBar
//
//  Created by 苏磊 on 2017/6/14.
//  Copyright © 2017年 苏磊. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SLBadgeView : UIButton

/** remind number */
@property (copy , nonatomic) NSString *badgeValue;
/** remind color */
@property (copy , nonatomic) UIColor *badgeColor;

@end
