//
//  ShaderTypes.h
//  demoApp
//
//  Created by Yuliia Ivanechko on 17.02.2020.
//  Copyright © 2020 Yuliia Ivanechko. All rights reserved.
//

//
//  Header containing types and enum constants shared between Metal shaders and Swift/ObjC source
//
#ifndef ShaderTypes_h
#define ShaderTypes_h

#include <simd/simd.h>

typedef enum VertexInputIndex
{
    VertexInputIndexVertices     = 0,
    VertexInputIndexViewportSize = 1,
} VertexInputIndex;

typedef struct
{
    vector_float2 position;
    vector_float4 color;
} Vertex;

#endif /* ShaderTypes_h */

