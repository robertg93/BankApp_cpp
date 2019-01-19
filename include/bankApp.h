#ifndef BANKAPP_H
#define BANKAPP_H


class bankApp
{
    public:
        bankApp();
        virtual ~bankApp();
        void withdraw();
        void deposit();
        void transfer();
        void showInfo();
    protected:

    private:
};

#endif // BANKAPP_H
