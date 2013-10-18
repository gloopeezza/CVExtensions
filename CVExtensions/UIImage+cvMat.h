//
//  UIImage+cvMat.h
//  CVExtensions
//
//  Created by Ivan Doroshenko on 10/18/13.
//  Copyright (c) 2013 DigitalBox. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (cvMat)

+ (UIImage *)imageWithCVMat:(cv::Mat *)cvMat;
- (cv::Mat *)cvMat;
@end
