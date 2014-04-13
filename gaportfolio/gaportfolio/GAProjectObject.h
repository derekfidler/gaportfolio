//
//  GAProjectObject.h
//  gaportfolio
//
//  Created by Derek Fidler on 4/13/14.
//  Copyright (c) 2014 derekfidler.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GAProjectObject : NSObject

@property ( nonatomic, strong ) NSString * title;
@property ( nonatomic, strong ) NSString * details;

@property ( nonatomic, strong ) UIImage * thumbnailImage;
@property ( nonatomic, strong ) UIImage * projectPhoto;

@end
