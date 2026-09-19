// Class kya hoti hai ?

// Class ek blueprint / template hoti hai jiske according hum objects create karte hain.

// Simple real - life example :

//     Socho "Student" ek category hai.

//     Ek student ke paas :

//     name
//     age
//     rollNo

//     Aur student kuch kaam kar sakta hai :

//     study()
//     display()

//     To hum in sabko ek class me define kar sakte hain:

#include <iostream>
#include<string>
using namespace std;

class Student{ // Student is class name 
    public: // access modifier
    string name;
    int age;
    int roll_number;

    void study(){
        cout<<"Student is studying";
    }
};

int main() {

    Student s1; // S1 is object name 
    s1.name = "Deepanshu";
    s1.age = 23;
    s1.roll_number = 259123;

    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.roll_number<<endl;

    s1.study();
    
    return 0;
}

// Object kya hota hai ?

//  Object class ka actual instance hota hai.

//  Class banane ke baad us class ke objects bana sakte hain
//  :

//  Student s1;
// Student s2;

// Yahan :

//     Student → Class

//         s1 → Object
//             s2 → Object

//                 Dono objects ke apne -
//     alag data ho sakte hain :

//     s1.name = "Rahul";
// s1.age = 20;

// s2.name = "Aman";
// s2.age = 21;

// Matlab same class se multiple objects ban sakte hain.