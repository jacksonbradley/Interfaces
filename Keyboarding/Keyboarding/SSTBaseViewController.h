//
//  SSTBaseViewController.h
//  Keyboarding
//
//  Created by Brennan Stehling on 8/19/13.
//  Copyright (c) 2013 SmallSharpTools LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SSTBaseViewController : UIViewController

- (void)keyboardWillShowWithHeight:(CGFloat)height duration:(CGFloat)duration curve:(UIViewAnimationOptions)curve;

- (void)keyboardWillHideWithHeight:(CGFloat)height duration:(CGFloat)duration curve:(UIViewAnimationOptions)curve;

- (void)keyboardDidShow;

- (void)keyboardDidHide;

@end
