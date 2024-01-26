#ifndef PERSON_H
#define PERSON_H

#include <string>

class person
{
public:
    person(std::string name, int age);
    void printInfo();
    void ageUp();

private:
    int age;
    std::string name;
};


#endif // PERSON_H

