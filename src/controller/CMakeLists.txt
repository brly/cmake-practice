add_library(controller SHARED
  controller.cpp)

target_link_libraries(controller
  model
  view)
