//
//  NotesTableViewCell.h
//  LucidNotes-iOS8
//
//  Created by Andyy Hope on 21/08/2014.
//  Copyright (c) 2014 Andyy Hope. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NotesTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;
@property (weak, nonatomic) IBOutlet UILabel *noteLabel;

@end
