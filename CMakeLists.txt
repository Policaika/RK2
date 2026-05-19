cmake_minimum_required(VERSION 3.12)
project(RK_ochnoe)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    ConcreteElementA.cpp
    ConcreteElementB.cpp
    ConcreteElementC.cpp
    ConcreteVisitor.cpp
)

set(HEADERS
    IElement.h
    IElementVisitor.h
    ConcreteElementA.h
    ConcreteElementB.h
    ConcreteElementC.h
    ConcreteVisitor.h
)

add_library(visitor_lib ${SOURCES} ${HEADERS})
target_include_directories(visitor_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(RK_ochnoe main.cpp)
target_link_libraries(RK_ochnoe PRIVATE visitor_lib)

install(TARGETS RK_ochnoe DESTINATION bin)

enable_testing()
add_subdirectory(tests)
