//
//  TrackView.h
//  FinanceLine
//
//  Created by Tristan Hume on 2013-06-18.
//  Copyright (c) 2013 Tristan Hume. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NiceLabel.h"

typedef void (^BlockRenderer)(NSUInteger,NSUInteger,CGFloat,CGFloat,CGContextRef);

@protocol TrackViewDelegate <NSObject>
- (CGFloat) startMonth;
- (CGFloat) monthSize;
- (NSUInteger) maxMonth;
- (double) labelMult;
- (void) setStartMonth: (CGFloat)start;
- (void) setMonthSize: (CGFloat)scale;
- (void) setVelocity: (CGFloat)vel;
@end

@interface TrackView : UIView {
  NiceLabel *label;
}

@property (nonatomic, weak) id<TrackViewDelegate> delegate;

- (void)setLabel:(NSString*)trackLabel;
- (void)drawBlock:(NSUInteger)month ofMonths:(NSUInteger)monthsPerBlock
              atX:(CGFloat)x andScale:(CGFloat)scale withContext:(CGContextRef)context;
- (void)drawBlocks:(CGContextRef)context;
- (void)drawBlocks:(CGContextRef)context extraBlock:(BOOL)extraBlock autoScale:(BOOL)scaleBlocks;
- (void)drawBlocks:(CGContextRef)context extraBlock:(BOOL)extraBlock autoScale:(BOOL)scaleBlocks render:(BlockRenderer)renderer;
- (NSUInteger)monthForX:(CGFloat)x;
- (NSUInteger)blockForX:(CGFloat)x;
- (NSUInteger)blockSize;

@end
