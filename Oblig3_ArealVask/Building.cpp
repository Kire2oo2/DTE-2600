#include "Building.h"

Building::Building() : name(""), cleaning_staff(0), total_area(0) {}

Building::Building(const std::string& name, double total_area) : name(name), total_area(total_area), cleaning_staff(0) {}

void Building::addRoom(const Room& room) {
    rooms.push_back(room);
    total_area += room.getLength() * room.getWidth(); // Legg til rommets areal til total_area
}

void Building::calculateCleaningStaff() {
    int total_area_per_cleaner = 15; // Antall kvadratmeter per renholder
    for (const auto& room : rooms) {
        double area = room.getLength() * room.getWidth();
        cleaning_staff += static_cast<int>(area / total_area_per_cleaner) + 1; // Legger til en renholder for hvert ekstra 15 kvadratmeter
    }
}

const std::string& Building::getName() const {
    return name;
}

const std::vector<Room>& Building::getRooms() const {
    return rooms;
}

int Building::getCleaningStaff() const {
    return cleaning_staff;
}

double Building::getTotalArea() const {
    return total_area;
}
