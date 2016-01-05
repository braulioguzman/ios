//
//  DetailViewController.h
//  github
//
//  Created by Braulio G on 05/01/16.
//  Copyright © 2016 Braulio G. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

