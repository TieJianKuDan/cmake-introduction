aux_source_directory(. SRC)

add_library(smath STATIC ${SRC})
add_library(dmath SHARED ${SRC})

install(TARGETS smath dmath DESTINATION lib)