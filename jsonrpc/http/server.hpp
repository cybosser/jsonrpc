#ifndef JSONRPC_HTTP_SERVER_HPP
#define JSONRPC_HTTP_SERVER_HPP

#include <jsonrpc/response.hpp>
#include <jsonrpc/token.hpp>

namespace jsonrpc {
namespace http
{

	class server
	{
	public:
		explicit server(std::string endpoint) { }

		token register(const std::string& method, std::function<response (const json&)> handler)
		{
			return token();
		}
	};

}}

#endif
