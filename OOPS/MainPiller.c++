// 1. Encapsulation ---------------------------------------------------------
//         Simple meaning :

//     Data aur us data par kaam karne wale functions ko ek class ke andar rakhna +
//     data ko direct access se protect karna.

// Simple Explanation:

// Data ko generally private rakha ja sakta hai.
// Bahar se data ko directly access nahi kar sakte.
// Data ko access/change karne ke liye public functions use karte hain.
// Function ke andar validation/rules laga sakte hain.
// #include <iostream>

#include<iostream>
using namespace std;

class Student{
    private:
    int pin = 0;

    public:
    void setPin(int p){
        if(p >= 0 && p <= 1000){
            pin = p;
        }else{
            cout<<"Invalid pin";
        }
    }

    void ShowPin(){
        cout<<pin;
    }
};

int main() {
    
    Student s1;
    //s1.pin = 1234;// show erorr
    s1.setPin(1234);
    s1.ShowPin();
    return 0;
}

// Inheritance kya hai ? Simple meaning --------------------------------

//Inheritance ka matlab hai ek class ka doosri class ki properties aur functions ko inherit /
//use karna.

// yahan 2 classes hoti hain :

//     Parent Class
//      ↓ Child Class

//         Child class parent ki existing cheezein reuse kar sakti hai.

#include <iostream>
#include<string>
using namespace std;

class student{
     
    public:
    string name;
    int age;

    void study(){
        cout<<"Student studying";
    }
};

class CollegeStudent : public student{
    public:
    string college;
};

// Yahan:

// Student
//    ↓
// CollegeStudent

// CollegeStudent ne Student se inheritance li.

// Student
//  ├── name
//  ├── age
//  └── study()
//        ↓
//        ↓ inheritance
//        ↓ CollegeStudent
//  ├── name       ← inherited
//  ├── age        ← inherited
//  ├── study()    ← inherited
//  └── college    ← own

// To inheritance ki zarurat KYO hai?

// Code reuse ke liye.

// Agar multiple classes me common cheezein hain, to unhe baar-baar likhne ke bajay ek parent class me rakh sakte ho.


int main()
{

    CollegeStudent c1;

    c1.name = "Deepanshu"; // Student class se mila
    c1.age = 12;           // Student class se mila
    c1.study();            // Student class se mila

    c1.college = "Saitm"; // Collegestudent ka apna
    return 0;
}

// Polymorphism ka simple meaning ---------------------------------------------------------

//     Poly = Many
//         Morphism = Forms

//Matlab :

//Ek hi cheez ka different situations me different behaviour hona.

// Real-world example: Play button

// Maan lo tumhare phone me ek Play button hai.

// Tum:

// Music play karo → 🎵 song chalega
// Video play karo → 🎬 video chalega
// Game play karo → 🎮 game start hoga

// Button ka naam/action basically Play hi hai, lekin result/behaviour context ke according different hai.

//              PLAY
//                │
//        ┌───────┼────────┐
//        ↓       ↓        ↓
//      Music    Video    Game
//        ↓       ↓        ↓
//      Song     Video    Game starts

// Ye idea programming me polymorphism hai.


// C++ me kaise?

// Maan lo hamare paas different animals hain.

// Sabke paas ek common action hai:

// sound()

// Lekin har animal ka sound alag hai.

// Animal
//    │
//    ├── Dog    → sound() → Bark
//    ├── Cat    → sound() → Meow
//    └── Cow    → sound() → Moo

#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void Sound(){
        cout << "Animal makes sound";
    }
};

class dog : public Animal{
    public:
    void Sound() override   {
        cout<< "Dog barks"<<endl;
    }
};

class cat : public Animal{
    public:
    void Sound() override   {
        cout<< "cat meow"<<endl;
    }
};

int main() {

    dog d;
    cat c;

    d.Sound();
    c.Sound();

    
    return 0;
}

// Abstraction kya hota hai?---------------------------------------------------

// Abstraction ka matlab hai: unnecessary/internal details ko hide karna aur user ko sirf necessary information ya functionality dikhana.

// 🧠 Real-life example: ATM

// Jab tum ATM me:

// Card insert karte ho
// PIN enter karte ho
// Amount enter karte ho
// Cash nikalte ho

// Tumhe ye nahi dikhaya jaata ki andar ATM machine cash ko kaise verify kar rahi hai, bank server se kaise communicate kar rahi hai, balance kaise check ho raha hai etc.

// Tumhe sirf necessary interface milta hai:

// ATM
//  ↓
// PIN enter
//  ↓
// Amount enter
//  ↓
// Cash receive

// Andar ka complex process hidden hai → यही Abstraction hai.

