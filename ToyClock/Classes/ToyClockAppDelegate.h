#import <UIKit/UIKit.h>
#import "displayClockViewController.h"

@interface ToyClockAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	NSTimer *timer;
	IBOutlet displayClockViewController *disTimeViewController;
		//	IBOutlet displayClock *updateTime;
}

-(void)onTimer;
@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet displayClockViewController *disTimeViewController;
@end

