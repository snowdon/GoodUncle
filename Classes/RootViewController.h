//
//  RootViewController.h
//  GoodUncle
//
//  Created by  Chuns on 11-2-20.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UITableViewController {
	NSMutableArray *tips;	
}

@property (nonatomic, retain) NSMutableArray *tips;
@end
