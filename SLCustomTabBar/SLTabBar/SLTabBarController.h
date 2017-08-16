//
//  SLTabBarController.h
//  SLCustomTabBar
//
//  Created by 苏磊 on 2017/6/14.
//  Copyright © 2017年 苏磊. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SLCustomTabBar.h"


/*  中间按钮可以 设置为 [控制器 或 普通触发事件的按钮]
*  ----> 只需要设置为普通按钮的话，Controller传入nil即可


*  中间按钮可以 设置为 [圆形凸出 或 普通]
*  ----> 圆形凸出 bulge传入YES  普通 bulge传入NO

*/


@interface SLTabBarController : UITabBarController
/** 自定义的tabbar */
@property (strong , nonatomic) SLCustomTabBar* tabbar;

/**
 * 添加子控制器
 * @param Controller          需管理的子控制器
 * @param title               底部文字
 * @param imageName           未选中的图片名
 * @param selectedImageName   选中的图片名
 */
- (void)addChildController:(id)Controller
                     title:(NSString *)title
                 imageName:(NSString *)imageName
         selectedImageName:(NSString *)selectedImageName;

/**
 * 设置中间按钮
 * @param Controller          需管理的子控制器
 * @param title               底部文字
 * @param imageName           未选中的图片名
 * @param selectedImageName   选中的图片名
 */
- (void)addCenterController:(id)Controller
                      bulge:(BOOL)bulge
                      title:(NSString *)title
                  imageName:(NSString *)imageName
          selectedImageName:(NSString *)selectedImageName;
@end
