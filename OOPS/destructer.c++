// Destructor kya hota hai?

// Agar constructor object ke create hote hi automatically chalta hai, to destructor object ke destroy hone par automatically chalta hai.

// Simple definition

// Destructor ek special function hota hai jo object destroy hone par automatically call hota hai aur object ke resources ko clean-up karne ke liye use kiya jata hai.

// Constructor vs Destructor
//     Object create
//      ↓ Constructor call
//      ↓ Object use hota hai
//      ↓ Object destroy
//      ↓ Destructor call

// Destructor ki zarurat kyu?

// Maan lo object ne koi resource use kiya:

// memory
// file
// database connection
// network connection

// Object ka kaam khatam hone par un resources ko release/clean karna pad sakta hai.

// kisi bhi destructer ko bnane ke liye ~(tilde) is symbol ka use + class ka name use krte hai

#include <iostream>
using namespace std;

class table{
    public:
    
    table(){
        cout<<"Table booked"<<endl;
    }

    void eatFood(){
        cout<<"Customer is eating food..."<<endl;
    }

    ~table(){
        cout<<"Customer left,table available again"<<endl;
    }
};

int main() {
    {
        table t1;

        t1.eatFood();

        cout << "Customer is having dinner..." << endl;
    }

    cout << "Next customer can use the table." << endl;

    return 0;

}

// main()
//   ↓
// {
//     ↓ Table t1;
//     ↓ OBJECT CREATED
//   ↓ Constructor
//   ↓ "Table booked"
//   ↓ t1.eatFood()
//   ↓ "Customer is eating food..."
//   ↓ "Customer is having dinner..."
//   ↓
// }
// ↓ t1 ki lifetime khatam
//   ↓ Destructor automatically call
//   ↓ "Customer left, table available again"
//   ↓ "Next customer can use the table."


// This pointer ------------------------------------------------------------------------ 

// this pointer kya hota hai?

// this pointer current object ka address/reference rakhta hai.

// this = "jis object ne ye function call kiya hai, us object ko refer karo."

#include <iostream>
#include<string>
using namespace std;

class Student{
    public:
        string name;

        void PrintName(string name){
            this->name = name;
        }

        void showData(){
            cout<<this->name;
        }
        // agr tum main file me 
        //Student s1;
        //s1.setName("Deepanshu"); ese likhte ho Parameter bhi name hai aur member ka name bhi name hai
        //is case me use krte hai (this) ka 

        //this ka matlb hai current object yaani S1 to this->name ka mtlb hua S1.name = name 
        //use maanlo tumhare pass 100 object hai tumhe ek function use krke har object ke andr value daalni hai to use kr skte ho this ka s1.name krne ke jgh hum this ka use krenge
};
int main() {
    
    Student s1;
    Student s2;
    Student s3;

    s1.PrintName("Deepanshu");
    s2.PrintName("Mohit");
    s3.PrintName("Rahul");

    s1.showData();
    s2.showData();

    return 0;
}