#include <iostream>
#include "Checking.h"
#include "Account.h"
#include "Saving.h"
#include "IRate.h"
#include "CSV.h"
#include <cstdlib>


using namespace std;

int main()
{

    // Read a csv filr then create new accounts based on that data
    //Checking chk1("pat","12345678",1500);
    //Saving sav1("pat1","87654321",1501);

   // chk1.showInfo();
    //cout << "***************************" << endl;
    //sav1.showInfo();
   // CSV ccc1;
    //ccc1.read();


    vector<Account*> accounts;


    vector<vector<string>> newAccountHolders = CSV::read();

    for (vector<string> accountHolder : newAccountHolders)
    {

        string name = accountHolder[0];
        string sSN = accountHolder[1];
        string accountType = accountHolder[2];
        double initDeposit = atof(accountHolder[3].c_str());
        if (accountType == "Savings")
        {
            accounts.push_back(new Saving(name,sSN,initDeposit));
        }
        else
        {
            accounts.push_back(new Checking(name,sSN,initDeposit));
        }

    }

    for (Account* acc : accounts)
    {

        acc->showInfo();
    }



    return 0;
}
