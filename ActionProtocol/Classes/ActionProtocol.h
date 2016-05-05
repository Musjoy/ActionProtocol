//
//  ActionProtocol.h
//  Common
//
//  Created by 黄磊 on 16/4/6.
//  Copyright © 2016年 Musjoy. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^ActionVoidBlock)();

typedef void (^ActionValueBlock)(id data);

typedef void (^ActionCompleteBlock)(BOOL isSucceed, NSString *message, id data);

@protocol ActionCompleteDelegate <NSObject>

@required
- (void)setCompleteBlock:(ActionCompleteBlock)completeBlock;

@end
