//
//  GAAboutMeViewController.h
//  gaportfolio
//
//  Created by Derek Fidler on 4/12/14.
//  Copyright (c) 2014 derekfidler.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GAAboutMeViewController : UIViewController

@property ( nonatomic, strong ) IBOutlet UIScrollView * scrollView;
@property (nonatomic, strong) IBOutlet UITextView * textView;
@property (nonatomic , strong ) IBOutlet UIImageView * profileImage;

@end
