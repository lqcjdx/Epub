//
//  YLBookReadController.h
//  YLEpubReader
//
//  Created by lumin on 2018/4/15.
//  Copyright © 2018年 https://github.com/lqcjdx. All rights reserved.
//

#import "YLBaseViewController.h"
@class YLEpub;

@interface YLBookReadController : YLBaseViewController
- (instancetype)initWithEpub:(YLEpub *)epub;
@end
