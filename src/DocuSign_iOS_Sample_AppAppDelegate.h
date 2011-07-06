//
//  DocuSign_iOS_Sample_AppAppDelegate.h
//  DocuSign-iOS-Sample-App
//
//  Created by JD Brennan on 5/14/11.
//  Copyright 2011 DocuSign Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DocuSign_iOS_Sample_AppViewController;

@interface DocuSign_iOS_Sample_AppAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet DocuSign_iOS_Sample_AppViewController *viewController;

@end
