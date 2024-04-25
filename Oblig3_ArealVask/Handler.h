#pragma once //headerfil, sørger for kun inkluderes 1 gang

#include <string>
#include <vector>
#include "Building.h"

class Handler {
public:
    // Leser inn bygninger fra en fil og returnerer dem som en vektor
    std::vector<Building> readInputFile(const std::string& filename);
    // Skriver bygninger til outputfiler
    void writeOutputFiles(const std::vector<Building>& buildings);
};

