//  Copyright (c) 2019 Hugo Amiard hugo.amiard@laposte.net
//  This software is provided 'as-is' under the zlib License, see the LICENSE.txt file.
//  This notice and the license may not be removed or altered from any source distribution.

#include <infra/Cpp20.h>

#ifdef TWO_MODULES
module two.obj;
#else
#include <infra/Config.h>
#include <type/Var.h>
#include <type/Any.h>
#endif

namespace two
{
	AnyHandler AnyHandler::none;
}
