# CMakeのバージョンを設定
cmake_minimum_required(VERSION 3.21)

# プロジェクト名を設定
project(cpp_sample)


set(CMAKE_CXX_STANDARD 23)

add_executable(cpp_sample main.cpp samples/hello_world_sample.cpp samples/object_sample.cpp samples/object/Human.cpp)
