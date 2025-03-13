cmake_minimum_required(VERSION 3.5.0)
project(sfjdhsf VERSION 0.1.0 LANGUAGES C CXX)

include(C:/vcpkg/scripts/buildsystems/vcpkg.cmake)
include_directories(C:/vcpkg/installed/x64-windows/include src)

file(GLOB_RECURSE TARGET_SRC "src/*.cpp" "src/*.c")

add_executable(main ${TARGET_SRC})

find_package(SDL2 CONFIG REQUIRED)
target_link_libraries(main
    PRIVATE
    $<TARGET_NAME_IF_EXISTS:SDL2::SDL2main>
    $<IF:$<TARGET_EXISTS:SDL2::SDL2>,SDL2::SDL2,SDL2::SDL2-static>
)

find_package(SDL2_ttf CONFIG REQUIRED)
target_link_libraries(main PRIVATE $<IF:$<TARGET_EXISTS:SDL2_ttf::SDL2_ttf>,SDL2_ttf::SDL2_ttf,SDL2_ttf::SDL2_ttf-static>)

find_package(SDL2_image CONFIG REQUIRED)
target_link_libraries(main PRIVATE $<IF:$<TARGET_EXISTS:SDL2_image::SDL2_image>,SDL2_image::SDL2_image,SDL2_image::SDL2_image-static>)