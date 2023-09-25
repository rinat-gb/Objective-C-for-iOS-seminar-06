//
//  ViewController.h
//  Objective-C-final
//
//  Created by Ринат on 25.09.2023.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property(nonatomic, weak) IBOutlet UITextView *textView;
@property(nonatomic, weak) IBOutlet UITextView *textViewForFile;

@property(nonatomic) NSUserDefaults *userDefaults;

- (instancetype)initWithCoder:(NSCoder *)coder;
- (instancetype)initWithNibName:(NSString *)nibNameOrNil
                         bundle:(NSBundle *)nibBundleOrNil;
- (void)clearUserDefaults;

@end
