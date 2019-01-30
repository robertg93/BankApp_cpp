#ifndef SAVING_H
#define SAVING_H
#include "Account.h"
#include <iostream>

class Saving: public Account
{
    private:
        int safetyDepositBoxID;
        int safetyDepositBoxKey;

    public:
        Saving(std::string name, std::string sSN, double initDeposit);
        virtual ~Saving();

        void showInfo();
        void setSafetyDepositBox();
        void setRate() override;

    protected:


};

#endif // SAVING_H
