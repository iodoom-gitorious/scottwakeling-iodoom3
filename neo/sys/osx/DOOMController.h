// $Header: /Network/CIFS/Limbo/Limbo/CVS/id/missionpack/code/macosx/Client/DOOMController.h,v 1.2 2000/11/14 04:38:34 zaphod Exp $

#import <AppKit/AppKit.h>

@interface DOOMController : NSObject
- (void)quakeMain;
- (BOOL)checkRegCodes;
- (BOOL)checkOS;
@end
