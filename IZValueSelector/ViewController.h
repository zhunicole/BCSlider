//
//  ViewController.h
//  BCSlider
//
//  Created by Nicole Zhu on 08/03/14.
//  Copyright (c) 2014 Nicole Zhu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IZValueSelectorView.h"
@interface ViewController : UIViewController<IZValueSelectorViewDataSource,IZValueSelectorViewDelegate>




@property (nonatomic,weak) IBOutlet IZValueSelectorView *selectorVertical;
@property (nonatomic,weak) IBOutlet IZValueSelectorView *selectorHorizontal;

@end
