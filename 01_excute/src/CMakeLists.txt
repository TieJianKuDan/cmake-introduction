aux_source_directory(./ SRC)
add_executable(main ${SRC})
install(TARGETS main DESTINATION bin)