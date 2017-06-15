//
//  TPNoteTemplate.h
//  Triplore
//
//  Created by 宋 奎熹 on 2017/6/15.
//  Copyright © 2017年 宋 奎熹. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, TPNoteTemplateNumber){
    TPGreen     = 1,
    TPBrown     = 2,
};

@class TPNoteTitleView;

@interface TPNoteTemplate : NSObject

@property (nonnull, nonatomic) UIColor *tem_color;
@property (nonnull, nonatomic) UIFont *tem_font;
@property (nonnull, nonatomic) TPNoteTitleView *tem_titleView;
@property (nonatomic) TPNoteTemplateNumber tem_num;

- (instancetype _Nonnull)initWithColor:(UIColor *_Nonnull)color andFont:(UIFont *_Nonnull)font andTitleView:(TPNoteTitleView *_Nonnull)titleView andImageStyle:(TPNoteTemplateNumber)number;

@end
