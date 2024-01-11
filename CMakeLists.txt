cmake_minimum_required(VERSION 3.28)

project(
  DataGen
  VERSION 0.1
  LANGUAGES CXX)

include_directories(TwitterLite)

add_executable(DataGen 
main.cpp
TwitterLite/Tweet.cpp
TwitterLite/User.cpp
)