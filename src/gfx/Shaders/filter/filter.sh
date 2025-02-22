#ifndef TWO_SHADER_COMPOSITING
#define TWO_SHADER_COMPOSITING

#include <common.sh>

#if defined SOURCE_0_CUBE
SAMPLERCUBE(    s_source_0, 0);
#elif defined SOURCE_0_ARRAY
SAMPLER2DARRAY( s_source_0, 0);
#else
SAMPLER2D(      s_source_0, 0);
#endif

SAMPLER2D(s_source_1, 1);
SAMPLER2D(s_source_2, 2);
SAMPLER2D(s_source_3, 3);
SAMPLER2D(s_source_depth, 3);

uniform vec4 u_source_0_crop;

uniform int u_source_0_level;
uniform int u_source_1_level;
uniform int u_source_2_level;
uniform int u_source_3_level;

uniform mat4 u_camera_proj;

#ifdef NO_TEXEL_FETCH
#define texelFetch(_sampler, _coord, _level) texture2DLod(_sampler, vec2(_coord) * u_pixel_size, _level)
#endif

#endif
