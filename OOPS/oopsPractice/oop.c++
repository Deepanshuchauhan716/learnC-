// abstraction code

// #include <iostream>
// using namespace std;

// class Car{

//     public:
//         void Start(){
//             cout<<"Car started"<<endl;
//              engineIginit();
//              fuelInject();
//         }

//     void brak(){
//         cout<<"car stopped"<<endl;
//     }

//     private:
//         void engineIginit(){
//             cout<<"Engine iginite";
//         }

//         void fuelInject(){
//             cout<<"Fuel inject";
//         }
// };

// int main() {

//     Car c;
//     c.Start();
//     c.brak();

//     // c.fuelInject();
//     return 0;
// }


// inheritance

// #include <iostream>
// using namespace std;

// class student{

//     public:
//         string name;
//         string course;
//         int marks;
//         int roll_no;

// };

// class CollegeStudent: public student{

//     public:
//         string Fathername;
// };



// int main() {

//     CollegeStudent c1;
//     c1.name = "deepanshu";
//     cout<<c1.name;
//     return 0;
// }


// polymorphism
// #include <iostream>
// using namespace std;

// class Animal{

//     public:
//     virtual void Sound(){
//         cout<<"Animal Sound"<<endl;
//     };
// };

// class Dog : public Animal{
//     public:
//     void Sound() override{
//         cout<<"Bhow bhow"<<endl;
//     }
// };

// class Cat : public Animal{
//     public:
//     void Sound() override{
//         cout<<"Meow Meow"<<endl;
//     }
// };



// int main() {

//     Animal*a = new Dog();
//     a->Sound();
// }

// encapsulation


#include <iostream>
using namespace std;

class ATM{

    private:
        int balance  = 0;

    public:
    void withdraw(int amount){
        if(amount > 0 && amount < 100){
            balance = amount;
            cout<<"Balance added successfully"<<endl;
        }else{
            cout<<"Please enter Valid amount"<<endl;
        }
    }

    int display(){
        cout<<"Balance : "<<balance;
    }
};
int main() {

    ATM a1;
    a1.withdraw(78);
    a1.display();
    return 0;
}
