add_executable(entrypoint
  main.cpp)

target_link_libraries(entrypoint
  model
  view
  controller)
