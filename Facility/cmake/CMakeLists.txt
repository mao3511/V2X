cmake_minimum_required(VERSION 2.8)

project(ads_library)

include_directories(../src/ASN/ ../src/ADS/message ../src/ADS/common/ ../src/ADS/log/)

link_directories(../output/)

#set(CMAKE_C_COMPILER "/home/maoyj/work/tool/arm-imx6x-linux-gcc/bin/arm-unknown-linux-gnueabi-gcc")
set(CMAKE_C_COMPILER gcc)

aux_source_directory(../src/ASN/ SRC_ASN1)

set(SOURCES_FILES ${SRC_ASN1}
                ../src/ADS/log/base_log.c
				../src/ADS/message/bsm_wrapper.c
                ../src/ADS/message/rsi_wrapper.c
                ../src/ADS/message/rsm_wrapper.c 
                ../src/ADS/message/spat_wrapper.c
                ../src/ADS/message/map_wrapper.c)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ../output/)
add_library(ads_library SHARED ${SOURCES_FILES})
target_link_libraries(ads_library m pthread dlt)

#add_library(ta_library SHARED ../ADS/src/ta/ta_main.c 
#							  ../ADS/src/ta/ta_eebl.c)
#target_link_libraries(ads_library ads_library m pthread dlt)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../output/)
add_executable(ads_main ../app/main.c)
target_link_libraries(ads_main ads_library dlt)

#target_link_libraries(ads_library)
