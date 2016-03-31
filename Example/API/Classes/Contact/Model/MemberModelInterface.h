//
//  MemberModelInterface.h
//  API
//
//  Created by QS on 16/3/22.
//  Copyright © 2016年 SayGeronimo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SortGroupInterface.h"

@protocol MemberModelInterface <SortGroupInterface>

@property (nonatomic, copy) NSString *uid;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, copy) NSString *imageUrl;

@property (nonatomic, retain) UIImage *image;

@property (nonatomic, assign) CGFloat rowHeight;

@end
