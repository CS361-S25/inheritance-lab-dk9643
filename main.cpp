/*
AUTHOR: DEXTER KONG 4/14/25
in class coding lab regarding C++ inheritance
*/
#include "emp/base/vector.hpp"
#include "emp/base/Ptr.hpp"
#include <ostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"


int main() {
    //initial setup of vector of pointers to hold pointers to call animals
    emp::vector<emp::Ptr<Animal>> population;
    population.push_back(new Dog(5, 2));
    //Exercise 4
    std::cout << population[0]->GetType() << std::endl;
    Animal test = *population[0];
    std::cout << test.GetType() << std::endl;
    //Exercise 5
    std::cout << population[0]->GetAge() << std::endl;
    //Exercise 6: test for the reproduce function
    population.push_back(population[0]->Reproduce());
    std::cout << population[1]->GetType() << std::endl;
    //Exercise 7: using typecasting in order to utilize subclass specfic methods
    std::cout << population[0].DynamicCast<Dog>()->GetSpots() << std::endl;
    //Exercise 8: experimentation with new class
    population.push_back(new Cat(10, 10));
    std::cout << population[2].DynamicCast<Cat>()->GetCuteness() << std::endl;
}
