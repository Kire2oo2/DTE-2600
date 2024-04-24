#include "Room.h"

Room::Room(int l, int w) : length(l), width(w) {
    area = length * width;
}

int Room::getArea() const {
    return area;
}

int Room::getLength() const {
    return length;
}

int Room::getWidth() const {
    return width;
}
