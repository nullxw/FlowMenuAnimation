//
//  BearAlertView.h
//  GOSHOPPING
//
//  Created by Bear on 16/6/26.
//  Copyright © 2016年 cjl. All rights reserved.
//

#import <UIKit/UIKit.h>

//  动效方式
typedef enum {
    kAlertViewAnimation_VerticalSpring,     //直线弹簧动效
    kAlertViewAnimation_CenterScale,        //中心缩放动效
}AlertViewAnimation;

//  动画执行状态
typedef enum {
    kAlertViewAnimationState_Null,          //无状态，
    kAlertViewAnimationState_Process,       //动画进行中
}AlertViewAnimationState;


typedef void (^kUDAlertViewBlock)();
typedef void (^AnimationFinishBlock)();


@interface BearAlertView : UIView

@property (assign, nonatomic) BOOL tapBgCancel; //触摸背景，消失Alert

- (void)udAlertView_ConfirmBlock:(kUDAlertViewBlock)confirmBlock cancelBlock:(kUDAlertViewBlock)cancelBlock;

@end