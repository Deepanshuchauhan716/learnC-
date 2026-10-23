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
        cout << "==========================" << endl;
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
        if (amount > 0 && amount < 200000)
        {
            balance += amount;
        }
        else
        {
            cout << "Enter Valid Amount range(0 - 200000)" << endl;
        }
    }

    void withDraw(int amount)
    {
        if (amount <= 0 || amount >= 200000)
        {
            cout << "Enter valid amount range (1-200000)" << endl;
        }
        else if (amount > balance)
        {
            cout << "Insufficient Balance! You only have Rs. " << balance << endl;
        }
        else if ((balance - amount) < 1000)
        {
            cout << "Minimum balance of Rs. 1000 must be maintained!" << endl;
        }
        else
        {
            balance = balance - amount;
            cout << "Rs " << amount << " Withdrawn Successfully!" << endl;
        }
    }

    void transfer(Account *receive, int amount)
    {

        if (balance >= amount && (balance - amount) >= 1000)
        {
            balance = balance - amount;

            receive->deposit(amount);
            cout << "Rs " << amount << " Transfer Successful!" << endl;
        }
        else
        {
            cout << "Transfer Failed! Insufficient Balance." << endl;
        }
    }

    int getBalance()
    {
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
        cout << "5.DISPLAY ALL ACCOUNT" << endl;
        cout << "6.TRANSFER MONEY OTHER ACCOUNT" << endl;
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
                cout << "================" << endl;

                count++;
            }
            else if (type == "current")
            {

                cout << "Enter overDraft Limit : ";
                cin >> extra;
                accounts[count] = new CurrentAccount(name, addr, phone, aadhar, bal, extra);
                accounts[count]->display();
                cout << "Current Account create Successfully " << endl;
                cout << "================" << endl;
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
                cout << endl;
                int searchAccNo, amount;
                bool found = false;

                cout << "Enter Account number : ";
                cin >> searchAccNo;
                for (int i = 0; i < count; i++)
                {
                    if (accounts[i]->getAccNumber() == searchAccNo)
                    {
                        found = true;
                        cout << "Enter Amount : ";
                        cin >> amount;
                        cout << endl;

                        accounts[i]->deposit(amount);
                        cout << "Rs " << amount << " Diposited SuccessFully" << endl;
                        cout << "Your cuurent Balance is : " << accounts[i]->getBalance() << endl;
                        cout << "-----------------------------" << endl;
                    }
                }
                if (found == false)
                {
                    cout << "Enter valid Account number for Amount deposit" << endl;
                }
            }
            break;
        }

        case 4:
        {
            if (count == 0)
            {
                cout << "No account created yet" << endl;
            }
            else
            {
                cout << "===== Enter details ======" << endl;
                cout << endl;

                int SearchAcc, amount;
                bool found = false;

                cout << "Enter Account Number : ";
                cin >> SearchAcc;

                for (int i = 0; i < count; i++)
                {
                    if (accounts[i]->getAccNumber() == SearchAcc)
                    {
                        found = true;

                        cout << "Enter amout For Withdraw : ";
                        cin >> amount;

                        accounts[i]->withDraw(amount);
                        cout << "Your cuurent Balance is : " << accounts[i]->getBalance() << endl;
                        cout << "-----------------------------" << endl;
                    }
                }

                if (found == false)
                {
                    cout << "Account not Fount !" << endl;
                }
            }
            break;
        }

        case 5:
        {
            if (count == 0)
            {
                cout << "No account created yet" << endl;
            }
            else
            {
                string SuperKey = "admin1234";
                string EnteredKey;

                cout << "Enter Super Key : ";
                cin >> EnteredKey;

                if (SuperKey == EnteredKey)
                {

                    cout << "Manager Login SuccessFully" << endl;
                    cout << endl;

                    cout << "==== All Account ====" << endl;

                    for (int i = 0; i < count; i++)
                    {
                        accounts[i]->display();
                        cout << endl;
                    }
                }
                else
                {
                    cout << "Access Denied! Incorrect Secret Key." << endl;
                }
            }
            break;
        }

        case 6:
        {
            if (count < 2)
            {
                cout << "For tranfer minimum account need 2" << endl;
            }
            else
            {
                int senderAcc, recevierAcc;
                double amount;
                Account *Sendptr = nullptr;
                Account *Receiver = nullptr;

                cout << "----Transfer Money-----" << endl;
                cout << "Enter account number (SENDER) : ";
                cin >> senderAcc;
                cout << "Enter account number (RECEVIER) : ";
                cin >> recevierAcc;

                if (senderAcc == recevierAcc)
                {
                    cout << "Same account number (Not valid)" << endl;
                    break;
                }

                // sender
                for (int i = 0; i < count; i++)
                {
                    if (accounts[i]->getAccNumber() == senderAcc)
                    {
                        Sendptr = accounts[i];
                        break;
                    }
                }

                // receiver
                for (int i = 0; i < count; i++)
                {
                    if (accounts[i]->getAccNumber() == recevierAcc)
                    {
                        Receiver = accounts[i];
                        break;
                    }
                }

                if (Sendptr != nullptr && Receiver != nullptr)
                {
                    cout << "Enter Amount : ";
                    cin >> amount;

                    Sendptr->transfer(Receiver, amount);
                }
                else {
                    cout << "No account found !" << endl;
                }
            }
            break;
        }
        }

    } while (choice != 0);

    return 0;
}
