#ifndef ROOM_ACTIONS_H
#define ROOM_ACTIONS_H
#include "Room.h"

bool previewStatueMove(Room room, Position target);
bool placeStatue(Room& room, Position target);
bool statueIsAt(const Room& room, Position target);



#endif