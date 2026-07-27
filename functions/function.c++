// .*function code ka ek reuable block hota hai jo kisi specific kaam ko krta hai

// simple lang me 

// ek baar function bnaao fir jitni baar chao use kro

// function ki zrurat kyo pdti hai

// agar function na ho aur hume addition krna ho 2 number ka baar baar to hum kya krenge

// addtion ka code
// addtion ka code
// addtion ka code
// addtion ka code

// aur agar humare pass function ho

// add();
// add();
// add();

// har baar code likhne kii jrurat nhi pdegi 

// function ka structure

// returntype functionName (parameter){
//     body
// }

#include<iostream>
using namespace std;

int add(int a,int b){
    return a + b;
}

int sub(int a,int b){
        return a - b;
    }

int main(){
    cout << add(12,12) << endl;// ab jitni baar chao add function use kr skte hai

// * function ko call kaise krte hai * //
//  * jis function ko call krna hai uska naam aur paranthses like add() 

// function ko kitni bhi baar call kr skte hai

//  ************ FUNCTION NAMING RULE **************** //

// valid ✅

// print()
// add() 

// invalid❌

// 2add()
// my-function
// class()

// **** c++ mai function ke andr function nhi bna skte hai


//  ********* Function declaration & definition & calling ************************//

// function banane ke 3 step hote hai

// * 1 =>declaration

    // ~ function declaration compiler ko bta deta hai ki 
    // * function ka naam kya hai
    // * return type kya hai
    // * kitne parameter hai
    // * parameter ke data type kya hai

    // * lekin declaration me function ka code nhi hota hai
    // *example

    cout << sub(12,10);
    // int add(int a,int b) // declaration

   //* 2 =>definition

   //DEFINITION ME FUNCTION KA ACTUAL CODE LIKHA JAATA HAI
    // yahi function ki asli body hoti hai

    // **example***//

    // int sub(int a,int b){ //DECLARATION but main file ke andr function nhi bnta isliye upper bnaaya 
    //     return a - b;
    // } 

    //* 3 => function calling

    // function ko execute ke process ko function calling khte hai

    // **** syntax ***

    // functionName()  ese hi function ko call kiya jaata hai taaki uske andr ka code execute ho skte
    // multiple calls bhi kr skte hai
    // functionName() 
    // functionName() 
    // functionName() 
    // functionName() 

    // * * * * * * * * * * * * * PARAMETER AND ARGUMENT  * * * * * * * * * //

    // socho tum ek pizza order kr rhe ho aur tumne kha ki medium pizza to ye information tumhara ek argument hai

    // pizza(size) 
    // yaha size ek parameter hai

    // parameter = function ke andr bna hua placeholder

    // ** Parameter ** // 
    // function declaration me jo variable likhe jaate hai unhe parameter khte hai

    // void add(int a,int b)
    // * yaha a aur b parameter hai

    // ** argument ** //

    // jab function ko call krte hai aur actual values bhjete hai unhe argument khte hai

    // add(10,12) yaha 10 aur 12 arguments hai

    // ***************** return ******************//

    // return ek keyword hai jo function se value wapas krta hai aur function ko execution wahi khtm kr deta hai

    // function apna result return krke caller ko de deta hai

    //  ** Syntax ** // 

    // return value 
    // return 10
    // return a + b
    // return a - b // kuch bhi result return kra skte hai

    // jaise hi return hoga function immidialtly bnd ho jaayega

    // !!!!!!!!!!!!!!!  call by value and call by refrence !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

    // jab hum function ko argument dete hai to data pass krne ke do treeke hote hai

    // 1 call by value
    // call by value me original variable ki copy function ko di jaati hai function us copy par kaam krta hai original variable par nhi

    // example 

    // void change(int x) {
    //     x = 100;
    // }

    // int main(){
    //     int a = 10;
    //     change(a);
         
    //     cout << a;
    // }


    // 2 call by refrence

    // function ko original variable ka refrence milta hai

    // isliye function me jo change hoga original me bhi hoga

    // refrence banane ke liye & ka use krte hai


    // void change(int &x) 


    // kab kya use kre



}
