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
CFLAGS=-g -Wall
GCC=g++
LIB_GTEST=-L${GTEST_DIR}/build -lgtest


#####
FACTORY_PIZZA_STORE=${wildcard ${SRC}/FactoryPattern/PizzaStore/*.cc}
FACTORY_PIZZA_STORE_INC=${SRC}/FactoryPattern/PizzaStore
FACTORY_PRODUCT_NY=${wildcard ${SRC}/FactoryPattern/Pizza/NYStyle/*.cc} 
FACTORY_PRODUCT_CHICAGO=${wildcard ${SRC}/FactoryPattern/Pizza/ChicagoStyle/*.cc} 
FACTORY_PRO_INC_NY=${SRC}/FactoryPattern/Pizza/NYStyle
FACTORY_PRO_INC_CHICAGO=${SRC}/FactoryPattern/Pizza/ChicagoStyle

#####
all:
	${GCC11} -o ${BIN}/main ${SRC}/main.cc ${SRC}/sum.cc -I${INC}

mock:
	#${GCC11} -o ${BIN}/sum_test ${SRC}/sum_test.cc ${SRC}/sum.cc -I${INC} -isystem -L${GTEST_DIR}/build -pthread -lgtest 
	${GCC11} -o ${BIN}/sum_test ${SRC}/sum_test.cc ${SRC}/sum.cc -I${INC} -isystem -pthread ${LIB_GTEST}

factory:
#	${GCC11} \
#	${SRC}/FactoryPattern/TestDrive.cc \
#	${SRC}/FactoryPattern/PizzaStore.cc \
#	${SRC}/FactoryPattern/Pizza.cc \
#	${FACTORY_PIZZA_STORE} -I${FACTORY_PIZZA_STORE_INC} \
#	$(FACTORY_PRODUCT_NY) ${FACTORY_PRODUCT_CHICAGO} \
#	-I${FACTORY_PRO_INC_NY} -I${FACTORY_PRO_INC_CHICAGO} \
#	-I${SRC}/FactoryPattern -I${SRC}/FactoryPattern/Pizza \
#	-o ${BIN}/factory_pattern

	${GCC11} \
	${SRC}/FactoryPattern/TestDrive.cc \
	${SRC}/FactoryPattern/PizzaStore.cc \
	${SRC}/FactoryPattern/Pizza.cc \
	-I${SRC}/FactoryPattern \
	${FACTORY_PIZZA_STORE} -I${FACTORY_PIZZA_STORE_INC} \
	$(FACTORY_PRODUCT_NY) ${FACTORY_PRODUCT_CHICAGO} \
	-I${FACTORY_PRO_INC_NY} -I${FACTORY_PRO_INC_CHICAGO} \
	${SRC}/FactoryPattern/Pizza/NoPizza.cc \
	-I${SRC}/FactoryPattern/Pizza \
	-o ${BIN}/factory_pattern




#TARGET=${BIN}/factoryTestDrive
#OBJS=${OBJ}/TestDrive.o

#${TARGET}: ${OBJS}
#	${GCC11} ${CFLAGS}  -o $@ ${OBJS} 

#TestDrive.o: TestDrive.cc TestDrive.hh
#	${GCC11} -c -o TestDrive.o TestDrive.cc
#NYPizzaStore.o:

	
clean:
	rm -rf ${BIN}/*
	rm -rf ${OBJ}/*
