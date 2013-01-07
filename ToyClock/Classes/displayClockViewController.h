#import <UIKit/UIKit.h>


@interface displayClockViewController : UIViewController {
	
	IBOutlet UILabel *disTimeLabel;
}
-(void) updateLabel;
@property (nonatomic, retain) IBOutlet UILabel *disTimeLabel;
@end
