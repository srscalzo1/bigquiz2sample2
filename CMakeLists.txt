cmake_minimum_required(VERSION 3.10)
project(BQ2-Sample2 CXX)

set(CMAKE_CXX_STANDARD 11)

add_executable(settings_app
    main.cpp
    SettingsManager.cpp
    ModuleX.cpp
    ModuleY.cpp
)

add_executable(tests
    tests.cpp
    SettingsManager.cpp
    ModuleX.cpp
    ModuleY.cpp
)

enable_testing()
add_test(NAME tests COMMAND tests)
