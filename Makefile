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
all: 
#	${GCC11} -o ${BIN}/main ${SRC}/main.cc ${SRC}/sum.cc -I${INC}

mock:
	#${GCC11} -o ${BIN}/sum_test ${SRC}/sum_test.cc ${SRC}/sum.cc -I${INC} -isystem -L${GTEST_DIR}/build -pthread -lgtest 
	${GCC11} -o ${BIN}/sum_test ${SRC}/sum_test.cc ${SRC}/sum.cc -I${INC} -isystem -pthread ${LIB_GTEST}

#####
design_pattern: factory_method abstract_factory decorator command singleton observer strategy template_method iterator

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

DECORATOR_BEVERAGES=${wildcard ${DECORATOR_HOME}/Beverages/*.cc}
DECORATOR_BEVERAGES_INC=${DECORATOR_HOME}/Beverages
DECORATOR_CONDIMENTS=${wildcard ${DECORATOR_HOME}/Condiments/*.cc}
DECORATOR_CONDIMENTS_INC=${DECORATOR_HOME}/Condiments

decorator:
	@echo "----- build decorator -----"
	${GCC11} \
	${wildcard ${DECORATOR_HOME}/*.cc} -I${DECORATOR_HOME}  \
	${DECORATOR_BEVERAGES} -I${DECORATOR_BEVERAGES_INC} \
	${DECORATOR_CONDIMENTS} -I${DECORATOR_CONDIMENTS_INC} \
 	-o ${BIN}/$@


##### Command Pattern #####
COMMAND_HOME=${SRC}/CommandPattern

COMMAND_COMMANDS=${wildcard ${COMMAND_HOME}/Commands/*.cc}
COMMAND_COMMANDS_INC=${COMMAND_HOME}/Commands
COMMAND_COMMANDS_APPLIANCE=${wildcard ${COMMAND_HOME}/Commands/ApplianceControl/*.cc}
COMMAND_COMMANDS_APPLIANCE_INC=${COMMAND_HOME}/Commands/ApplianceControl
COMMAND_COMMANDS_CEILING_FAN=${wildcard ${COMMAND_HOME}/Commands/Ceiling/*.cc}
COMMAND_COMMANDS_CEILING_FAN_INC=${COMMAND_HOME}/Commands/Ceiling
COMMAND_COMMANDS_GARAGE=${wildcard ${COMMAND_HOME}/Commands/Garage/*.cc}
COMMAND_COMMANDS_GARAGE_INC=${COMMAND_HOME}/Commands/Garage
COMMAND_COMMANDS_LIGHT=${wildcard ${COMMAND_HOME}/Commands/Light/*.cc}
COMMAND_COMMANDS_LIGHT_INC=${COMMAND_HOME}/Commands/Light
COMMAND_COMMANDS_FAUCET=${wildcard ${COMMAND_HOME}/Commands/Faucet/*.cc}
COMMAND_COMMANDS_FAUCET_INC=${COMMAND_HOME}/Commands/Faucet

COMMAND_INVOKER=${wildcard ${COMMAND_HOME}/Invoker/*.cc}
COMMAND_INVOKER_INC=${COMMAND_HOME}/Invoker
COMMAND_RECEIVERS=${wildcard ${COMMAND_HOME}/Receivers/*.cc}
COMMAND_RECEIVERS_INC=${COMMAND_HOME}/Receivers
COMMAND_CLIENT=${wildcard ${COMMAND_HOME}/Client/*.cc}
COMMAND_CLIENT_INC=${COMMAND_HOME}/Client

command:
	@echo "----- build command -----"
	${GCC11} \
	${wildcard ${COMMAND_HOME}/*.cc} -I${COMMAND_HOME} \
	${COMMAND_COMMANDS} -I${COMMAND_COMMANDS_INC} \
	${COMMAND_COMMANDS_APPLIANCE} -I${COMMAND_COMMANDS_APPLIANCE_INC} \
	${COMMAND_COMMANDS_CEILING_FAN} -I${COMMAND_COMMANDS_CEILING_FAN_INC} \
	${COMMAND_COMMANDS_GARAGE} -I${COMMAND_COMMANDS_GARAGE_INC} \
	${COMMAND_COMMANDS_LIGHT} -I${COMMAND_COMMANDS_LIGHT_INC} \
	${COMMAND_COMMANDS_FAUCET} -I${COMMAND_COMMANDS_FAUCET_INC} \
	${COMMAND_INVOKER} -I${COMMAND_INVOKER_INC} \
	${COMMAND_RECEIVERS} -I${COMMAND_RECEIVERS_INC} \
	${COMMAND_CLIENT} -I${COMMAND_CLIENT_INC} \
 	-o ${BIN}/$@


##### Singleton Pattern #####
SINGLETON_HOME=${SRC}/Singleton

singleton:
	@echo "----- build singleton -----"
	${GCC11} \
	${wildcard ${SINGLETON_HOME}/*.cc} -I${SINGLETON_HOME} \
 	-o ${BIN}/$@


##### Observer Pattern #####
OBSERVER_HOME=${SRC}/Observer

OBSERVER_WHEATER_STATION=${OBSERVER_HOME}/WeatherStation
OBSERVER_OBJECTS=${OBSERVER_HOME}/Observers

observer:
	@echo "----- build observer -----"
	${GCC11} \
	${LIB_GTEST} \
	${wildcard ${OBSERVER_HOME}/*.cc} -I${OBSERVER_HOME} \
	${wildcard ${OBSERVER_WHEATER_STATION}/*.cc} -I${OBSERVER_WHEATER_STATION} \
	${wildcard ${OBSERVER_OBJECTS}/*.cc} -I${OBSERVER_OBJECTS} \
 	-o ${BIN}/$@


##### Strategy Pattern #####
STRATEGY_HOME=${SRC}/strategy

STRATEGY_CLIENTS=${STRATEGY_HOME}/clients
STRATEGY_FLY=${STRATEGY_HOME}/fly
STRATEGY_QUACK=${STRATEGY_HOME}/quack

strategy:
	@echo "----- build strategy -----"
	${GCC11} \
	${LIB_GTEST} \
	${wildcard ${STRATEGY_HOME}/*.cc} -I${STRATEGY_HOME} \
	${wildcard ${STRATEGY_CLIENTS}/*.cc} -I${STRATEGY_CLIENTS} \
	${wildcard ${STRATEGY_FLY}/*.cc} -I${STRATEGY_FLY} \
	${wildcard ${STRATEGY_QUACK}/*.cc} -I${STRATEGY_QUACK} \
 	-o ${BIN}/$@


##### Template Method Pattern #####
TEMPLATE_METHOD_HOME=${SRC}/template_method

TEMPLATE_METHOD_TEMPLATES=${TEMPLATE_METHOD_HOME}/templates

template_method:
	@echo "----- build template method -----"
	${GCC11} \
	${LIB_GTEST} \
	${wildcard ${TEMPLATE_METHOD_HOME}/*.cc} -I${TEMPLATE_METHOD_HOME} \
	${wildcard ${TEMPLATE_METHOD_TEMPLATES}/*.cc} -I${TEMPLATE_METHOD_TEMPLATES} \
 	-o ${BIN}/$@


##### Iterator Pattern #####
ITERATOR_HOME=${SRC}/iterator

ITERATOR_PANCAKEHOUSE=${ITERATOR_HOME}/PancakeHouse
ITERATOR_DINER=${ITERATOR_HOME}/Diner
ITERATOR_MENU=${ITERATOR_HOME}/Menu
ITERATOR_ITERATOR=${ITERATOR_HOME}/menuitem_iterator

iterator:
	@echo "----- build iterator -----"
	${GCC11} \
	${LIB_GTEST} \
	${wildcard ${ITERATOR_HOME}/*.cc} -I${ITERATOR_HOME} \
	${wildcard ${ITERATOR_MENU}/*.cc} -I${ITERATOR_MENU} \
	${wildcard ${ITERATOR_PANCAKEHOUSE}/*.cc} -I${ITERATOR_PANCAKEHOUSE} \
	${wildcard ${ITERATOR_DINER}/*.cc} -I${ITERATOR_DINER} \
	${wildcard ${ITERATOR_ITERATOR}/*.cc} -I${ITERATOR_ITERATOR} \
 	-o ${BIN}/$@


clean:
	rm -rf ${BIN}/*
	rm -rf ${OBJ}/*
