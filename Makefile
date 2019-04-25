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

#####
all: factory_method abstract_factory
#	${GCC11} -o ${BIN}/main ${SRC}/main.cc ${SRC}/sum.cc -I${INC}

mock:
	#${GCC11} -o ${BIN}/sum_test ${SRC}/sum_test.cc ${SRC}/sum.cc -I${INC} -isystem -L${GTEST_DIR}/build -pthread -lgtest 
	${GCC11} -o ${BIN}/sum_test ${SRC}/sum_test.cc ${SRC}/sum.cc -I${INC} -isystem -pthread ${LIB_GTEST}

##### Factory Method Pattern #####
FACTORY_METHOD_HOME = ${SRC}/FactoryMethodPattern
FACTORY_METHOD_PIZZA_STORE=${wildcard ${FACTORY_METHOD_HOME}/PizzaStore/*.cc}
FACTORY_METHOD_PIZZA_STORE_INC=${FACTORY_METHOD_HOME}/PizzaStore
FACTORY_METHOD_PRODUCT_NY=${wildcard ${FACTORY_METHOD_HOME}/Pizza/NYStyle/*.cc} 
FACTORY_METHOD_PRO_INC_NY=${FACTORY_METHOD_HOME}/Pizza/NYStyle
FACTORY_METHOD_PRODUCT_CHICAGO=${wildcard ${FACTORY_METHOD_HOME}/Pizza/ChicagoStyle/*.cc} 
FACTORY_METHOD_PRO_INC_CHICAGO=${FACTORY_METHOD_HOME}/Pizza/ChicagoStyle

factory_method:
	@echo "----- build factory method -----"
	${GCC11} \
	${FACTORY_METHOD_HOME}/TestDrive.cc \
	${FACTORY_METHOD_HOME}/PizzaStore.cc \
	${FACTORY_METHOD_HOME}/Pizza.cc \
	-I${FACTORY_METHOD_HOME} \
	${FACTORY_METHOD_PIZZA_STORE} -I${FACTORY_METHOD_PIZZA_STORE_INC} \
	$(FACTORY_METHOD_PRODUCT_NY) -I${FACTORY_METHOD_PRO_INC_NY} \
	${FACTORY_METHOD_PRODUCT_CHICAGO} -I${FACTORY_METHOD_PRO_INC_CHICAGO} \
	${FACTORY_METHOD_HOME}/Pizza/NoPizza.cc -I${FACTORY_METHOD_HOME}/Pizza \
	-o ${BIN}/$@

##### Abstract Factory Pattern #####
ABSTRACT_FACTORY_HOME = ${SRC}/AbstractFactoryPattern
ABSTRACT_FACTORY_PIZZA_STORE=${wildcard ${ABSTRACT_FACTORY_HOME}/PizzaStore/*.cc}
ABSTRACT_FACTORY_PIZZA_STORE_INC=${ABSTRACT_FACTORY_HOME}/PizzaStore
ABSTRACT_FACTORY_PRODUCT_NY=${wildcard ${ABSTRACT_FACTORY_HOME}/Pizza/NYStyle/*.cc} 
ABSTRACT_FACTORY_PRO_INC_NY=${ABSTRACT_FACTORY_HOME}/Pizza/NYStyle
ABSTRACT_FACTORY_PRODUCT_CHICAGO=${wildcard ${ABSTRACT_FACTORY_HOME}/Pizza/ChicagoStyle/*.cc} 
ABSTRACT_FACTORY_PRO_INC_CHICAGO=${ABSTRACT_FACTORY_HOME}/Pizza/ChicagoStyle

ABSTRACT_FACTORY_PIZZA_INGREDIENT_FACTORY=${wildcard ${ABSTRACT_FACTORY_HOME}/PizzaIngredientFactory/*.cc}
ABSTRACT_FACTORY_PIZZA_INGREDIENT_FACTORY_INC=${ABSTRACT_FACTORY_HOME/PizzaIngredientFactory}
ABSTRACT_FACTORY_PIZZA_INGREDIENT=${wildcard ${ABSTRACT_FACTORY_HOME}/PizzaIngredients/*.cc}
ABSTRACT_FACTORY_PIZZA_INGREDIENT_INC=${ABSTRACT_FACTORY_HOME}/PizzaIngredients

abstract_factory:
	@echo "----- build abstract factory -----"
	${GCC11} \
	${ABSTRACT_FACTORY_HOME}/TestDrive.cc \
	${ABSTRACT_FACTORY_HOME}/PizzaStore.cc \
	${ABSTRACT_FACTORY_HOME}/Pizza.cc \
	-I${ABSTRACT_FACTORY_HOME} \
	${ABSTRACT_FACTORY_PIZZA_STORE} -I${ABSTRACT_FACTORY_PIZZA_STORE_INC} \
	$(ABSTRACT_FACTORY_PRODUCT_NY) -I${ABSTRACT_FACTORY_PRO_INC_NY} \
	${ABSTRACT_FACTORY_PRODUCT_CHICAGO} -I${ABSTRACT_FACTORY_PRO_INC_CHICAGO} \
	${ABSTRACT_FACTORY_HOME}/Pizza/NoPizza.cc -I${ABSTRACT_FACTORY_HOME}/Pizza \
	${ABSTRACT_FACTORY_PIZZA_INGREDIENT_FACTORY} -I${ABSTRACT_FACTORY_PIZZA_INGREDIENT_FACTORY_INC} \
	${ABSTRACT_FACTORY_PIZZA_INGREDIENT} -I${ABSTRACT_FACTORY_PIZZA_INGREDIENT_INC} \
	-o ${BIN}/$@




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
