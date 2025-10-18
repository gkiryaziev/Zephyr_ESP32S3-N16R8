cmake_minimum_required(VERSION 3.20.0)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(Zephyr_ESP32S3-N16R8)

target_sources(app PRIVATE src/main.c)