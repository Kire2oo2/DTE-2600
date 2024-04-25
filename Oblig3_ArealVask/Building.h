#pragma once //headerfil, sørger for kun inkluderes 1 gang

#include <string>
#include <vector>
#include "Room.h"

class Building {
private:
    std::string name;
    std::vector<Room> rooms;
    int cleaning_staff;
    double total_area;
public:

    //Standardkonstruktør
    Building();
    //Konstruktør med navn og totalt areal
    Building(const std::string& name, double total_area);
    //Legger til et rom i bygningen
    void addRoom(const Room& room);

    void calculateCleaningStaff();

    //Returnerer navnet på bygningen
    const std::string& getName() const;
    //Returnerer en referanse til vektoren av rom i bygningen
    const std::vector<Room>& getRooms() const;

    int getCleaningStaff() const;

    double getTotalArea() const;
};
