cmake_minimum_required(VERSION 3.27)
project(NoLifeNx)
set(CMAKE_CXX_STANDARD 17)

aux_source_directory(. NOLIFENX_SOURCES)
add_library(NoLifeNx ${NOLIFENX_SOURCES})
target_link_libraries(NoLifeNx lz4)
