//
//  ViewController.h
//  CompositeXibPart1
//
//  Created by Paul on 8/22/13.
//  Copyright (c) 2013 Paul Solt. All rights reserved.
//

#import <UIKit/UIKit.h>

// Forward declaration
@class WidgetView;

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet WidgetView *widget;

@end
