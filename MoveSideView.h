//
//  moveSideView.h
//  moveSide
//
//  Created by Lenny on 16/4/9.
//  Copyright © 2016年 Lenny. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MoveSideView : UIView<UICollectionViewDataSource,UICollectionViewDelegate>

@property(nonatomic,strong)UICollectionView *collectionView;

@end
