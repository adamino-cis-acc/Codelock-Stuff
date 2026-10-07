#include <iostream>
#include "GameSession.h"

int GameSession::activeSessions = 0;

GameSession::GameSession(): sessionID(activeSessions + 100)  {
    activeSessions++;
    std::cout << "GameSession " << sessionID << " has started." << std::endl;
}

GameSession::~GameSession() {
    std::cout << "GameSession " << sessionID << " has ended." << std::endl;
    activeSessions--;
}

int GameSession::getActiveSessions() {
    return activeSessions;
}