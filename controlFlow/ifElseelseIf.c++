#include<iostream>
using namespace std;
int main(){

    // control statement decide krta hai ki konsa code execute hoga aur konsa skip hoga

    // agar => baarish hui
    // to => chata le jaao

    // programming me bhi isi trh ke condition check hoti hai

    // * if statement * 
    // * if kya hai ?? => if tbhi code chalata hai jab condition true ho

    // ! syntax 

    // if(condition){
         //code
    // }

    // ***** example ******

    int age = 20;

    if(age >= 10){
        cout<<"Bigger than 10\n";
    }

    // agar condition false hui to kuch bhi print nhi hoga

    int age2 = 15;
    if(age2 >= 16){
        cout<< "Hello world"; // kuch bhi print nhi hoga
    }

    // * turthy and falsy value
    // if(1) true
    // if(100) true
    // if(-10) true
    // if(0) false

    // ********* Else statement ***************

    // * ab do possiblities hai
    // agar if ki condition false hui to konsa code chlega

    // if(condition){
    //     true
    // }else{
    //     flase
    // }

    // *example 

    int age3 = 16;

    if(age3 >= 18){
        cout << "Adult";
    }else{
        cout<< "Minor";
    } // agar if ki condition false hui to else ka code execute hoga

    // ********* Else if ***************

    // jab 2 se jaada condition check krni ho tab else if ka use hota hai

    // if(condition){
    //     code
    // }
    // else if(condition){
    //     code
    // }
    // else if(condition){
    //     code
    // }
    // else{

    // }

    // *** Example ****

    int marks = 82;

    if(marks >= 90){
        cout << "A";
    }
    else if(marks >= 75){
        cout << "B\n";
    }
    else if(marks >= 50){
        cout << "C";
    }
    else{
        cout<<"fail";
    } 

    // esi condition ke liye use hota hai else if

    // ****** ********** ********** ********* NESTED IF **** ********* ********** ********* ******** 

    // ek if ke andr dusra if

    int id = 1234;
    bool isStudent = true;

    if(id == 1234){

        if(isStudent){
            cout << "Entry";
        }
    }

    // ise khte hai nested if matalb ek condition ke andr dusri condition
    
}