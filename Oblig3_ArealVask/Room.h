#ifndef ROOM_H
#define ROOM_H

class Room {
private:
    int length;
    int width;
    int area;

public:
    Room(int l, int w);

    int getArea() const;
    int getLength() const;
    int getWidth() const;
};

#endif // ROOM_H
