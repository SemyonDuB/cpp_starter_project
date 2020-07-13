find_package(Boost REQUIRED COMPONENTS unit_test_framework)

add_executable(boost_test test.cpp)
target_link_libraries(boost_test 
    PRIVATE 
    project_options
    project_warnings
    Boost::unit_test_framework)

add_test(NAME boost_test COMMAND boost_test)
