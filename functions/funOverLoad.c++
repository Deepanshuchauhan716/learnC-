// Function Overloading ka matlab hai:

// Same naam ke multiple functions banana, lekin unke parameters different hone chahiye.

// C++ khud decide karta hai ki call ke according kaunsa function chalana hai.

#include<iostream>
using namespace std;

int add(int a,int b){
    cout<<a+b<<endl;
}
int add(int a,int b,int c){
    cout << a + b + c<< endl;
}
int main(){

    add(10,20);
    add(10,20,30);
}

// Dono ka naam add hai, lekin parameters different hain:
// Isliye C++ samajh jata hai ki kaunsa add() call karna hai.
// Function Overloading = Same function name + Different parameters.