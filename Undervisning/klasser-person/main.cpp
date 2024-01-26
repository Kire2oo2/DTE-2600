#include "person.h"

int main() {
    person person1 = person("Erik", 21);
    person1.printInfo();
    person1.ageUp();
    person1.printInfo();
}
