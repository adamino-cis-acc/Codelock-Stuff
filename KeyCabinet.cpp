#include <iostream>
#include "KeyCabinet.h"
#include <string>

KeyCabinet::KeyCabinet(string secretCode): lock(secretCode) {

}

bool KeyCabinet::attemptAccess(string guess) {
    return lock.tryCode(guess);
}

bool KeyCabinet::isOpen() const {
    return lock.isUnlocked();
}