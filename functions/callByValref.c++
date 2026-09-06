// call by value and refrence kya hota hai

// 1 => call by value
// Call by Value mein function ko variable ki copy milti hai.

#include<iostream>
using namespace std;

int change(int x){ // call by value  Isliye function ke andar value change karne par original variable change nahi hota.
    x = 20;
}

int change2(int &y){ // call by refrence Call by Reference mein function ko original variable ka reference/address diya jata hai.
    y = 30;
}

int main(){

    int a = 10;
    change(a);
    cout<<a<<endl;

    int b = 20;
    change2(b);
    cout<<b<<endl;

}