cmake_minimum_required(VERSION 4.3)
project(Backend)

set(CMAKE_CXX_STANDARD 23)

add_executable(Backend main.cpp
        stdafx.h
        Classes/SQLString.cpp
        Classes/SQLString.h
        SQL/DBContext.cpp
        SQL/DBContext.h
        Web/WebSocket.cpp
        Web/WebSocket.h
        DataStructures/Array/Array.cpp
        DataStructures/Array/Array.h
        DataStructures/LinkedList/LinkedList.cpp
        DataStructures/LinkedList/LinkedList.h
        DataStructures/LinkedList/Node.cpp
        DataStructures/LinkedList/Node.h)
