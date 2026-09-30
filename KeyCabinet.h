#ifndef KEY_CABINET_H
#define KEY_CABINET_H
#include "Codelock.h"
#include <string>
using namespace std;

class KeyCabinet{
    private:
        Codelock lock;
    public:
        KeyCabinet(string secretCode);
        bool attemptAccess(string guess);
        bool isOpen() const;
};

#endif