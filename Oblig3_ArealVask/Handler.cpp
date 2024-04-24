#include "Handler.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>

std::vector<Building> Handler::readInputFile(const std::string& filename) {
    std::ifstream input_file(filename);
    if (!input_file.is_open()) {
        std::cerr << "Kunne ikke åpne inputfilen." << std::endl;
        return {};
    }

    std::map<std::string, Building> buildings;

    std::string line;
    while (std::getline(input_file, line)) {
        std::istringstream iss(line);
        int length, width;
        std::string building_name;
        if (!(iss >> length >> width >> building_name)) {
            std::cerr << "Ugyldig input: " << line << std::endl;
            continue;
        }

        if (buildings.find(building_name) == buildings.end()) {
            buildings[building_name] = Building(building_name, 0); // Oppretter en ny Building-instans med navn og 0 renholdspersonell
        }

        buildings[building_name].addRoom(Room(length, width));
    }

    input_file.close();

    std::vector<Building> result;
    for (auto& pair : buildings) {
        pair.second.calculateCleaningStaff();
        result.push_back(pair.second);
    }

    return result;
}

void Handler::writeOutputFiles(const std::vector<Building>& buildings) {
    for (const auto& building : buildings) {
        std::string output_filename = "output_" + building.getName() + ".txt";
        std::ofstream output_file(output_filename);
        if (!output_file.is_open()) {
            std::cerr << "Kunne ikke opprette outputfil: " << output_filename << std::endl;
            continue;
        }

        output_file << "Name: " << building.getName() << std::endl;
        output_file << "Total area: " << building.getTotalArea() << std::endl;
        output_file << "Amount of rooms: " << building.getRooms().size() << std::endl;
        output_file << "Needed cleaning staff: " << building.getCleaningStaff() << std::endl;
        output_file << "Rooms:" << std::endl;
        for (const auto& room : building.getRooms()) {
            output_file << "L: " << room.getLength() << ", W: " << room.getWidth() << std::endl;
        }

        output_file.close();
    }
}
