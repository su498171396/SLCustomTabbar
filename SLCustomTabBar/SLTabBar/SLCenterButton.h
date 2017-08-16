//
//  SLCenterButton.h
//  SLCustomTabBar
//
//  Created by 苏磊 on 2017/6/14.
//  Copyright © 2017年 苏磊. All rights reserved.
//

#import <UIKit/UIKit.h>

#define BULGEH 16   //button bulge of height

@interface SLCenterButton : UIButton
/** Whether center button to bulge */
@property(assign , nonatomic,getter=is_bulge) BOOL bulge;
@end
