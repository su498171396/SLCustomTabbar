//
//  ViewController.m
//  SLCustomTabBar
//
//  Created by 苏磊 on 2017/6/14.
//  Copyright © 2017年 苏磊. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    UIImageView *img = [[UIImageView alloc]initWithFrame:self.view.bounds];
    img.image = [UIImage imageNamed:@"IMG_1100"];
    img.contentMode =  UIViewContentModeScaleAspectFill;
    img.clipsToBounds = YES;
    [self.view addSubview:img];
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
