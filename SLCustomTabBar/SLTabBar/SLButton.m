//
//  SLButton.m
//  SLCustomTabBar
//
//  Created by 苏磊 on 2017/6/14.
//  Copyright © 2017年 苏磊. All rights reserved.
//

#import "SLButton.h"
#import "SLBadgeView.h"

@interface SLButton()
/** remind number */
@property (weak , nonatomic)SLBadgeView * badgeView;

@end

@implementation SLButton

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self)
    {
        self.titleLabel.font = [UIFont systemFontOfSize:10];
        self.titleLabel.textAlignment = NSTextAlignmentCenter;
        self.adjustsImageWhenHighlighted = NO;
        
        self.imageView.contentMode = UIViewContentModeCenter;
    }
    return self;
}

- (void)layoutSubviews{
    [super layoutSubviews];
    CGFloat width = self.frame.size.width;
    CGFloat height = self.superview.frame.size.height;
    if (width!=0 && height!=0)
    {
        self.titleLabel.frame = CGRectMake(0, height-16, width, 16);
        self.imageView.frame = CGRectMake(0 , 0, width, 35);
    }
}

/**
 *  Set red dot item
 */
- (void)setItem:(UITabBarItem *)item {
    self.badgeView.badgeValue = item.badgeValue;
    self.badgeView.badgeColor = item.badgeColor;
}

/**
 *  getter
 */
- (SLBadgeView *)badgeView {
    if (!_badgeView) {
        SLBadgeView * badgeView = [[SLBadgeView alloc] init];
        _badgeView = badgeView;
        [self addSubview:badgeView];
    }
    return _badgeView;
}


- (void)setHighlighted:(BOOL)highlighted{
}

@end
