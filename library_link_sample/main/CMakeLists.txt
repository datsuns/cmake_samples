link_directories(${CMAKE_CURRENT_BINARY_DIR}/../lib)
link_libraries(sample_shared_lib)
link_libraries(sample_static_lib)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../lib)
add_executable(library_linked_sample
  main.cpp
  )

# 不要かも
add_dependencies(library_linked_sample  sample_shared_lib)
add_dependencies(library_linked_sample  sample_static_lib)
