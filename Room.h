#ifndef ROOM_H
#define ROOM_H
#include <string>

struct Position{int x; int y; };

class RoomObject {
    private:
        std::string id;
        Position position;
        std::string facing;
    public:
        RoomObject(std::string objectID, Position start, std::string direction);
        std::string getID() const;
        bool isAt(Position target) const;
        bool isFacing(std::string direction) const;
        bool moveTo(Position target);
        bool turnTo(std::string direction);
};

class Room {
    std::string id;
    RoomObject first;
    RoomObject second;
public:
    Room(std::string roomId, RoomObject firstObject, RoomObject secondObject);
    std::string getId() const;
    bool moveObject(std::string objectId, Position target);
    bool turnObject(std::string objectId, std::string direction);
    bool objectIsAt(std::string objectId, Position target) const;
    bool objectFaces(std::string objectId, std::string direction) const;
};


#endif