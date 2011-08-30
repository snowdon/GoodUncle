//
//  TipDetailViewController.h
//  GoodUncle
//
//  Created by  Chuns on 11-2-20.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface TipDetailViewController : UIViewController {
	NSDictionary *tip;
	IBOutlet UITextField *titleTextField;
	IBOutlet UITextView *contentTextView;

}

@property (nonatomic, retain) NSDictionary *tip;
@property (nonatomic, retain) UITextField *titleTextField;
@property (nonatomic, retain) UITextView *contentTextView;
@end
