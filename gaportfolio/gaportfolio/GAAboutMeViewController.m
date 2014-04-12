//
//  GAAboutMeViewController.m
//  gaportfolio
//
//  Created by Derek Fidler on 4/12/14.
//  Copyright (c) 2014 derekfidler.com. All rights reserved.
//

#import "GAAboutMeViewController.h"

@interface GAAboutMeViewController ()

@end

@implementation GAAboutMeViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    CGFloat contentHeight = self.textView.frame.origin.y + self.textView.frame.size.height;
    self.scrollView.contentSize = CGSizeMake(self.view.frame.size.width, contentHeight + 60);
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
