// Static member ek aisa class member hota hai jo har object ke liye alag nahi hota, balki poori class ke liye ek common/shared member hota hai.

// Simple Explanation

// Normal member ki har object ke paas apni copy hoti hai:

// class Student {
// public:
//     string name;
// };
// s1 → name = Deepanshu
// s2 → name = Rahul

// Lekin static member ki sirf ek shared copy hoti hai:

// class Student {
// public:
//     static int totalStudents;
// };
//         Student class
//              ↓
//      totalStudents = 2
//           ↙     ↘
//         s1       s2

// Isliye agar s1 aur s2 dono objects hain, dono same totalStudents ko share karenge.

#include <iostream>
#include<string>
using namespace std;

class Student{
    public:
        string name;
        int age;
        int marks;
        static int TotalCount;

    Student(string name,int age,int marks){
        this->name = name;
        this->age = age;
        this->marks = marks;

        TotalCount++;
    }

    // Student::totalStudents
    //     Student::ka matlab :
    //     Student class ke totalStudents ko refer karo.

};
int Student::TotalCount = 0;

int main() {
    
    Student s1("Deepanshu",20,45);
    Student s2("Rahul",20,50);

    cout<<Student::TotalCount;
    return 0;
}