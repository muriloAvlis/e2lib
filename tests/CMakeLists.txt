include(FetchContent)
# Download GoogleTest remote lib
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest
        GIT_TAG v1.16.0
)
FetchContent_MakeAvailable(googletest)

# Test exec
add_executable(e2lib_tests test_main.cpp)

# Gtest link
target_link_libraries(e2lib_tests
        PRIVATE
        e2lib
        gtest
        gtest_main
)

# Habilita o sistema de testes
enable_testing()
include(GoogleTest)
gtest_discover_tests(e2lib_tests)
