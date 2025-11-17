#pragma once
// #include <optional>
#include "general/errors_forward.hpp"
#include "tl/optional.hpp"
namespace wrt {
using namespace tl;
template <typename T>
T or_throw(optional<T>&& o, Error e)
{
    if (o)
        return std::move(*o);
    throw e;
}
}
