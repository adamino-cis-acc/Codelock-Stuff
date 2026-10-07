#ifndef CODE_LOCK_H
#define CODE_LOCK_H
#include <string>
class Codelock {
    private:
        std::string code;
        bool unlocked;
    public:
        Codelock(std::string secretCode);
        ~Codelock();
        bool isUnlocked() const;
        bool tryCode(std::string guess);

};

#endif