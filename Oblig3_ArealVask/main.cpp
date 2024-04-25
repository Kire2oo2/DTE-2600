#include <iostream>
#include "Handler.h"

int main() {
    //Oppretter en instans av Handler-klassen
    Handler handler;
    //Leser inputfilen og oppretter bygninger
    std::vector<Building> buildings = handler.readInputFile("input.txt");
    handler.writeOutputFiles(buildings);

    std::cout << "Outputfiler er opprettet." << std::endl;

    return 0;
}
