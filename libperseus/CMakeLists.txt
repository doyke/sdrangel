project(perseus)

find_package(LibUSB)

add_definitions(-DHAVE_CONFIG_H)

set(perseus_SOURCES
    ${LIBPERSEUSSRC}/fifo.c
    fpga_data.c
    ${LIBPERSEUSSRC}/perseuserr.c
    ${LIBPERSEUSSRC}/perseusfx2.c
    ${LIBPERSEUSSRC}/perseus-in.c
    ${LIBPERSEUSSRC}/perseus-sdr.c
)

set(perseus_HEADERS
    ${LIBPERSEUSSRC}/fifo.h
    fpga_data.h
    ${LIBPERSEUSSRC}/perseuserr.h
    ${LIBPERSEUSSRC}/perseusfx2.h
    ${LIBPERSEUSSRC}/perseus-in.h
    ${LIBPERSEUSSRC}/perseus-sdr.h
)

include_directories(
    .
    ${CMAKE_CURRENT_BINARY_DIR}
    ${LIBUSB_INCLUDE_DIR}    
    ${LIBPERSEUSSRC}
)

add_definitions(-DQT_SHARED)

add_library(perseus SHARED
    ${perseus_SOURCES}
)

target_link_libraries(perseus
    ${LIBUSB_LIBRARIES}
)

install(TARGETS perseus DESTINATION lib)
