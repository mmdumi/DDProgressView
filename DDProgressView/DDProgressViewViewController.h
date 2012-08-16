//
//  DDProgressViewViewController.h
//  DDProgressView
//
//  Created by Damien DeVille on 3/13/11.
//  Copyright 2011 Snappy Code. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WPProgressView ;

@interface DDProgressViewViewController : UIViewController
{
    float   testProgress ;
    int     progressDir ;
    
    WPProgressView *progressView ;    
    WPProgressView *progressView2 ;
}

@end
