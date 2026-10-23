#include <iostream>
using namespace std;

class Account
{

protected:
    int accountnumber;
    string holdername;
    string address;
    long int phonenumber;
    long int aadharnumber;
    static int nextaccountnumber;
    double balance;

public:
    Account(string name, string addr, long int phone, long int aadhar, double bal)
    {
        this->accountnumber = nextaccountnumber;
        nextaccountnumber++;

        this->holdername = name;
        this->address = addr;
        this->phonenumber = phone;
        this->aadharnumber = aadhar;
        this->balance = bal;
    }

    virtual void display()
    {

        cout << "-----Account details----" << endl;
        cout<<"=========================="<<endl;
        cout << "Holder name : " << holdername << endl;
        cout << "Account number : " << accountnumber << endl;
        cout << "Address : " << address << endl;
        cout << "Aadhar number : " << aadharnumber << endl;
        cout << "Balance : " << balance << endl;
    }

    int getAccNumber()
    {
        return accountnumber;
    }

    void deposit(int amount)
    {
        if(amount > 0 && amount < 200000){
            balance += amount;
        }
        else{
            cout<<"Enter Valid Amount range(0 - 200000)"<<endl;
        }
    }

    int getBalance(){
        return balance;
    }
};

int Account::nextaccountnumber = 1001;

class SavingAccount : public Account
{
private:
    double intrestRate;

public:
    SavingAccount(string name, string addr, long int phone, long int aadhar, double bal, double rate) : Account(name, addr, phone, aadhar, bal)
    {
        this->intrestRate = rate;
    }

    void display()
    {
        Account::display();
        cout << "Account type : Savings" << endl;
        cout << "Intrest Rate : " << intrestRate << "%" << endl;
        cout << endl;
        cout << "==============" << endl;
    }
};

class CurrentAccount : public Account
{

private:
    double OverdraftLimit;

public:
    CurrentAccount(string name, string addr, long int phone, long int aadhar, double bal, double rate) : Account(name, addr, phone, aadhar, bal)
    {
        this->OverdraftLimit = rate;
    }
    void display()
    {
        Account::display();
        cout << "Account type : Current" << endl;
        cout << "OverDraft limit : " << OverdraftLimit << endl;
        cout << "================" << endl;
    }
};

int main()
{

    int count = 0;
    Account *accounts[100];
    cout << endl;
    cout << "=======================" << endl;
    cout << "DEEPANSHU BANK MANAGMENT SYSTEM" << endl;
    cout << "=======================" << endl;
    int choice;

    do
    {
        cout << "1.CREATE NEW ACCOUNT" << endl;
        cout << "2.DISPLAY ACCOUNT DETAILS" << endl;
        cout << "3.DEPOSIT MONEY" << endl;
        cout << "4.WITHDRAW MONEY" << endl;
        cout << "====================" << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {

        case 1:
        {
            string name, addr, type;
            long int phone, aadhar;
            double bal = 0, extra;

            cout << "======================" << endl;
            cout << "----Enter Details----" << endl;
            cout << "Enter your name : ";
            cin >> name;
            cout << "Enter your Address : ";
            cin >> addr;
            cout << "Enter you phone Number : ";
            cin >> phone;
            cout << "Enter your aadhar Number : ";
            cin >> aadhar;
            cout << "Enter balance : ";
            cin >> bal;
            cout << "Enter Bank Account Type(savings/current) : ";
            cin >> type;

            if (type == "savings")
            {

                cout << "Enter Interest Rate : ";
                cin >> extra;

                accounts[count] = new SavingAccount(name, addr, phone, aadhar, bal, extra);
                accounts[count]->display();
                cout << "Savings Account create Successfully " << endl;
                cout<<"================"<<endl;

                count++;
            }
            else if (type == "current")
            {

                cout << "Enter overDraft Limit : ";
                cin >> extra;
                accounts[count] = new CurrentAccount(name, addr, phone, aadhar, bal, extra);
                accounts[count]->display();
                cout << "Current Account create Successfully " << endl;
                cout<<"================";
                count++;
            }
            else
            {
                cout << "please Enter Valid Account type" << endl;
            }
            break;
        }

        case 2:
        {

            if (count == 0)
            {
                cout << "No account created yet" << endl;
            }
            else
            {
                int searchAccnumber;
                bool found = false;

                cout << "Enter account number to display Account Details : ";
                cin >> searchAccnumber;

                for (int i = 0; i < count; i++)
                {
                    if (accounts[i]->getAccNumber() == searchAccnumber)
                    {
                        accounts[i]->display();
                        found = true;
                        break;
                    }
                }
                if (found == false)
                {
                    cout << " Account not found ! Enter valid Account Number" << endl;
                }
            }
            break;
        }

        // Case 3 Start
        case 3:
        {
            if (count == 0)
            {
                cout << "No account created yet" << endl;
            }

            else
            {
                cout << "====== Enter details ======" << endl;
                cout<<endl;
                int searchAccNo,amount;
                bool found = false;

                cout << "Enter Account number : ";
                cin >> searchAccNo;
                for (int i = 0; i < count; i++)
                {
                    if (accounts[i]->getAccNumber() == searchAccNo)
                    {
                        found = true;
                        cout<<"Enter Amount : ";
                        cin>>amount;
                        cout<<endl;

                        accounts[i]->deposit(amount);
                        cout<<"Rs "<<amount<<" Diposited SuccessFully"<<endl;
                        cout<<"Your cuurent Balance is : "<<accounts[i]->getBalance() << endl;
                        cout<<"-----------------------------"<<endl;

                    }
                }
                if(found == false){
                    cout<<"Enter valid Account number for Amount deposit"<<endl;
                }
            }
            break;
        }
        }

    } while (choice != 0);

    return 0;
}
