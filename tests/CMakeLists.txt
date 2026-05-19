include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.tar.gz
)
FetchContent_MakeAvailable(googletest)

add_executable(test_visitor test.cpp)

target_link_libraries(test_visitor
    GTest::gtest_main
    visitor_lib
)

target_include_directories(test_visitor
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/..
)

include(GoogleTest)
gtest_discover_tests(test_visitor)
