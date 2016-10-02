#ifndef JSONRPC_RESPONSE_HPP
#define JSONRPC_RESPONSE_HPP

#include <jsonrpc/error.hpp>
#include <jsonrpc/json.hpp>
#include <jsonrpc/variant.hpp>

namespace jsonrpc
{

	using response = variant<json, error>;

}

#endif
