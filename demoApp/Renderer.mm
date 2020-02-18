//
//  Renderer.m
//  demoApp
//
//  Created by Yuliia Ivanechko on 17.02.2020.
//  Copyright © 2020 Yuliia Ivanechko. All rights reserved.
//

#import <simd/simd.h>
#import <ModelIO/ModelIO.h>

#import "mtlpp.hpp"
#import "Renderer.h"
#import "ShaderTypes.h"


@implementation Renderer {
    vector_uint2 _viewportSize;
}

- (nonnull instancetype)initWithMetalKitView:(nonnull MTKView *)mtkView
{
    self = [super init];
    if(self)
    {
        mtlpp::Device _device = ns::Handle{ (__bridge void*)mtkView.device };
        assert(_device);
    }
    return self;
}
- (void)drawInMTKView:(nonnull MTKView *)view {
    
}

- (void)mtkView:(nonnull MTKView *)view drawableSizeWillChange:(CGSize)size {
    
}

@end
