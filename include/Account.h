#ifndef ACCOUNT_H
#define ACCOUNT_H


class Account
{
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
