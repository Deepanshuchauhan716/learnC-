#include<iostream>
#include<string>
using namespace std;
int main(){

    // jab program user se koi value leta hai use input khte hai

    // enter you name : 
    // enter your age : 
    // enter your marks :

    // all are these inputes

    // c++ me input lene ke liye cin >> ka use hota hai

    int age;

    cout << "Enter your age : ";
    cin >> age;

    cout<<age;

    //  multiple input together

    int a ,b;
    cin >> a >> b;

    // different data type ka input

    int age;
    cin >> age;

    float salary;
    cin>>salary;

    double pi;
    cin >> pi;

    char grade;
    cin >> grade;

    // ##################### getline() ####################33

    // agar puri line leni ho input (space ke saath) to getline() use kro

    string name;
    getline(cin,name);
}