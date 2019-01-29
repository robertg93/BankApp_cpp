#include "Checking.h"


Checking::Checking(std::string name, std::string sSN, double initDeposit ): Account(name,sSN,initDeposit)
{
    accountNumber = accountNumber + "2";
    std::cout << "acc num: " << accountNumber << std::endl;

}
Checking::~Checking()
{
    //dtor
}
