//
//  AboutViewController.m
//  FinanceLine
//
//  Created by Tristan Hume on 2013-09-15.
//  Copyright (c) 2013 Tristan Hume. All rights reserved.
//

#import "AboutViewController.h"
#import "GAI.h"

@interface AboutViewController ()

@end

@implementation AboutViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
  [super viewDidLoad];
	// Do any additional setup after loading the view.
  self.screenName = @"AboutView";
}

- (void)viewDidAppear:(BOOL)animated {
  [super viewDidAppear:animated];
  [[GAI sharedInstance] dispatch];
}

- (IBAction)closeModal {
  [self dismissViewControllerAnimated:YES completion:^(){}];
}

- (IBAction)appSiteLink {
  [[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"http://thume.ca/stashline"]];
}

- (IBAction)mySiteLink {
  [[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"http://thume.ca/"]];
}

- (IBAction)emailMeLink {
  [[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"mailto:tristan@thume.ca"]];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
