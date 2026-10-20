#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(int AccountNumber,string HolderName,double bal, double rate):Account(AccountNumber,HolderName,Balance)
{
this->InterestRate = rate;

}
void SavingsAccount::Display() const{
    Account::Display();

    cout << "Type       : Savings" << endl;
    cout << "Interest   : " << InterestRate << "%" << endl;
    cout << "---------------------------------\n";
    cout<<"Savings Account Created Successfully"<<endl;
}
