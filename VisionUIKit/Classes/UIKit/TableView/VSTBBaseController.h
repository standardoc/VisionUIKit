//
//  VSTBBaseController.h
//  VisionUIKit
//
//  Created by Dejun Liu on 2016/11/19.
//  Copyright © 2016年 Deju Liu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VSTBAdaptor.h"

@interface VSTBBaseController : UIViewController
<VSTBAdaptorDelegate>

- (NSString *)vs_constructorClassName;

@end
