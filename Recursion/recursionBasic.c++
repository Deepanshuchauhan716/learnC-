// Recursion = jab koi function khud ko hi call karta hai.

// Function → same function ko dobara call kare → dobara call kare → jab stopping condition aaye, ruk jaye.

// Recursion ke 2 main parts hote hain :

//     1. Base Condition 🛑 Ye batati hai ki recursion ko kab rukna hai.

//     2. Recursive Call 🔄 Ye function ko khud dobara call karta hai.

// Recursion = Function calling itself + Base condition to stop.

#include<iostream>
using namespace std;

void fun(int n){

    if(n == 0){
        return;
    }

    cout << n << endl;

    fun(n - 1); // call again and again
}
int main(){

    fun(5);

    return 0;
}