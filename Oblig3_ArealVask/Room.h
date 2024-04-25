#pragma once //headerfil, sørger for kun inkluderes 1 gang

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
