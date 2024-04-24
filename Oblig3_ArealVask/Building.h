#pragma once
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
    Building();
    Building(const std::string& name, double total_area);
    void addRoom(const Room& room);
    void calculateCleaningStaff();
    const std::string& getName() const;
    const std::vector<Room>& getRooms() const;
    int getCleaningStaff() const;
    double getTotalArea() const;
};
