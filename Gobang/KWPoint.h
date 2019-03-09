//
//  KWPoint.h
//  Gobang
//
//  Created by iBonjour on 16/3/15.
//  Copyright © 2016年 iBonjour. All rights reserved.
//

// 只有两个整数属性的point

#import <Foundation/Foundation.h>

@interface KWPoint : NSObject

@property (nonatomic, assign) NSInteger x;
@property (nonatomic, assign) NSInteger y;

- (id)initPointWith:(NSInteger)x y:(NSInteger)y;

@end
