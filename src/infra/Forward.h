#pragma once

#include <infra/Config.h>
#include <stl/base.h>

#ifndef TWO_INFRA_EXPORT
#define TWO_INFRA_EXPORT TWO_IMPORT
#endif

#ifdef USE_STL
#include <cstddef>
namespace stl
{
	template <class T> struct span;
	template <class T, size_t Size> struct array;
}
#else
#include <stl/decls.h>
#endif

namespace two
{
	using stl::array;
	using stl::span;

    struct Filepath;
    struct swallow;
    class NonCopy;
    class Movabl;
}

#ifdef TWO_META_GENERATOR // #ifdef TWO_META_GENERATOR
#include <stl/decls.h>
namespace stl
{
}
#endif
