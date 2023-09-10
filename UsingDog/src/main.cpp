#include "person.h"


int main(){
    Dog* dog = new Dog();
    Person* person = new Person("John", dog);
    person->WalkDog();
    delete person;
    delete dog;
    return 0;
}