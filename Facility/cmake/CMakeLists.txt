cmake_minimum_required(VERSION 2.8)

project(ads_library)

include_directories(../ASN/ ../ADS/inc ../ADS/inc/ta/)

link_directories(../output/)

#set(CMAKE_C_COMPILER "/home/maoyj/work/tool/arm-imx6x-linux-gcc/bin/arm-unknown-linux-gnueabi-gcc")
set(CMAKE_C_COMPILER gcc)

aux_source_directory(../ASN/ SRC_ASN1)

set(SOURCES_FILES ${SRC_ASN1}
				../ADS/src/ads/ads.c
                ../ADS/src/host/info_host.c
                ../ADS/src/host/gnss_libgps.c
				../ADS/src/bsm/bsm.c
				../ADS/src/message/bsm_msg.c
				../ADS/src/tc/tc.c
				../ADS/src/tool/utility.c)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ../output/)
add_library(ads_library SHARED ${SOURCES_FILES})
target_link_libraries(ads_library m pthread dlt gps)

add_library(ta_library SHARED ../ADS/src/ta/ta_main.c 
							  ../ADS/src/ta/ta_eebl.c)
target_link_libraries(ads_library ads_library m pthread dlt)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../output/)
add_executable(ads_test ../test/main.c)
target_link_libraries(ads_test ads_library dlt)

target_link_libraries(ads_library)
