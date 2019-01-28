#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "IRate.h"

class Account
{
    // list common properities for savings and checkings accounts

    // c tor to set base properities and initialize the account

    // list common methods

    public:
        Account();
        virtual ~Account();

        unsigned int GetCounter() { return m_Counter; }
        void SetCounter(unsigned int val) { m_Counter = val; }

    protected:

    private:
        unsigned int m_Counter;
};

#endif // ACCOUNT_H
