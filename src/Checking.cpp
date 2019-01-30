#include "Checking.h"


Checking::Checking(std::string name, std::string sSN, double initDeposit ): Account(name,sSN,initDeposit)
{
    accountNumber = accountNumber + "2";
    setDebitCard();
    setRate();

}
Checking::~Checking()
{
    //dtor
}
void Checking::setDebitCard()
{
    debitCardNumber = randomNum(13);
    debitCardPin = rand()%10000;

}
void Checking::showInfo()
{
    std::cout << "ACCOUNT TYPE: checking" << std::endl;
    Account::showInfo();
    std::cout << "Your checking account features: " << std::endl;
    std::cout << "Debit card naumber : " << debitCardNumber << std::endl;
    std::cout << "Debit card PIN: " << debitCardPin<< std::endl;
}

void Checking::setRate()
{
    rate = getBaseRate()* .15;
}

