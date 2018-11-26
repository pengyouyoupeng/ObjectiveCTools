//
//  MemoryView.h
//  实验弹出框
//
//  Created by yuency on 2018/11/22.
//  Copyright © 2018年 yuency. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MemoryView : UIView

typedef void(^ActionBlock)(NSInteger index);

+ (void)showWithAction:(ActionBlock)action;

@end
