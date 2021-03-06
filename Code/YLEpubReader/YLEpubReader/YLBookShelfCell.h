//
//  YLBookShelfCell.h
//  YLEpubReader
//
//  Created by ApesTalk on 2018/4/15.
//  Copyright © 2018年 https://github.com/ApesTalk. All rights reserved.
//

#import <UIKit/UIKit.h>

@class YLEpub;

@interface YLBookShelfCell : UICollectionViewCell
@property (nonatomic, strong, readonly) UIImageView *coverImg;

- (void)loadWithEpub:(YLEpub *)epub;
+ (CGFloat)width;
+ (CGFloat)height;
@end
