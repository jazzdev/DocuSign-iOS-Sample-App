//
//  DocuSign_iOS_Sample_AppTests.m
//  DocuSign-iOS-Sample-AppTests
//
//  Created by JD Brennan on 5/14/11.
//  Copyright 2011 DocuSign Inc. All rights reserved.
//

#import "objc/runtime.h"
#import "DocuSign_iOS_Sample_AppTests.h"
#import "DocuSignAPI.h"

@implementation DocuSign_iOS_Sample_AppTests

@synthesize soapCallActive;

- (void)setUp
{
    [super setUp];
    
    // Set-up code here.
}

- (void)tearDown
{
    // Tear-down code here.
    
    [super tearDown];
}

- (void)testLogin
{
    DocuSignAPI* dsapi = [[DocuSignAPI alloc] init];
    [dsapi loginWithEmail:@"<your username>" 
                 password:@"<your password>"
                 delegate:self
                  success:@selector(soapSuccess:)
                  failure:@selector(soapFailure:errorHandler:)];
    [self soapRunLoop];
    [dsapi release];
}

- (void)soapSuccess:(id)soapRequest
{
    NSLog(@"%s soap call succeeded", class_getName([soapRequest class]));
    self.soapCallActive = NO;
}

- (void)soapFailure:(id)soapRequest errorHandler:(NSString*)err
{
    self.soapCallActive = NO;
    STFail(@"%s soap call failed:\n\n ************\n%@\n ************\n", 
           class_getName([soapRequest class]), err);
}

- (void)soapRunLoop
{
    self.soapCallActive = YES;
    while (self.soapCallActive) 
    {
        NSDate* timeout = [NSDate dateWithTimeIntervalSinceNow:1];
        [[NSRunLoop currentRunLoop] runMode:NSDefaultRunLoopMode beforeDate:timeout];
    }
}

@end
