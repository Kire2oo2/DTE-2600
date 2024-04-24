#ifndef HANDLER_H
#define HANDLER_H

#include <string>
#include <vector>
#include "Building.h"

class Handler {
public:
    std::vector<Building> readInputFile(const std::string& filename);
    void writeOutputFiles(const std::vector<Building>& buildings);
};

#endif // HANDLER_H
