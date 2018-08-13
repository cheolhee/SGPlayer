//
//  SGPacket.h
//  SGPlayer
//
//  Created by Single on 2018/1/22.
//  Copyright © 2018年 single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SGObjectPool.h"
#import "SGObjectQueue.h"
#import "SGStream.h"

@interface SGPacket : NSObject <SGObjectPoolItem, SGObjectQueueItem>

@property (nonatomic, assign, readonly) AVPacket * corePacket;
@property (nonatomic, assign, readonly) AVCodecParameters * codecpar;
@property (nonatomic, assign, readonly) SGMediaType mediaType;

@property (nonatomic, assign, readonly) CMTime timebase;
@property (nonatomic, assign, readonly) CMTime offset;
@property (nonatomic, assign, readonly) CMTime scale;
@property (nonatomic, assign, readonly) CMTime position;
@property (nonatomic, assign, readonly) CMTime duration;
@property (nonatomic, assign, readonly) CMTime pts;
@property (nonatomic, assign, readonly) CMTime dts;
@property (nonatomic, assign, readonly) long long size;

- (void)fillWithStream:(SGStream *)stream;
- (void)fillWithStream:(SGStream *)stream offset:(CMTime)offset scale:(CMTime)scale;

@end
