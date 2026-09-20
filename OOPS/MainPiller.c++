// 1. Encapsulation
//         Simple meaning :

//     Data aur us data par kaam karne wale functions ko ek class ke andar rakhna +
//     data ko direct access se protect karna.

// Simple Explanation:

// Data ko generally private rakha ja sakta hai.
// Bahar se data ko directly access nahi kar sakte.
// Data ko access/change karne ke liye public functions use karte hain.
// Function ke andar validation/rules laga sakte hain.
// #include <iostream>

// #include<iostream>
// using namespace std;

// class Student{
//     private:
//     int pin = 0;

//     public:
//     void setPin(int p){
//         if(p >= 0 && p <= 1000){
//             pin = p;
//         }else{
//             cout<<"Invalid pin";
//         }
//     }

//     void ShowPin(){
//         cout<<pin;
//     }
// };

// int main() {
    
//     Student s1;
    // s1.pin = 1234;// show erorr
//     s1.setPin(1234);
//     s1.ShowPin();
//     return 0;
// }