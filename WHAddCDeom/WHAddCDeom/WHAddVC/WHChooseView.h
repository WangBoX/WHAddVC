//
//  WHChooseView.h
//  WHAddCDeom
//  https://github.com/remember17/WHAddVC
//  Created by 吴浩 on 2017/6/26.
//  Copyright © 2017年 wuhao. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^ChooseBlock) (NSInteger);

@interface WHChooseView : UIView

@property (nonatomic, copy) ChooseBlock chooseBlock;
@property (nonatomic, assign) CGFloat offsetX;

@end
