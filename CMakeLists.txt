cmake_minimum_required (VERSION 2.8)

project (LeetCode)

# ---- BUILD OPTION  ---
option(ENABLE_GET_DIST_RAW "enable get dist from api dmcam_frame_get_dist_raw." OFF)
option(BUILD_TEST "build test case" ON)

# The version number.
set(${PROJECT_NAME}_VERSION_MAJOR 1)
set(${PROJECT_NAME}_VERSION_MINOR 0)
set(${PROJECT_NAME}_VERSION_MINOR_FRAC 0)

set(CMAKE_CXX_STANDARD 20) 
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON) 

# - add modules path -
LIST(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR})
LIST(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

if (NOT WIN32)
    # - under linux find pthread and libusb
    find_package(PkgConfig)
    find_package(Threads)
    # - set rpath -
    set(CMAKE_INSTALL_RPATH "'\$ORIGIN'")
endif()

if(WIN32)
    set (generic_link_libs m advapi32 iphlpapi psapi userenv shell32 ws2_32)
    if("${CMAKE_C_COMPILER_ID}" MATCHES "GNU" OR "${CMAKE_C_COMPILER_ID}" MATCHES "Clang")
        set (generic_c_flags -g -Wall -D__USE_MINGW_ANSI_STDIO=1 -D_FILE_OFFSET_BITS=64)
        list(APPEND generic_link_libs -static-libgcc)
    else()
        set (generic_c_flags /Wall)
    endif()
    if(MSVC)
        Add_Definitions(-D_CRT_SECURE_NO_WARNINGS)
    endif()
else()
    set (generic_c_flags -g -Wall -fPIC -D_FILE_OFFSET_BITS=64)
    set (generic_link_libs m rt dl)
endif(WIN32)
message(STATUS "generic_link_libs: ${generic_link_libs}")

# - set include -
include_directories(
    include
    )

# - each sample_*.c is an executable 
file(GLOB CURRENT_SRCS 
    src/*/*.c*
)
set(CSRCS_NO_MAIN ${CURRENT_SRCS}) 
message(STATUS "CURRENT_SRCS: ${CURRENT_SRCS}")
file(GLOB CURRENT_HEADERS  
    include/*.h
)
message(STATUS "CURRENT_HEADERS: ${CURRENT_HEADERS}")
source_group("Include" FILES ${CURRENT_HEADERS} )

# --- test section -------
file(GLOB TESTCASES src/*/*.cpp)
if (BUILD_TEST)
    foreach(SINGLE_TEST ${TESTCASES})
        string(REGEX REPLACE "\\.[^.]*$" "" SINGLE_TEST_EXE ${SINGLE_TEST})
        get_filename_component(SINGLE_TEST_EXE ${SINGLE_TEST_EXE} NAME)
        message(STATUS "SINGLE_TEST_EXE: ${SINGLE_TEST_EXE}")
        # - !! test case are not build by default - 
        add_executable(${SINGLE_TEST_EXE} EXCLUDE_FROM_ALL ${SINGLE_TEST} ${CURRENT_HEADERS})

if (MSVC)
    target_compile_options(${SINGLE_TEST_EXE} PUBLIC /W3 /MT)
    target_link_libraries(${SINGLE_TEST_EXE} ${PROJECT_NAME}Objlib ${DMCAM_LIBRARIES}) 
else()
    #target_compile_options(${SINGLE_TEST_EXE} PUBLIC ${generic_c_flags} $<$<COMPILE_LANGUAGE:C>:-std=gnu99> $<$<COMPILE_LANGUAGE:CXX>:-std=c++11>)
    #target_link_libraries(${SINGLE_TEST_EXE} ${PROJECT_NAME}Objlib ${DMCAM_LIBRARIES} ${generic_link_libs} )
endif()
    endforeach(SINGLE_TEST)
endif()
