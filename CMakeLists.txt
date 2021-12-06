cmake_minimum_required( VERSION 3.4 )

project( demo )

add_executable( demo src/demo.cpp )

enable_testing()
add_test( NAME demo0 COMMAND demo 404 )
add_test( NAME demo1 COMMAND demo 0 )
add_test( NAME demo2 COMMAND demo 101 )
add_test( NAME demo3 COMMAND demo -1 )
add_test( NAME demo4 COMMAND demo 0 )
add_test( NAME demo5 COMMAND demo 0 )
