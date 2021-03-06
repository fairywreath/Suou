#pragma once

#include <CoreTypes.h>

namespace Suou
{

enum BufferUsage : u8
{
    VERTEX_BUFFER = (1 << 0),
    INDEX_BUFFER = (1 << 1),
    STORAGE_BUFFER = (1 << 2),
    UNIFORM_BUFFER = (1 << 3),
    INDIRECT_BUFFER = (1 << 4),
    TRANSFER_SOURCE = (1 << 5),
    TRANSFER_DESTINATION = (1 << 6),
};

enum class BufferMemoryUsage
{
    GPU_ONLY,
    CPU_ONLY,
    CPU_TO_GPU,
    GPU_TO_CPU,
    CPU_COPY,
};

enum ImageUsage : u8
{
    IMAGE_TRANSFER_SOURCE = (1 << 0),
    IMAGE_TRANSFER_DESTINATION = (1 << 1),
    SAMPLED = (1 << 2),
    STORAGE = (1 << 3),
    COLOR_ATTACHMENT = (1 << 4),
    DEPTH_STENCIL_ATTACHMENT = (1 << 5),
    TRANSIENT_ATTACHMENT = (1 << 6),
    INPUT_ATTACHMENT = (1 << 7),
};

enum class SampleCount
{
    SAMPLE_COUNT_1,
    SAMPLE_COUNT_2,
    SAMPLE_COUNT_4,
    SAMPLE_COUNT_8,
    SAMPLE_COUNT_16,
};

enum class ImageFormat
{
    UNKNOWN,
    R32G32B32A32_FLOAT,
    R32G32B32A32_UINT,
    R32G32B32A32_SINT,
    R32G32B32_FLOAT,
    R32G32B32_UINT,
    R32G32B32_SINT,
    R16G16B16A16_FLOAT,
    R16G16B16A16_UNORM,
    R16G16B16A16_UINT,
    R16G16B16A16_SNORM,
    R16G16B16A16_SINT,
    R32G32_FLOAT,
    R32G32_UINT,
    R32G32_SINT,
    R10G10B10A2_UNORM,
    R10G10B10A2_UINT,
    R11G11B10_FLOAT,
    R8G8B8A8_UNORM,
    R8G8B8A8_UNORM_SRGB,
    R8G8B8A8_UINT,
    R8G8B8A8_SNORM,
    R8G8B8A8_SINT,

    B8G8R8A8_UNORM,
    B8G8R8A8_UNORM_SRGB,
    B8G8R8A8_SNORM,
    B8G8R8A8_UINT,
    B8G8R8A8_SINT,

    R16G16_FLOAT,
    R16G16_UNORM,
    R16G16_UINT,
    R16G16_SNORM,
    R16G16_SINT,
    R32_FLOAT,
    R32_UINT,
    R32_SINT,
    R8G8_UNORM,
    R8G8_UINT,
    R8G8_SNORM,
    R8G8_SINT,
    R16_FLOAT,
    D16_UNORM,
    R16_UNORM,
    R16_UINT,
    R16_SNORM,
    R16_SINT,
    R8_UNORM,
    R8_UINT,
    R8_SNORM,
    R8_SINT
};

enum class DepthImageFormat
{
    UNKNOWN,

    // 32-bit Z w/ Stencil
    D32_FLOAT_S8X24_UINT,

    // No Stencil
    D32_FLOAT,
    R32_FLOAT,

    // 24-bit Z
    D24_UNORM_S8_UINT,

    // 16-bit Z w/o Stencil
    D16_UNORM,
    R16_UNORM
};

enum class ShaderType
{
    SHADER_VERTEX,
    SHADER_FRAGMENT,
    SHADER_GEOMETRY,
    SHADER_COMPUTE,
    SHADER_TESSELATION
};

} // namespace Suou
