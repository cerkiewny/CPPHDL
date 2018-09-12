find_package(Boost 1.58.0 COMPONENTS program_options)

set(CORE_LIB_HEADERS
    block.hpp
    connection.hpp
    design.hpp
    entity.hpp
    identifier.hpp
    keywords.hpp
    port.hpp
    type.hpp
    units.hpp
)

set(CORE_LIB_SOURCES
    block.cpp
    connection.cpp
    design.cpp
    entity.cpp
    identifier.cpp
    keywords.cpp
    type.cpp
    units.cpp
)

add_library(core_cpphdl_sim SHARED
    ${CORE_LIB_SOURCES}
    ${CORE_LIB_HEADERS}
)
