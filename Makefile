GTEST_DIR=googletest

ROOT=/Users/mts.dev/Documents/Bonita.E/workspace/C/DesignPattern

SRC=${ROOT}/src
INC=${ROOT}/include
OBJ=${ROOT}/build
BIN=${ROOT}/bin
TEST=${ROOT}/test


all:
	g++ -std=c++11 -o ${BIN}/main ${SRC}/main.cc ${SRC}/sum.cc

#test:
	g++ -std=c++11 -o ${BIN}/sum_test ${SRC}/sum_test.cc ${SRC}/sum.cc -I${INC} -isystem -L${GTEST_DIR}/build -pthread -lgtest 
	
clean:
	rm -rf ${BIN}/*
	rm -rf ${OBJ}/*
