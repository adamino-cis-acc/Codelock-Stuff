#ifndef GAME_SESSION_H
#define GAME_SESSION_H


class GameSession {
    private:
        static int activeSessions;
        int sessionID;
    public:
        GameSession();
        ~GameSession();
        static int getActiveSessions();
};

#endif