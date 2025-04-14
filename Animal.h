/*
AUTHOR: DEXTER KONG 4/14/25
in class coding lab regarding C++ inheritance
*/
#include <string>
#ifndef ANIMAL
#define ANIMAL

class Animal {
    int age;
    public:
        Animal(int _age) : age(_age){}
        //irtual keyword utilized in order to let methods in child classes override.
        virtual std::string GetType() {return "Animal";}
        virtual int GetAge() {return age;}
        virtual Animal * Reproduce() {return new Animal(0);}
};

#endif