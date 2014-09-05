//
//  DetailViewController.h
//  BitriseUnitTestSample
//
//  Created by Viktor Benei on 9/5/14.
//  Copyright (c) 2014 Bitrise. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
