//
//  BSLCalendar.h
//  CalendarDemo
//
//  Created by shuai pan on 2017/1/20.
//  Copyright © 2017年 BSL. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BSLCalendar : UICollectionViewCell

/**
 * showChineseCalendar：显示农历， 默认为YES
 */
@property (nonatomic ,assign)BOOL showChineseCalendar;

/**
 * 签到日历表
 * year：年
 * month：月
 * day：日
 */
- (void)signCalendarSelectDate:(void(^)(NSInteger year,NSInteger month,NSInteger day))selectBlock;


/**
 * 日历薄选择回调
 * year：年
 * month：月
 * day：日
 */
- (void)calendarBookSelectDate:(void(^)(NSInteger year,NSInteger month,NSInteger day))selectBlock;



@end
