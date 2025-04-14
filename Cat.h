/*
AUTHOR: DEXTER KONG 4/14/25
in class coding lab regarding C++ inheritance
*/
#include "Animal.h"

#include <string>
class Cat : public Animal {
    int cuteness;
    public:
        Cat(int _age, int _num_spots) : Animal(_age), cuteness(_num_spots) {}
        std::string GetType() {return "Cat";}
        int GetAge() {return Animal::GetAge() * 7;}
        int GetCuteness() {return cuteness;}
        Cat * Reproduce() {return new Cat(0, GetCuteness());}
};