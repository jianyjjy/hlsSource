cmake_minimum_required (VERSION 2.6)
project (playlistParserTool)

include_directories(../../playlistFactory  .)
add_executable(playlistParserTool unittest.cpp)


target_link_libraries(playlistParserTool playlistFactory)
