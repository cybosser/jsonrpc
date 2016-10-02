#ifndef JSONRPC_ERROR_HPP
#define JSONRPC_ERROR_HPP

#include <string>

namespace jsonrpc
{

	class error
	{
	private:
		int				_code;
		std::string		_message;

	public:
		error(int code, std::string message) noexcept
			: _code(code), _message(std::move(message))
		{ }

		int code() const noexcept	{ return _code; }
		std::string message() const { return _message; }
	};

}

#endif
