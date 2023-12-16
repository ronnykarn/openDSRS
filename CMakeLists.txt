cmake_minimum_required(VERSION 3.27)

set(CMAKE_CXX_STANDARD 23)

set(NODE_HEADER_FILES
        "nodes/breaker.hpp"
        "nodes/isolator.hpp"
        "nodes/junction.hpp"
        "nodes/load_point.hpp"
        "nodes/transformer.hpp")

set(DSRS_HEADER_FILES
        "node.hpp")

set(DSRS_SOURCE_FILES
        "main.cpp")

project(openDSRS ${NODE_HEADER_FILES} ${DSRS_HEADER_FILES} ${DSRS_SOURCE_FILES})

