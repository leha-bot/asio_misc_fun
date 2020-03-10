#include <iostream>
#include <istream>
#include <boost/asio.hpp>
#include <string_view>

namespace asio = boost::asio;

class Client {
	using error_code = boost::system::error_code;

	asio::io_service svc;
	asio::ip::tcp::socket socket;
public:
	Client(const std::string_view &host,
		int port) : socket(svc)
	{
		
		socket.async_connect(asio::ip
			[this](const error_code & ec) -> void
			{this->on_connect(ec);});
	}

	void on_connect(const error_code &ec){}
};

int main()
{
	using boost::asio::io_service;
	io_service svc;
}

