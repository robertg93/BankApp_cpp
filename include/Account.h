#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "IRate.h"
#include <string>
#include <iostream>



class Account
{
    private:

        std::string name;
        std::string sSN;
        double balance;
        double rate;
        std::string setAccountNumber();


    public:

        Account(std::string name, std::string sSN, double initDeposit);
        virtual ~Account();
        static int index;
        static bool srandFlag;

        std::string    randomThreeDigitNum();

    protected:
        std::string accountNumber;
    private:

};

#endif // ACCOUNT_H
