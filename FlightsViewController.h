//
//  FlightsViewController.h
//  tp8.1
//
//  Created by Admin on 20.05.17.
//  Copyright (c) 2017 Admin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Record.h"
#import "AppDelegate.h"

@interface FlightsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

-(id)initWithCities:(NSString*)cityFrom cityTo: (NSString*)cityTo;
@end
