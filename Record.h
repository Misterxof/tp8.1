//
//  Record.h
//  tp8.1
//
//  Created by Admin on 20.05.17.
//  Copyright (c) 2017 Admin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Record : NSManagedObject

@property (nonatomic, retain) NSString * aviaCompany;
@property (nonatomic, retain) NSString * cityFrom;
@property (nonatomic, retain) NSString * cityTo;
@property (nonatomic, retain) NSNumber * price;

@end
