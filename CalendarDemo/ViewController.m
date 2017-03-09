//
//  ViewController.m
//  CalendarDemo
//
//  Created by shuai pan on 2017/1/20.
//  Copyright © 2017年 BSL. All rights reserved.
//

#import "ViewController.h"
#import "BSLCalendar.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    BSLCalendar *calendar = [[BSLCalendar alloc]initWithFrame:CGRectMake(20, 100, CGRectGetWidth(self.view.bounds)-40, 300)];
    [self.view addSubview:calendar];
    
    calendar.showChineseCalendar = YES;
    [calendar calendarBookSelectDate:^(NSInteger year, NSInteger month, NSInteger day) {
        NSLog(@"%ld年/%ld月/%ld日",(long)year,(long)month,(long)day);
    }];

}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
