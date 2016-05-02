file(GLOB COMMON_HEADER_FILES
    LIST_DIRECTORIES false
    common.h
    opencl_wrapper.h
    sqlite_wrapper.h
    threading_wrapper.h
    )
file(GLOB COMMON_SOURCE_FILES
    LIST_DIRECTORIES false
    common.cpp
    opencl_wrapper.cpp
    sqlite_wrapper.cpp
    threading_wrapper.cpp
    )

add_library(common STATIC
    ${COMMON_HEADER_FILES}
    ${COMMON_SOURCE_FILES}
    )
