//
//  ProxyImage.h
//  Design_Pattern
//
//  Created by Yusone on 16/7/5.
//  Copyright © 2016年 yusone. All rights reserved.
//

#import "Image.h"

@interface ProxyImage : Image
-(instancetype)initWithFileName:(NSString *)fileName;
@end
