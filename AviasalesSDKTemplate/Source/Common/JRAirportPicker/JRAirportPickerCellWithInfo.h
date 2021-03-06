//
//  JRAirportPickerCellWithInformation.h
//
//  Copyright 2016 Go Travel Un Limited
//  This code is distributed under the terms and conditions of the MIT license.
//

#import <UIKit/UIKit.h>
#import "JRTableViewCell.h"

@interface JRAirportPickerCellWithInfo : JRTableViewCell

@property (weak, nonatomic) IBOutlet UILabel *locationInfoLabel;

- (void)startActivityIndicator;
- (void)stopActivityIndicator;

@end

