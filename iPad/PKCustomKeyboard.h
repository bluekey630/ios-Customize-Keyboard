//
//  PKCustomKeyboard.h
//  PunjabiKeyboard
//
//  Created by Dmitry Skoch on 7/19/16.
//  Copyright (c) 2016 Dmitry Skoch. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface PKCustomKeyboard : UIView <UIInputViewAudioFeedback>

@property (strong, nonatomic) IBOutlet UIImageView *keyboardBackground;
@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *characterKeys;
@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *altButtons;
@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *shiftButtons;
@property (strong, nonatomic) IBOutlet UIButton *returnButton;
@property (strong, nonatomic) IBOutlet UIButton *deleteButton;
@property (strong, nonatomic) IBOutlet UIButton *dismissButton;
@property (strong) id<UITextInput> textView;

- (IBAction)returnPressed:(id)sender;
- (IBAction)shiftPressed:(id)sender;
- (IBAction)altPressed:(id)sender;
- (IBAction)dismissPressed:(id)sender;
- (IBAction)deletePressed:(id)sender;
- (IBAction)characterPressed:(id)sender;
- (IBAction)unShift;

@end
