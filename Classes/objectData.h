//
//  objectData.h
//  Contacts
//
//  Created by Imran Rasool on 10/9/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>

@interface objectData : NSObject {
	NSString *fnm;
	NSString *lnm;
	NSString *phn;
}


@property(nonatomic,retain) NSString *fnm;
@property(nonatomic,retain) NSString *lnm;
@property(nonatomic,assign) NSString *phn;
@end
