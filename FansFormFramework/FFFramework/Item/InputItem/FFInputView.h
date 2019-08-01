//
//  FFInputView.h
//  FFFramework
//
//  Created by fans on 2019/7/25.
//  Copyright © 2019 glority-fans. All rights reserved.
//

#import "FFView.h"

@interface FFInputView : FFView

+ (instancetype)formViewWithKey:(NSString *)key must:(BOOL)must;
+ (instancetype)formViewWithKey:(NSString *)key
                          title:(NSString *)title
                    placeholder:(NSString *)placeholder
                           must:(BOOL)must;

@property (nonatomic, strong, readonly) UILabel *titleLb;
@property (nonatomic, strong, readonly) UITextField *textField;
@property (nonatomic, strong, readonly) UIView *lineView;
@property (nonatomic, strong, readonly) UILabel *mustLb;


/** 标题和输入框之间的距离(不设置是默认间距) */
@property (nonatomic, assign)CGFloat titleToInputGap;
/** 标题的宽度(不设置是默认宽度) */
@property (nonatomic, assign)CGFloat titleWidth;

@end