//
//  RootViewController.h
//  Contacts
//
//  Created by Imran Rasool on 10/9/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>
#import "objectData.h"
#import "OverlayViewController.h"

@interface RootViewController : UITableViewController {
	NSMutableArray *menuArray;
	NSMutableArray *copyListOfItems;
	
	IBOutlet UISearchBar *searchBar;
	BOOL searching;
	BOOL letUserSelectRow;
	OverlayViewController *ovController;
}
@property (nonatomic, retain) NSMutableArray *menuArray;
@property (nonatomic, retain) NSMutableArray *copyListOfItems;

- (void) searchTableView;
- (void) doneSearching_Clicked:(id)sender;

@end
