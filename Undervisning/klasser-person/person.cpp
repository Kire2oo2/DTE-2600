#include "person.h"
#include <stdio.h>

person::person(std::string name, int age){
    person::age = age;
    person::name = name;
}

void person::printInfo(){
    printf("name: %s\n"
           "Age: %i\n", person::name.data(), person::age);

    //.data() fordi printf ikke kan bruke string, dermed må vi gjøre om til en char array
}

void person::ageUp(){
    person::age++;

}
