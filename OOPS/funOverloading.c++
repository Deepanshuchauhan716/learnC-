// Function Overloading Kya Hota Hai? 🎯
// Ek line mein: Ek hi naam ke kai functions, par alag-alag parameters.

// 🔑 Simple Definition
// Function Overloading = Same function name, but different parameters (type ya count alag).

// Compiler parameters dekh ke decide karta hai kaunsa function chalega

#include <iostream>
using namespace std;

class Calculator{

    public:
        int add(int a,int b){
            return a + b;
        }
        double add(double a,double b,double c){
            return a + b + c;
        }
        int add(int a,int b,int c,int d){
            return a + b + c + d;
        }

};


int main() {

    Calculator c;
    cout<<c.add(2,3)<<endl;
    cout<<c.add(2.23,3.34,4.45)<<endl;
    cout<<c.add(2,3,4,5)<<endl;
    return 0;
}

