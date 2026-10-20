#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"

using namespace std;

int main() {

    int choice;
    Account*Account[100];
    int count = 0;

    do{
        cout<<endl;
        cout<<"---------------------------------------"<<endl;
        cout<<"====== DEEPANSHU BANK SYSTEM ========="<<endl;
        cout<<"---------------------------------------"<<endl;
        cout<<endl;
        cout<<"1.-----CREATE NEW ACCOUNT-------"<<endl;
        cout<<"0.-----EXIT-----"<<endl;

        cout<<"Enter choice : ";
        cin>>choice;
        cout<<endl;

        if(choice == 1){
            int AccountNumber;
            string HolderName,type;
            double balance,extra;


            cout<<"---------Enter details---------"<<endl;
            cout<<"Enter account number : ";cin>>AccountNumber;
            cout<<"Enter HolderName : ";cin>>HolderName;
            cout<<"Enter Balance : ";cin>>balance;
            cout<<"Enter Account type(Savings/Currents) : ";cin>>type;

            if(type == "Savings"){
                cout<<"Enter Intrest Rate : ";cin>>extra;
                cout<<endl;

                Account[count] = new SavingsAccount(AccountNumber,HolderName,balance,extra);

            }

            // else if(type == "Current"){
            //     cout<<"Enter OverDraft Limit : ";cin>>extra;

            //     Account[count] = new CurrentAccount(AccountNumber,HolderName,balance,extra);

            // }
            else{
                cout<<"--Invalid Type--"<<endl;
                continue;
            }
            Account[count]->Display();
            count++;
        }

    }while(choice != 0);

    return 0;
}
