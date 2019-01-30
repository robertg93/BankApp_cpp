#include "Saving.h"


Saving::Saving(std::string name, std::string sSN, double initDeposit): Account(name,sSN,initDeposit)
{
    accountNumber = accountNumber + "1";
    setSafetyDepositBox();
    setRate();

}

Saving::~Saving()
{
    //dtor
}

void Saving::setSafetyDepositBox()
{
    safetyDepositBoxID = rand()%1000;
    safetyDepositBoxKey = rand()%10000;
}

void Saving::showInfo()
{
    std::cout << "ACCOUNT TYPE: savings" << std::endl;
    Account::showInfo();
    std::cout << "Your savings account features: " << std::endl;
    std::cout << "Safety box ID: " << safetyDepositBoxID << std::endl;
    std::cout << "Safety box KEY: " << safetyDepositBoxKey << std::endl;
}

void Saving::setRate()
{
    rate = getBaseRate() - 0.25;
}
