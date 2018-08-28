//
//   YLDargSortCell.h
//   
//
//  Created by HelloYeah on 2016/11/30.
//  Copyright © 2016年 YeLiang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YLDargSortItemModel.h"

@protocol SKDragSortDelegate <NSObject>

- (void)YLDargSortCellGestureAction:(UIGestureRecognizer *)gestureRecognizer;

- (void)YLDargSortCellCancelSubscribe:(NSString *)subscribe;

@property (nonatomic,assign) BOOL isEditing;
@end

@interface YLDargSortCell : UICollectionViewCell
@property (nonatomic,strong) NSString * subscribe;
@property (nonatomic,weak) id<SKDragSortDelegate> delegate;

- (void)showDeleteBtn;

- (void)installWithModel:(YLDargSortItemModel *)model;

@end
