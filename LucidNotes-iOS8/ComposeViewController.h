//
//  ComposeViewController.h
//  LucidNotes-iOS8
//
//  Created by Andyy Hope on 21/08/2014.
//  Copyright (c) 2014 Andyy Hope. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ComposeViewController : UIViewController
<UITextViewDelegate>
@property (weak, nonatomic) IBOutlet UITextView *textView;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *saveButton;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *closeButton;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *textViewBottomConstraint;

@end
