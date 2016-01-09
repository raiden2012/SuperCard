//
//  PlayingCardView.h
//  SuperCard
//
//  Created by Wei Tu on 9/1/2016.
//  Copyright © 2016 Wei Tu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayingCardView : UIView

@property (nonatomic) NSUInteger rank;
@property (nonatomic, strong) NSString *suit;
@property (nonatomic) BOOL faceUp;

- (void)pinch:(UIPinchGestureRecognizer *)gesture;

@end
