//
//  DocuSign_iOS_Sample_AppTests.h
//  DocuSign-iOS-Sample-AppTests
//
//  Created by JD Brennan on 5/14/11.
//  Copyright 2011 DocuSign Inc. All rights reserved.
//

#import <SenTestingKit/SenTestingKit.h>


@interface DocuSign_iOS_Sample_AppTests : SenTestCase {
}

@property (assign) BOOL soapCallActive;

-(void)soapRunLoop;

@end
