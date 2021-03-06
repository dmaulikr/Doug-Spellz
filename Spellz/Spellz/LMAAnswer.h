//
//  LMAAnswer.h
//  Spellz
//
//  Created by Buck, Nicole D. on 6/10/14.
//  Copyright (c) 2014 Learning Mobile Apps. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LMAAnswerDelegate <NSObject>
-(BOOL) testAnswer;
@end

@interface LMAAnswer : UIViewController
@property (strong, nonatomic) id<LMAAnswerDelegate> delegate;
@property (weak, nonatomic) IBOutlet UIButton *btnNext;

@end
