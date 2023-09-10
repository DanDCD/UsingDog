#include "person.h"
#include <iostream>

Person::Person(const std::string& name, Dog* dog) : name(name), dog(dog) {
    std::cout << "Person " << name << " created" << std::endl;
}

Person::~Person() {
    std::cout << "Person " << name << " destroyed" << std::endl;
}

void Person::WalkDog() {
    std::cout << name << " is walking " << std::endl;
    dog->bark();
}
