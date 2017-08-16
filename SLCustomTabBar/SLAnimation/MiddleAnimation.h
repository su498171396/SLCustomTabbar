//
//  MiddleAnimation.h
//  SLCustomTabBar
//
//  Created by 苏磊 on 2017/6/14.
//  Copyright © 2017年 苏磊. All rights reserved.
//

#import <UIKit/UIKit.h>

//通知点击按钮协议
@protocol MiddleAnimationDelegate <NSObject>
- (void)didSelectBtnWithBtnTag:(NSInteger)tag;
@end

@interface MiddleAnimation : UIView

//通知点击按钮代理人
@property(weak,nonatomic) id<MiddleAnimationDelegate> delegate;
//弹出动画view
+(MiddleAnimation *)standardMiddleAnimationWithView:(UIView *)view;

@end
