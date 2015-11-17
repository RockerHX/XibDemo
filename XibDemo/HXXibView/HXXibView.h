//
//  HXXibView.h
//  XibDemo
//
//  Created by miaios on 15/11/17.
//  Copyright © 2015年 miaios. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE

@interface HXXibView : UIView

@property (nonnull, nonatomic, strong) IBInspectable NSString *text;

@property (weak, nonatomic) IBOutlet UILabel *label;

@end
