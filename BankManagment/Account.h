#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
using namespace std;

class Account{
    protected:
        int AccountNumber;
        string HolderName;
        double Balance;

    public:
        Account(int AccountNumber,string HolderName,double Balance);

    virtual void Display() const;
};

#endif

