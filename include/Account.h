#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "IRate.h"
#include <string>
#include <iostream>
#include <cmath>


class Account: public IRate
{
    private:

        std::string name;
        std::string sSN;
        double balance;

        std::string setAccountNumber();


    public:

        Account(std::string name, std::string sSN, double initDeposit);
        virtual ~Account();
        static int index;
        static bool srandFlag;
        virtual void setRate()=0;

        //methods
        std::string    randomNum(int length);
        void showInfo();
        void showBalance();
        void withdraw(double amount);
        void deposit(double amount);
        void transfer(std::string toWhere, double amount);
        void compound();


    protected:
        std::string accountNumber;
        double rate;




};

#endif // ACCOUNT_H


























