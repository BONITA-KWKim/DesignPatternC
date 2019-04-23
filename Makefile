##### 
GTEST_DIR=googletest

ROOT=/Users/mts.dev/Documents/Bonita.E/workspace/C/DesignPattern

SRC=${ROOT}/src
INC=${ROOT}/include
OBJ=${ROOT}/build
BIN=${ROOT}/bin
TEST=${ROOT}/test

#####
GCC11=g++ -std=c++11
GCC=g++
LIB_GTEST=-L${GTEST_DIR}/build -lgtest


#####
FACTORY_PRODUCT=${wildcard ${SRC}/FactoryPattern/Pizza/NYStyle/*.cc} 
FACTORY_PRO_INC=${wildcard ${SRC}/FactoryPattern/Pizza/NYStyle}

#####
all:
	${GCC11} -o ${BIN}/main ${SRC}/main.cc ${SRC}/sum.cc -I${INC}

mock:
	#${GCC11} -o ${BIN}/sum_test ${SRC}/sum_test.cc ${SRC}/sum.cc -I${INC} -isystem -L${GTEST_DIR}/build -pthread -lgtest 
	${GCC11} -o ${BIN}/sum_test ${SRC}/sum_test.cc ${SRC}/sum.cc -I${INC} -isystem -pthread ${LIB_GTEST}

factory:
	${GCC11} -o ${BIN}/factory_pattern ${SRC}/FactoryPattern/PizzaStore.cc ${SRC}/FactoryPattern/Pizza.cc ${SRC}/FactoryPattern/NYPizzaStore.cc $(FACTORY_PRODUCT) -I${FACTORY_PRO_INC} -I${SRC}/FactoryPattern -I${SRC}/FactoryPattern/Pizza

	
clean:
	rm -rf ${BIN}/*
	rm -rf ${OBJ}/*
