//
//  DetailViewController.h
//  Contacts
//
//  Created by Imran Rasool on 10/9/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface DetailViewController : UIViewController {
	IBOutlet UIButton *btn;
	NSString *lbl;
}

@property(nonatomic, retain) IBOutlet UIButton *btn;
@property(nonatomic, retain) NSString *lbl;

-(IBAction)back;
@end
 