##### 
GTEST_DIR=googletest

#ROOT=/Users/mts.dev/Documents/Bonita.E/workspace/C/DesignPattern
ROOT:=$(shell dirname $(realpath $(lastword $(MAKEFILE_LIST))))

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
ABSTRACT_FACTORY_PRODUCT=${wildcard ${ABSTRACT_FACTORY_HOME}/Pizza/*.cc} 
ABSTRACT_FACTORY_PRO_INC=${ABSTRACT_FACTORY_HOME}/Pizza

ABSTRACT_FACTORY_PIZZA_INGREDIENT_FACTORY=${wildcard ${ABSTRACT_FACTORY_HOME}/PizzaIngredientFactory/*.cc}
ABSTRACT_FACTORY_PIZZA_INGREDIENT_FACTORY_INC=${ABSTRACT_FACTORY_HOME}/PizzaIngredientFactory

ABSTRACT_FACTORY_PIZZA_INGREDIENT=${wildcard ${ABSTRACT_FACTORY_HOME}/PizzaIngredients/*.cc}
ABSTRACT_FACTORY_PIZZA_INGREDIENT_INC=${ABSTRACT_FACTORY_HOME}/PizzaIngredients
ABSTRACT_FACTORY_NY_PIZZA_INGREDIENT=${wildcard ${ABSTRACT_FACTORY_HOME}/PizzaIngredients/NYIngredients/*.cc}
ABSTRACT_FACTORY_NY_PIZZA_INGREDIENT_INC=${ABSTRACT_FACTORY_HOME}/PizzaIngredients/NYIngredients
ABSTRACT_FACTORY_CHICAGO_PIZZA_INGREDIENT=${wildcard ${ABSTRACT_FACTORY_HOME}/PizzaIngredients/ChicagoIngredients/*.cc}
ABSTRACT_FACTORY_CHICAGO_PIZZA_INGREDIENT_INC=${ABSTRACT_FACTORY_HOME}/PizzaIngredients/ChicagoIngredients


abstract_factory:
	@echo "----- build abstract factory -----"
	${GCC11} \
	${ABSTRACT_FACTORY_HOME}/TestDrive.cc \
	-I${ABSTRACT_FACTORY_HOME} \
	${ABSTRACT_FACTORY_PIZZA_STORE} -I${ABSTRACT_FACTORY_PIZZA_STORE_INC} \
	${ABSTRACT_FACTORY_PRODUCT} -I${ABSTRACT_FACTORY_PRO_INC} \
	${ABSTRACT_FACTORY_PIZZA_INGREDIENT_FACTORY} -I${ABSTRACT_FACTORY_PIZZA_INGREDIENT_FACTORY_INC} \
	${ABSTRACT_FACTORY_PIZZA_INGREDIENT} -I${ABSTRACT_FACTORY_PIZZA_INGREDIENT_INC} \
 	${ABSTRACT_FACTORY_NY_PIZZA_INGREDIENT} -I${ABSTRACT_FACTORY_NY_PIZZA_INGREDIENT_INC} \
 	${ABSTRACT_FACTORY_CHICAGO_PIZZA_INGREDIENT} -I${ABSTRACT_FACTORY_CHICAGO_PIZZA_INGREDIENT_INC} \
	-o ${BIN}/$@


##### Decorator Pattern #####
DECORATOR_HOME = ${SRC}/Decorator


decorator:
	@echo "----- build decorator -----"
	${GCC11} \
	${wildcard ${DECORATOR_HOME}/*.cc} -I${DECORATOR_HOME}  \
 	-o ${BIN}/$@

clean:
	rm -rf ${BIN}/*
	rm -rf ${OBJ}/*
