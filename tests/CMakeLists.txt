include(FetchContent)
# Download Cmocka remote lib
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        v1.17.0
)
FetchContent_MakeAvailable(googletest)

# Test exec
add_executable(e2lib_tests test_main.cpp)

# Cmocka link
target_link_libraries(e2lib_tests
        PRIVATE
        e2lib
        gtest
        gtest_main
)

# Enable test system
enable_testing()
add_test(NAME test_encoder COMMAND test_encoder)