//
//  ESIncommingCallVC.h
//  VPhone
//
//  Created by 赖长宽 on 2017/9/18.
//  Copyright © 2017年 changkuan.lai.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ESIncommingVC : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *phoneNumLabel;
@property (nonatomic,copy) NSString * phoneNumber;
@property (nonatomic,assign)  int callId;

@end
