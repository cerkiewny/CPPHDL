find_package(Boost 1.58.0 COMPONENTS program_options)

if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
  add_executable(cpphdl main.cpp)
  target_link_libraries(cpphdl ${Boost_LIBRARIES})
endif()
