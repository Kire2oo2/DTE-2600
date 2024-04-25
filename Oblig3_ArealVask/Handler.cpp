#include "Handler.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>

//Leser informasjonen fra en inputfil og oppretter bygninger
std::vector<Building> Handler::readInputFile(const std::string& filename) {
    std::ifstream input_file(filename);
    if (!input_file.is_open()) {
        std::cerr << "Kunne ikke åpne inputfilen." << std::endl;
        return {};
    }

    //Oppretter en map for å lagre bygninger basert på navn
    std::map<std::string, Building> buildings;

    //Leser hver linje fra inputfilen
    std::string line;
    while (std::getline(input_file, line)) {
        std::istringstream iss(line);
        int length, width;
        std::string building_name;
        //Leser inn informasjonen om rom og bygningens navn fra hver linje
        if (!(iss >> length >> width >> building_name)) {
            std::cerr << "Ugyldig input: " << line << std::endl;
            continue;
        }

        //Oppretter en ny Building-instans hvis den ikke allerede finnes
        if (buildings.find(building_name) == buildings.end()) {
            buildings[building_name] = Building(building_name, 0);
        }

        //Legger til rommet i den aktuelle bygningen
        buildings[building_name].addRoom(Room(length, width));
    }

    input_file.close();

    //Beregner antall renholdspersonell for hver bygning og returnerer resultatet
    std::vector<Building> result;
    for (auto& pair : buildings) {
        pair.second.calculateCleaningStaff();
        result.push_back(pair.second);
    }

    return result;
}

//Skriver informasjon om bygningene til separate outputfiler
void Handler::writeOutputFiles(const std::vector<Building>& buildings) {
    //Itererer gjennom hver bygning
    for (const auto& building : buildings) {
        std::string output_filename = "output_" + building.getName() + ".txt";
        std::ofstream output_file(output_filename);
        //Sjekker om outputfilen kan opprettes
        if (!output_file.is_open()) {
            std::cerr << "Kunne ikke opprette outputfil: " << output_filename << std::endl;
            continue;
        }

        //Skriver informasjon om bygningen til outputfilen
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
