#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount:public Account{
    private:
        double InterestRate;

    public:
        SavingsAccount(int AccountNumber, string HolderName, double bal, double rate);

        void Display() const override;
};


#endif
