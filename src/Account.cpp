#include "Account.h"

#include <iostream>


int Account::index = 10000;
bool Account::srandFlag = false;

Account::Account(std::string name, std::string sSN, double initDeposit)
{

    this->name=name;
    this->sSN=sSN;
    balance=initDeposit;
    std::cout << "Name: " << this->name << "\n sSN: " << this->sSN << "\n balance: " << balance << std::endl;
    index++;
    this->accountNumber = setAccountNumber();



}

std::string    Account::randomThreeDigitNum()
{
    if (srandFlag == false )
    {
        srand(time(0));
       srandFlag = true;
    }
    const int length=3;
    std::string setPassword = "0123456789";
    std::string pass="";



    for (int i=0; i<length; i++)
    {
        int randNum =rand()%(setPassword.size() + 1);

        pass+=setPassword[randNum];

    }

    return pass;

}

std::string Account::setAccountNumber()
{
    std::string lastTwoOfSSN = this->sSN.substr(sSN.size()-1) + this->sSN.substr(sSN.size()-2,1);
    int uniqueID = index;
    return lastTwoOfSSN + std::to_string(uniqueID) + randomThreeDigitNum();
}



Account::~Account()
{
    //dtor
}
