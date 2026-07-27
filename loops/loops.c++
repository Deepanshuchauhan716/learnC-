// * loop ek esa statement hai jo ek hi code ko baar baar execute krta hai jab tak condition true rhe

// * example tumhe 100 baar hello likhna hai 

#include<iostream>
using namespace std;
int main(){

    // * bina loop ke
    cout << "Hello";
    cout << "Hello";
    cout << "Hello";
    cout << "Hello"<<endl;
    // * 100 baar cout krna pdega

    // * With loop

    for(int i = 1; i <= 100 ; i++){
        cout<< "Hello "<< i <<endl;
    }

    // * c++ me kitne loops hote hai
    // for loop
    // while loop
    // do while loop

    //************************************** *  1 => for loop *****************************

    // * * * * * * synatax  * * * * * * * 
//    for(initialization; condition; update){
//      code
//    }

    // example

    for(int i = 0; i <= 5 ; i++){
        cout<< i << " ";
    }

    //************************************** *  2 => while loop *****************************
    
    // jab phle se nhi pta ho ki loop ko kitni baar chlaana hai tabh while loop ka use hota hai

    // **** syntax *****

    // while(condition){
        //code
    // }

    int j = 1;
    while(j <= 5){
        cout<< j << " ";
        j++;
    }

    //************************************** *  3 => do-while loop *****************************

    // * ye kam se kam ek baar zarur chlta hai fir condition check krta hai

    // do{
    //     code
    // }while(condition)

    // * * * * * * * * * example * * * * * * * * 

    int k = 1;
    do{
        cout << k << " ";
        k++;
    }while(k >= 5);
}