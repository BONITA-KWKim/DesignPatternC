#include "PizzaStore.hh"

/* Pizzas */
#include "NoPizza.hh"
#include "NYCheesePizza.hh"
#include "NYClamPizza.hh"
#include "NYPepperoniPizza.hh"
#include "NYVeggiePizza.hh"

class NYPizzaStore : public PizzaStore{
public:
    Pizza* createPizza(string type);
};


/* End of the File */
