#include "RoomActions.h"

bool previewStatueMove(Room room, Position target){
    return room.moveObject("statue", target);
}

bool placeStatue(Room& room, Position target){
    return room.moveObject("statue", target);

}

bool statueIsAt(const Room& room, Position target){
    return room.objectIsAt("statue", target);
}