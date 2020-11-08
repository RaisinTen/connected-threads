cmake_minimum_required(VERSION 3.0)

set(Tests Tests)

set(Sources
    QueueTests.c
    )

add_executable(${Tests} ${Sources})

target_link_libraries(
    ${Tests} PUBLIC
    gtest_main
    ${PROJECT_NAME}
    )

add_test(
    NAME ${Tests}
    COMMAND ${Tests}
    )
