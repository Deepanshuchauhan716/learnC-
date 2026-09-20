// Constructor kya hota hai?

// Constructor ko simple language me samjho:

// Constructor ek special function hota hai jo object create hote hi automatically call hota hai aur object ko initial values dene ke liye use kiya jata hai.

// 1. Normal function vs Constructor

//     Normal function ko manually call karna padta hai :

//     s1.showData();

// Lekin constructor ko manually call nahi karna padta.

//     Student s1;

// Jaise hi s1 object bana → constructor automatically call ho gaya.

// Constructor ke 3 important rules hain:

// Constructor ka naam class ke naam jaisa hi hota hai.
// Constructor ka koi return type nahi hota, void bhi nahi.
// Object create hote hi constructor automatically call hota hai.

// #include <iostream>
// #include<iostream>
// using namespace std;

// class Student{
//     public:
//     string name;
//     int age;

//     Student(){
//         name = "Deepanshu";
//         age = 20;
//     }
// };

// int main() {
    
//     Student s1;
//     cout<<s1.name << endl;
//     cout<<s1.age << endl;
//     return 0;
// }

// maanlo  tumhe  1000 student ka data store krna hai to agr tum har ke ke liye alg class bnaoge to code bhut hi massy ho jaayega aur isliye use krte hai constructer 

#include <iostream>
#include<iostream>
using namespace std;

class CollegeStudent{

    public:
    string name;
    int age;
    int marks; // ye teeno cheez store krni hai agar har ek student ke liye alga object bnayenge to code massy hoga 

    CollegeStudent(string StudentName, int Studentage , int Studentmarks){ // constructer se hum code ko massy hone se rok skte hai
        name = StudentName;
        age = Studentage;
        marks = Studentmarks;
    }

    void Showdata(){
        cout<< "Name : " << name<<endl;
        cout<< "age : " << age<<endl;
        cout<< "marks : " << marks<<endl;
    }

};

int main() {
    
    CollegeStudent student1("Deepanshu",20,99);
    CollegeStudent student2("Rahul",23,45);
    CollegeStudent student3("Mohit",33,67); // jitni mrji object bnaao code jada massy bhi nhi hoga

    student1.Showdata();
    student2.Showdata();
    return 0;
}

// isliye constructer ka use hota hai agar yhi kaam hum bina constructer ke krte to code bhut massy ho jaata