//
//  ServerUseSSLCell.h
//  TransmissionRPCClient
//
//  Created by Alexey Chechetkin on 23.06.15.
//  Copyright (c) 2015 Alexey Chechetkin. All rights reserved.
//

#import <UIKit/UIKit.h>

#define CELL_ID_USESSL  @"useSSLCell"

@interface ServerUseSSLCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet UISwitch *statusSwitch;

@end
