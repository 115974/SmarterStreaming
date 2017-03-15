//
//  ViewController.h
//  SmartiOSPlayer
//
//  GitHub: https://github.com/daniulive/SmarterStreaming
//  website: http://www.daniulive.com
//
//  Created by daniulive on 2016/01/03.
//  Copyright © 2015~2017 daniulive. All rights reserved.

#import <UIKit/UIKit.h>
#import "SmartPlayerSDK.h"

@interface ViewController : UIViewController<SmartPlayerDelegate>

- (instancetype)initParameter:(NSString*)url isHalfScreen:(Boolean)isHalfScreenVal isAudioOnly:(Boolean)isAudioOnly
                  isHWDecoder:(Boolean)isHWDecoder isRTSPTcpMode:(Boolean)isRTSPTcpMode;

@end

