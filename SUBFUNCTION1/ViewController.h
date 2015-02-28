//
//  ViewController.h
//  SUBFUNCTION1
//
//  Created by Raja Ati on 2/28/15.
//  Copyright (c) 2015 Raja Ati. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *MainLabel;
@property (weak, nonatomic) IBOutlet UITextField *FirstName;
@property (weak, nonatomic) IBOutlet UITextField *Address;

- (IBAction)FirstNameAction:(id)sender;
- (IBAction)Address:(id)sender;
- (IBAction)ButtonPress:(UIButton *)sender;

