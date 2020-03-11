cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

project(asio-chatik)
find_package(Boost REQUIRED)
find_package(fmt)

add_executable(asio-chatik client.cpp)
target_compile_features(asio-chatik PUBLIC cxx_std_20)
target_link_libraries(asio-chatik ${Boost_LIBRARIES} fmt::fmt)

add_executable(asio-tutors tutor-timer.cpp)
target_compile_features(asio-tutors PUBLIC cxx_std_20)
target_link_libraries(asio-tutors ${Boost_LIBRARIES} fmt::fmt)

enable_testing()
find_package(GTest REQUIRED)
add_executable(asio-chatik-tests test.cpp)
target_link_libraries(asio-chatik-tests GTest::GTest GTest::Main)
gtest_discover_tests(asio-chatik-tests)


