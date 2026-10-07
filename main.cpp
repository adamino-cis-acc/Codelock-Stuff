#include <iostream>
#include "Codelock.h"
#include "GameSession.h"
#include <string>

void openCopy(Codelock lock){
    lock.tryCode("0042");
}

void openActual(Codelock& lock){
    lock.tryCode("0042");
}

int main() {
    int score = 10;
    int& alias = score; // Create a reference to score
    alias += 5; // Modify score through the reference
    std::cout<< score << " " << alias <<  '\n'; // Output:
    int other = 40;
    alias = other;
    alias +=2 ;
    std::cout<< score << " " << alias << " " << other << '\n'; // Output:

    Codelock cabinetLock("0042");
    std::cout <<std::boolalpha;
    openCopy(cabinetLock);
    std::cout << cabinetLock.isUnlocked() << '\n'; // Output: false
    openActual(cabinetLock);
    std::cout << cabinetLock.isUnlocked() << '\n'; // Output: true 

    GameSession session1;
    std::cout<< session1.getActiveSessions() << std::endl;
}