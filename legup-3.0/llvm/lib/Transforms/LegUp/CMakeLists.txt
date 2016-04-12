add_llvm_loadable_module( LLVMLegUp
  HwOnly.cpp
  PostLTO.cpp
  PreLTO.cpp
  SwOnly.cpp
  utils.cpp
  WatchVariables.cpp
  )

target_link_libraries(LLVMLegUp LLVMCodeGen)
  
