//
//  DPCalendarWekklyHorizontalScrollCell.h
//  DPCalendar
//
//  Created by Shan Wang on 31/12/2013.
//  Copyright (c) 2013 Ethan Fang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DPCalendarWeeklyHorizontalScrollCell : UICollectionViewCell

- (void) setDate:(NSDate *)date;
@property (nonatomic, strong) UIColor *cellBackgroundColor;
@property (nonatomic, strong) UIColor *cellSelectedBackgroundColor;
@end
