//
//  GAWebviewController.h
//  gaportfolio
//
//  Created by Derek Fidler on 4/13/14.
//  Copyright (c) 2014 derekfidler.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GAWebviewController : UIViewController

@property ( nonatomic,strong ) IBOutlet UIWebView * webView;
@property ( nonatomic,strong ) IBOutlet NSString *urlString;

@end
