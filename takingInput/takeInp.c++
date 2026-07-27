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


    // ##################### getline() ####################33

    // agar puri line leni ho input (space ke saath) to getline() use kro

    string name;
    getline(cin,name);


    //  ! ! !  ! ! ! ! !  !  cin vs getline ! ! ! ! ! ! ! ! ! ! !

    // ! PART 1 => cin ka full form hota hai chracter input hai ##############

    // ye c++ ka standred input object hota hai jo keyword se data lekr program me bhejta hai

    // cin >> variable; 

    // cin => input object
    // >> => extraction operator
    // variable => jisme value store hogi
    
    // example
    int age;
    cin >> age;

    // kon kon se data type ka input le skte hai

    int age1;
    cin >> age1;

    float salary;
    cin>>salary;

    double pi;
    cin >> pi;

    char grade;
    cin >> grade;

    bool pass;
    cin >> pass;

    // cin white space ko kaise handle krta hai
    // white space me aata hai

    // space ' '
    // tab \t
    // Newline \n

    // cin space par kyu ruk jaata hai

    string name;
    cin >> name;

    // input => deepanshu chauhan
    // result => deepanshu

    // kyoki cin phla whitespace milte hi input lena band kr deta hai

    // !!!!!!!!!!!!!!! part 2 => getline() ye poori line read krta hai

    // syantax getline(cin,name)

    // example
    
    string name;
    getline(cin,name);

    // input => deepanshu chauhan
    // ouput => deepanshu chauhan

    // getline space ko bhi read krta hai
    


}