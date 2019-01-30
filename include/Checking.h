#ifndef CHECKING_H
#define CHECKING_H
#include "Account.h"
#include <string>
#include <iostream>

class Checking : public Account
{
    private:

        std::string debitCardNumber;
        int debitCardPin;
        void setDebitCard();


    public:
        Checking(std::string name, std::string sSN, double initDeposit);
        virtual ~Checking();

        void showInfo();
        void setRate() override;


    protected:


};

#endif // CHECKING_H

























