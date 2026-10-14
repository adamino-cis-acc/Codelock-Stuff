#include "Room.h"
#include <string>

RoomObject::RoomObject(std::string objectId, Position start, std::string direction)
    : id(objectId), position(start), facing(direction) {}
std::string RoomObject::getID() const { return id; }
bool RoomObject::isAt(Position target) const {
    return position.x == target.x && position.y == target.y;
}
bool RoomObject::isFacing(std::string direction) const { return facing == direction; }
bool RoomObject::moveTo(Position target) {
    if (target.x < 0 || target.x > 4 || target.y < 0 || target.y > 4) return false;
    position = target;
    return true;
}
bool RoomObject::turnTo(std::string direction) {
    if (direction != "north" && direction != "east" &&
        direction != "south" && direction != "west") return false;
    facing = direction;
    return true;
}

Room::Room(std::string roomId, RoomObject firstObject, RoomObject secondObject)
    : id(roomId), first(firstObject), second(secondObject) {}
std::string Room::getId() const { return id; }
bool Room::moveObject(std::string objectId, Position target) {
    if (first.getID() == objectId) return first.moveTo(target);
    if (second.getID() == objectId) return second.moveTo(target);
    return false;
}
bool Room::turnObject(std::string objectId, std::string direction) {
    if (first.getID() == objectId) return first.turnTo(direction);
    if (second.getID() == objectId) return second.turnTo(direction);
    return false;
}
bool Room::objectIsAt(std::string objectId, Position target) const {
    if (first.getID() == objectId) return first.isAt(target);
    if (second.getID() == objectId) return second.isAt(target);
    return false;
}
bool Room::objectFaces(std::string objectId, std::string direction) const {
    if (first.getID() == objectId) return first.isFacing(direction);
    if (second.getID() == objectId) return second.isFacing(direction);
    return false;
}

