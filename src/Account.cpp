#include "Account.h"

#include <iostream>
#include <iomanip>


int Account::index = 10000;
bool Account::srandFlag = false;

Account::Account(std::string name, std::string sSN, double initDeposit)
{

    this->name=name;
    this->sSN=sSN;
    balance=initDeposit;
    index++;
    this->accountNumber = setAccountNumber();
}

Account::~Account()
{
    //dtor
}

std::string    Account::randomNum(int length)
{
    if (srandFlag == false )
    {
        srand(time(0));
       srandFlag = true;
    }

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
    const int randomThreeDigit = 3;
    return lastTwoOfSSN + std::to_string(uniqueID) + randomNum(randomThreeDigit);
}





void Account::showInfo()
{
    std::cout << "NAME: "<< std::setw(15) <<name <<
                "\nACCOUNT NUMBER: " << accountNumber <<
                "\nBALANCE: " << balance <<
                "\nRATE: " << rate << "%"<< std::endl;

}


void Account::withdraw(double amount)
{
     balance = balance + amount;
     std::cout << "withdrawing % " << amount << std::endl;
     showBalance();
}
void Account::deposit(double amount )
{
    balance = balance + amount;
    std::cout << "depostiting %" << amount << std::endl;
    showBalance();
}
void Account::transfer(std::string toWhere, double amount)
{
    balance = balance - amount;
    std::cout << "Transfering " << amount << "to " << toWhere << std::endl;
    showBalance();
}
void Account::showBalance()
{
    std::cout << "Your balance is : " << balance << std::endl;
}

void Account::compound()
{
    double accuredInterests = balance * (rate/100);
    balance = balance * accuredInterests;
     std::cout << "Your accured Interests is : " << accuredInterests << std::endl;
     showBalance();

}

















