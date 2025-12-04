cmake_minimum_required(VERSION 3.16)
project(schubfach CXX)

add_library(schubfach schubfach.cc schubfach.h)
target_compile_features(schubfach PRIVATE cxx_std_20)
