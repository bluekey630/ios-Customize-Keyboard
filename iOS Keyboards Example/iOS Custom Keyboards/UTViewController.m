//
//  UTViewController.m
//  iOS Custom Keyboards
//
//  Created by Dmitry Skoch on 7/19/16.
//  Copyright (c) 2016 Dmitry Skoch. All rights reserved.
//

#import "UTViewController.h"

@interface UTViewController ()

@end

@implementation UTViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	
    if ( UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone )
    {
        PMCustomKeyboard *customKeyboard = [[PMCustomKeyboard alloc] init];
        [customKeyboard setTextView:self.textView];
        
    }
    else {
        PKCustomKeyboard *customKeyboard = [[PKCustomKeyboard alloc] init];
        [customKeyboard setTextView:self.textView];
    }
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
