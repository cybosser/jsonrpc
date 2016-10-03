#ifndef JSONRPC_HTTP_CLIENT_HPP
#define JSONRPC_HTTP_CLIENT_HPP

#include <jsonrpc/response.hpp>

namespace jsonrpc {
namespace http
{

	class client
	{
	public:
		explicit client(std::string endpoint) { }

		response call(const std::string& method, const json& params)
		{
			return response();
		}
	};

}}

#endif
