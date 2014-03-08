//
//  PlayMusicViewController.h
//  PlayMusic
//
//  Created by 尾林 祐太朗 on 2014/03/09.
//  Copyright (c) 2014年 Yutaro OBAYASHI. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface PlayMusicViewController : UIViewController

@property(nonatomic,retain)AVAudioPlayer *audio;
- (IBAction)Play:(id)sender;
- (IBAction)Stop:(id)sender;
- (IBAction)sliderValueChanged:(id)sender;

@end
