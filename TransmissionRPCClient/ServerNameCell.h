//
//  ServerNameCell.h
//  TransmissionRPCClient
//
//  Created by Alexey Chechetkin on 23.06.15.
//  Copyright (c) 2015 Alexey Chechetkin. All rights reserved.
//

#import <UIKit/UIKit.h>

#define CELL_ID_SERVER_NAME  @"nameCell"

@interface ServerNameCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UITextField *serverName;
@property (weak, nonatomic) IBOutlet UILabel *label;

@end
