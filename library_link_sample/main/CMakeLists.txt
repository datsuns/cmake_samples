link_directories(${CMAKE_CURRENT_BINARY_DIR}/../lib)
link_libraries(sample_shared_lib)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../lib)
add_executable(sample_shared_lib_linked
  main.cpp
  )
