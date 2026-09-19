// Access Modifier class ke andar data aur functions ke liye access control decide karte hain.

//     C++ me mainly 3 access modifiers hote hain :

//     public private protected

//     Inka simple meaning hai :

//     "Class ke members ko kaun access kar sakta hai aur kaha se access kar sakta hai?

// 1. public

//     public member ko class ke bahar bhi access kar sakte ho.

// 2. private

//     private member ko class ke bahar directly access nahi kar sakte.

// 3. protected

//     Ye thoda interesting hai.

//     protected member :

//     Same class ke andar → ✅ Derived /
//     child class me → ✅ N
//      normal outside code se → ❌

#include <iostream>
#include<string>
    using namespace std;

class Student{
    public:
    string name;
    int age;

    private:
    string course;
    int pin;

    public:
    void SetCourse(int p){
        pin = p;
        cout<<pin<<endl;
    }

    protected:
    int aadhar;
    int otp;
};

class CollegeStudent : public Student{ // this is called child class of object and tum yha otp aur aadhar ko access kr skte ho

    public:

    void showData(){
        aadhar = 1234567;
        otp = 3456;

        cout<< aadhar << " " << otp << endl;
    }

    // here you see you can acess easily otp and aadahr 
};


int main() {
    Student s1;

    s1.name = "Deepanshu";
    s1.age = 20; 
    
    // Student class
    //  ↓ public member
    //  ↓ Class ke bahar bhi access ✅

    // s1.course = "BCA";  Show error because course and pin is private not use this member outside of class
    // s1.pin = 345678;

    s1.SetCourse(2345); // access private in same class no show error

    // s1.aadhar;
    // s1.otp; // showing error because of protected . Protected not accessible outside of class but you use child class and access protected there

    cout<<s1.name<<endl;
    cout<<s1.age<<endl;

    CollegeStudent d1;
    d1.showData();

        return 0;
}