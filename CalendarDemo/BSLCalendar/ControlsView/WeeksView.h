//
//  WeeksView.h
//  CalendarDemo
//
//  Created by shuai pan on 2017/1/20.
//  Copyright © 2017年 BSL. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WeeksView : UIView

@property (nonatomic ,copy)NSString *year;


- (void)selectMonth:(void (^)(BOOL increase))selectBlock;
@end
