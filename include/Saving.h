#ifndef SAVING_H
#define SAVING_H
#include "Account.h"
#include <iostream>

class Saving: public Account
{
    // list properities
    int safetyDepositBoxID;
    int safetyDepositBoxKey;
    // c tor

    // list any methods
    public:
        Saving(std::string name, std::string sSN, double initDeposit);
        virtual ~Saving();

    protected:

    private:
};

#endif // SAVING_H
