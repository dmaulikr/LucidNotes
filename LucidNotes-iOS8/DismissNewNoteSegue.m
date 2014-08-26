//
//  DismissNewNoteSegue.m
//  LucidNotes-iOS8
//
//  Created by Andyy Hope on 21/08/2014.
//  Copyright (c) 2014 Andyy Hope. All rights reserved.
//

#import "DismissNewNoteSegue.h"

@implementation DismissNewNoteSegue

- (void)perform {
    UIViewController *sourceViewController = self.sourceViewController;
    [sourceViewController.presentingViewController dismissViewControllerAnimated:YES completion:nil];
}
@end
