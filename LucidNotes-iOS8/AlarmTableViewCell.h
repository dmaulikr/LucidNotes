//
//  AlarmTableViewCell.h
//  LucidNotes-iOS8
//
//  Created by Andyy Hope on 21/08/2014.
//  Copyright (c) 2014 Andyy Hope. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AlarmTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *alarmLabel;
@property (weak, nonatomic) IBOutlet UIButton *switchButton;
@property (weak, nonatomic) IBOutlet UIButton *ringtoneButton;



@end
