#pragma once
#include <string>
#include "dog.h"

class Person {
private:
    std::string name;
    Dog* dog;
public:
    Person(const std::string& name, Dog* dog);
    ~Person();
    void WalkDog();
};