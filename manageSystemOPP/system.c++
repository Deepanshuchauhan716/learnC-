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
    
    int choice = 0; 
    
    Student s1[100];
    int count = 0;


  while(choice != 3){
    cout << "==== Student managment System ===="<<endl;
    cout<< "1. Add student"<<endl;
    cout<< "2. Show student"<<endl;
    cout<< "3. exit"<<endl;


    cout<<"Enter choice : ";
    cin>>choice; 

    if(choice == 1){
        
        cout<<"Enter name : ";
        cin>>s1[count].name;

        cout<<"Enter age : ";
        cin>>s1[count].age;

        cout<<"Enter course : ";
        cin>>s1[count].course;

        cout<<"Enter marks : ";
        cin>>s1[count].marks;

        count++;

        cout<<"Student added successfully"<<endl;
    }

    else if(choice == 2){
        if(count == 0){
            cout<<"No student added yet"<<endl;
        }else{
            for(int i = 0; i < count; i++){
                cout<<"\nStudent"<<i + 1<<endl;
                cout<<"Name : "<<s1[i].name<<endl;
                cout<<"age : "<<s1[i].age<<endl;
                cout<<"course : "<<s1[i].course<<endl;
                cout<<"marks : "<<s1[i].marks<<endl;
            }
        }
    }
 }

    return 0;
}