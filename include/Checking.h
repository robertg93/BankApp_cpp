#ifndef CHECKING_H
#define CHECKING_H
#include "Account.h"
#include <string>
#include <iostream>

class Checking : Account
{

    // list properities
    int debitCardNumber;
    int debitCardPin;

    // c tor

    // list any methods
    public:
        Checking(std::string name, std::string sSN, double initDeposit);
        virtual ~Checking();

    protected:

    private:
};

#endif // CHECKING_H
