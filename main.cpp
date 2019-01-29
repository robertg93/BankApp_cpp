#include <iostream>
#include "Checking.h"
#include "Account.h"
#include "Saving.h"
#include "IRate.h"


using namespace std;

int main()
{

    // Read a csv filr then create new accounts based on that data
    Checking chk1("pat","12345678",1500);
    Saving sav1("pat1","87654321",1501);

   // string str = "adfsfg";
    //cout << str[str.size()-1];



    return 0;
}
