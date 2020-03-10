#include <boost/asio.hpp>
#include <iostream>
#include <string_view>
#include <chrono>
#include <span>

namespace asio = boost::asio;
namespace chrono = std::chrono;
using namespace std::literals::chrono_literals;

namespace utils {
}


namespace asio_tutors {
static constexpr std::string_view current_namespace{"asio_tutors"};

/// @brief Top-level class for all Asio tutors.
struct tutorial {
	std::string_view name;
	std::string_view desc;
	std::string_view url;
	//constexpr std::string_view filename = std::source_location
	
	virtual void run(std::span<std::string_view> args) = 0;
};

namespace timers {

class SyncTimer : public tutorial {
public:
	SyncTimer() : tutorial{"sync_timer", "Simple.synchronous timer", "http://think-async.com/Asio/boost_asio_1_12_2/doc/html/boost_asio/tutorial/tuttimer1.html"} {}

	void run(std::span<std::string_view> args) override {

	}
};
} // namespace timers
} // namespace asio_tutors

int main() {
	asio::io_context io;
	asio::steady_timer timer(io, 5s);
	timer.wait();
	std::cout << "Hello, world!" << std::endl;
}
