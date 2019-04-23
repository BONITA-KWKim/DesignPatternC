#include <string>
#include "Pizza.hh"

using namespace std;

class PizzaStore {
private:
    
public:
    PizzaStore();
    ~PizzaStore();
    
    Pizza* orderPizza(string type);
	virtual Pizza* createPizza(string type) = 0;
};


/* End of the File */
