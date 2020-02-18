//
//  Renderer.h
//  demoApp
//
//  Created by Yuliia Ivanechko on 17.02.2020.
//  Copyright © 2020 Yuliia Ivanechko. All rights reserved.
//

#import <MetalKit/MetalKit.h>

// Our platform independent renderer class.   Implements the MTKViewDelegate protocol which
//   allows it to accept per-frame update and drawable resize callbacks.
@interface Renderer : NSObject <MTKViewDelegate>

-(nonnull instancetype)initWithMetalKitView:(nonnull MTKView *)view;

@end

