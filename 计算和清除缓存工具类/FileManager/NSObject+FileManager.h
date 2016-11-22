//
//  NSObject+FileManager.h
//  计算和清除缓存工具类
//
//  Created by gary.liu on 16/11/22.
//  Copyright © 2016年 gary.liu. All rights reserved.
//

// 使用NSObject的分类专门计算缓存，封装好的工具类中使用了多线程和Block作为回调处理

#import <Foundation/Foundation.h>

@interface NSObject (FileManager)

// 类方法获取文件的大小
+ (void)getFileSizeWithFileName:(NSString *)path completion:(void(^)(NSInteger totalSize))completionBlock;
// 对象方法获取文件的大小
- (void)getFileSizeWithFileName:(NSString *)path completion:(void(^)(NSInteger totalSize))completionBlock;

// 类方法获取caches路径
+ (NSString *)cachesPath;
// 对象方法获取caches路径
- (NSString *)cachesPath;

// 类方法移除caches
+ (void)removeCachesWithCompletion:(void(^)())completionBlock;
// 对象方法移除caches
- (void)removeCachesWithCompletion:(void(^)())completionBlock;

@end
