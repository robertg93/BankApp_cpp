#include "Saving.h"


Saving::Saving(std::string name, std::string sSN, double initDeposit): Account(name,sSN,initDeposit)
{
    accountNumber = accountNumber + "1";
    std::cout << "acc num: " << accountNumber << std::endl;
}

Saving::~Saving()
{
    //dtor
}
