#include "Account.h"

Account::Account(int AccountNumber,string HolderName,double Balance){
    this->AccountNumber = AccountNumber;
    this->HolderName = HolderName;
    this->Balance = Balance;
}

void Account::Display() const{

    cout<<endl;
    cout<<"-----------Account Details----------"<<endl;
    cout<<endl;
    cout << "Account Number : " <<AccountNumber<<endl;
    cout << "Holder Name : "<<HolderName<<endl;
    cout << "Balance : " <<Balance<<endl;
}
