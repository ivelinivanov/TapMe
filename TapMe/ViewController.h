//
//  ViewController.h
//  TapMe
//
//  Created by Ivelin Ivanov on 7/2/13.
//  Copyright (c) 2013 Ivelin Ivanov. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController<UIAlertViewDelegate>
{
    IBOutlet UILabel *scoreLabel;
    IBOutlet UILabel *timerLabel;
    
    NSInteger score;
    NSInteger seconds;
    NSTimer *timer;
    
    AVAudioPlayer *buttonBeep;
    AVAudioPlayer *secondBeep;
    AVAudioPlayer *backgroundMusic;
        
}

-(IBAction)buttonPressed;
-(void)setupGame;
-(void)substractTime;

@end
