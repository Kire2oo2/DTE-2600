#include "Building.h" // Inkluderer headerfilen for Building-klassen

//Standardkonstruktør som initialiserer medlemsvariablene til standardverdier
Building::Building() : name(""), cleaning_staff(0), total_area(0) {}

//Konstruktør som tar inn navn og totalt areal, og initialiserer medlemsvariablene
Building::Building(const std::string& name, double total_area) : name(name), total_area(total_area), cleaning_staff(0) {}

//Legger til et rom i bygningen og oppdaterer totalt areal
void Building::addRoom(const Room& room) {
    rooms.push_back(room);
    total_area += room.getLength() * room.getWidth();
}

//Beregner antall renholdspersonell som trengs for bygningen basert på areal av rommene
void Building::calculateCleaningStaff() {
    int total_area_per_cleaner = 15; // Antall kvadratmeter per renholder
    double cleaners_per_room = 2.0; // En renholder per 2 rom
    int total_rooms = rooms.size(); // Antall rom i bygningen

    // Beregner antall renholdspersonell basert på kvadratmeter og antall rom
    int cleaners_by_area = static_cast<int>(total_area / total_area_per_cleaner) + 1;
    int cleaners_by_rooms = (total_rooms + 1) / cleaners_per_room; // Runder alltid opp

    // Velger den høyeste verdien som antall renholdspersonell
    cleaning_staff = std::max(cleaners_by_area, cleaners_by_rooms);
}

//Returnerer navnet på bygningen
const std::string& Building::getName() const {
    return name;
}

//Returnerer en referanse til vektoren med rom i bygningen
const std::vector<Room>& Building::getRooms() const {
    return rooms;
}

//Returnerer antall renholdspersonell som trengs for bygningen
int Building::getCleaningStaff() const {
    return cleaning_staff;
}

//Returnerer totalt areal av bygningen
double Building::getTotalArea() const {
    return total_area;
}
