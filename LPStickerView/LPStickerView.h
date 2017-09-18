//
//  LPStickerView.h
//  LPStickerView
//
//  Created by 罗平 on 2017/6/14.
//  Copyright © 2017年 罗平. All rights reserved.
//

#import <UIKit/UIKit.h>

UIKIT_EXTERN NSString * const LPStickerInfoCentreXName;
UIKIT_EXTERN NSString * const LPStickerInfoCentreYName;
UIKIT_EXTERN NSString * const LPStickerInfoScaleName;
UIKIT_EXTERN NSString * const LPStickerInfoAngleName; //0 ~ 360

@interface LPStickerView : UIView

/**
 *  点击删除
 */
@property (nonatomic, copy) void(^deleteBlock)();

/**
 *  StickerView信息变化   大小，位置，角度。
 */
@property (nonatomic, copy) void(^stickerInfoChangeBlock)(NSDictionary *stickerInfoDict);

/**
 *  StickerView信息字典
 *  LPStickerInfoCentreXName    中心X
 *  LPStickerInfoCentreYName    中心Y
 *  LPStickerInfoScaleName      放大比例
 *  LPStickerInfoAngleName      旋转角度
 */
@property (nonatomic, strong) NSDictionary *stickerInfoDict;

/**
 *  设置是否为响应状态
 *  default NO
 */
@property (nonatomic, assign) BOOL lp_isTransfromResponse;

/**
 *  内容view，集成后往该view中添加试图
 */
@property (nonatomic, weak, readonly) UIView *lp_contentView;

/**
 *  响应时的border颜色
 *  default redColor
 */
@property (nonatomic, strong) UIColor *lp_borderColor;

/**
 *  最大缩放比
 *  default 3.0
 */
@property (nonatomic, assign) CGFloat lp_maxScaleRadio;

/**
 *  最小缩放比
 *  default 0.5
 */
@property (nonatomic, assign) CGFloat lp_minScaleRadio;

/**
 *  删除按钮图片
 */
@property (nonatomic, strong) UIImage *lp_deleteImage;

/**
 *  旋转按钮颜色
 */
@property (nonatomic, strong) UIImage *lp_transfromImage;

@end
