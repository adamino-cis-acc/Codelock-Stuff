#include "Codelock.h"
#include <iostream>

Codelock::Codelock(std::string secretCode): code(secretCode), unlocked(false) {

}

/*Codelock::~Codelock() {
    std::cout << "Codelock has been locked with a new code." << std::endl;
} */

bool Codelock::isUnlocked() const {
    return unlocked;
}

bool Codelock::tryCode(std::string guess) {
    if (guess == code && unlocked == false) {
        unlocked = true;
        return true;
    } else {
        return false;
    }
}