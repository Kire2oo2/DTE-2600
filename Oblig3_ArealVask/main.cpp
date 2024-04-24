#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <sstream>

class Room {
private:
    int length;
    int width;
    int area;

public:
    Room(int l, int w) : length(l), width(w) {
        area = length * width;
    }

    int getArea() const {
        return area;
    }

    int getLength() const {
        return length;
    }

    int getWidth() const {
        return width;
    }
};

class Building {
private:
    std::string name;
    int cleaning_staff;
    int total_area;
    std::vector<Room> rooms;

public:
    Building(std::string n) : name(n), cleaning_staff(0), total_area(0) {}

    Building() : cleaning_staff(0), total_area(0) {}

    void addRoom(const Room& room) {
        rooms.push_back(room);
        total_area += room.getArea();
    }

    void calculateCleaningStaff() {
        cleaning_staff = total_area / 15; // Beregn antall vaskere per påbegynte 15m^2
        if (total_area % 15 != 0) { // Hvis det er en del av et 15m^2, legg til en ekstra vasker
            cleaning_staff++;
        }
        cleaning_staff = std::max(cleaning_staff, static_cast<int>(rooms.size()) / 2); // Ta hensyn til minst 1 vasker per 2 rom
    }

    std::string getName() const {
        return name;
    }

    int getTotalArea() const {
        return total_area;
    }

    int getCleaningStaff() const {
        return cleaning_staff;
    }

    const std::vector<Room>& getRooms() const {
        return rooms;
    }
};

std::vector<Building> readInputFile(const std::string& filename) {
    std::ifstream input_file(filename);
    if (!input_file.is_open()) {
        std::cerr << "Kunne ikke åpne inputfilen." << std::endl;
        return {};
    }

    std::map<char, Building> buildings;

    std::string line;
    while (std::getline(input_file, line)) {
        std::istringstream iss(line);
        int length, width;
        char building_name;
        if (!(iss >> length >> width >> building_name)) {
            std::cerr << "Ugyldig input: " << line << std::endl;
            continue;
        }

        if (buildings.find(building_name) == buildings.end()) {
            buildings[building_name] = Building(std::string(1, building_name));
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

void writeOutputFiles(const std::vector<Building>& buildings) {
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

int main() {
    std::vector<Building> buildings = readInputFile("input.txt");
    writeOutputFiles(buildings);

    std::cout << "Outputfiler er opprettet." << std::endl;

    return 0;
}
