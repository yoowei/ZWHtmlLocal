//
//  ZWHtmlLocalManager.h
//  ZWHtmlLocal
//
//  Created by walt zeng on 16/3/21.
//  Copyright © 2016年 walt zeng. All rights reserved.
//

#import <Foundation/Foundation.h>

#define documentPath NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0]
#define homePath [documentPath stringByAppendingString:@"/homepage"]
#define DEFAULTS [NSUserDefaults standardUserDefaults]

@interface ZWHtmlLocalManager : NSObject

- (void)downloadFilesFrom:(NSString *)url;
- (NSArray *)drawPaths:(NSString *)textPath pattern:(NSString *)parttern source:(NSString *)source;
@end
