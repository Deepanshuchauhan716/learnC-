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
        cout << "Holder name : " << holdername << endl;
        cout << "Account number : " << accountnumber << endl;
        cout << "Address : " << address << endl;
        cout << "Aadhar number : " << aadharnumber << endl;
        cout << "Balance : " << balance << endl;
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
        cout << "Savings Account create Successfully " << endl;
        cout << endl;
        cout << "----------------" << endl;
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
        cout << "Current Account create Successfully " << endl;
        cout << "----------------" << endl;
    }
};

int main()
{

    int count = 0;
    Account *accounts[100];
    cout << endl;
    cout << "-----------------------" << endl;
    cout << "DEEPANSHU BANK MANAGMENT SYSTEM" << endl;
    cout << "-----------------------" << endl;
    int choice;

    do
    {
        cout << "1.Create new account" << endl;
        cout << "2.Display account details" << endl;
        cout << "3.Diposit money" << endl;
        cout << "4.withdraw money" << endl;
        cout << "-----------------------" << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        if (choice == 1)
        {
            string name, addr, type;
            long int phone, aadhar;
            double bal = 0, extra;

            cout << "-----------------------" << endl;
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
                count++;
            }
            else if (type == "current")
            {

                cout << "Enter overDraft Limit : ";
                cin >> extra;
                accounts[count] = new CurrentAccount(name, addr, phone, aadhar, bal, extra);
                accounts[count]->display();
                count++;
            }
            else
            {
                cout << "please Enter Valid Account type" << endl;
            }
        }

    } while (choice != 0);

    return 0;
}
