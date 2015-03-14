//
//  AppDelegate.h
//  OrgChart
//
//  Created by Sun Wenyan on 2015-03-12.
//  Copyright (c) 2015 Sun Wenyan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>{
    UIWindow *window;
    ViewController *viewController;
@private
    NSManagedObjectContext *managedObejectContext_;
    NSManagedObjectModel *managedObjectModel_;
    NSPersistentStoreCoordinator *persistentStoreCoordinator_;
    
}

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;
- (void)createData;
- (void)readData;
- (void)displayPerson:(NSManagedObject *)person withIndentation:(NSString*)indentation;

@end

