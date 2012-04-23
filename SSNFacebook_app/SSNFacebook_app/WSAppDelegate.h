//
//  WSAppDelegate.h
//  SSNFacebook_app
//
//  Created by Dave Post on 23-04-12.
//  Copyright (c) 2012 CMD. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
