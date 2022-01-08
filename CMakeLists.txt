project(genexec)

file(GLOB SRC_FILES *.cpp)

foreach(srcfile ${SRC_FILES})
	string(REPLACE ".cpp" "" srcname ${srcfile})
	add_executable(${srcname} ${srcfile})
endforeach(srcfile ${SRC_fILES})
