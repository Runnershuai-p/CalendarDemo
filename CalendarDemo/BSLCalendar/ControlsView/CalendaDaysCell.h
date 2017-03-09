//
//  CalendaDaysCell.h
//  CalendarDemo
//
//  Created by shuai pan on 2017/1/20.
//  Copyright © 2017年 BSL. All rights reserved.
//

#import <UIKit/UIKit.h>
@class DayModel;
@interface CalendaDaysCell : UICollectionViewCell

@property (nonatomic ,strong)DayModel *dayModel;

@property (nonatomic ,assign)BOOL showChinaCalendar;


- (void)signCurrentDay:(DayModel *)dayModel;

@end

