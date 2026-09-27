// ======== STUDENT MANAGMENT SYSTEM ==========
// ========                          ==========

#include <iostream>
#include<string>
using namespace std;

class Student{
    public:
        string name;
        int age;
        string course;
        float marks;
};

int main() {
    
    int choice;

    cout << "==== Student managment System ===="<<endl;
    cout<< "1. Add student"<<endl;
    cout<< "2. Show student"<<endl;
    cout<< "3. exit"<<endl;

    cout<<"Enter choice : ";
    cin>>choice;

    if(choice == 1){
        
        Student s1;

        cout<<"Enter name : "<<endl;
        cin>>s1.name;

        cout<<"Enter age : "<<endl;
        cin>>s1.age;

        cout<<"Enter course : "<<endl;
        cin>>s1.course;

        cout<<"Enter marks : "<<endl;
        cin>>s1.marks;

        cout<<"Student added successfully"<<endl;
    }

    return 0;
}