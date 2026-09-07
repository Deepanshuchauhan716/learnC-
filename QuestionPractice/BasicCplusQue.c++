// 1 => TAKE A INPUT FROM USER AND PRINT IT SQUARE

#include <iostream>
using namespace std;

void square(int input){

    cout<<" square of " << input <<" is " << input * input;
}

int main() {
    
    int input;
    cout<<"Enter a number : ";
    cin>>input;

    square(input);
    return 0;
}

// COMPLETE ✅

// 2 => FIND THE LARGEST OF TWO NUMBER

#include <iostream>
using namespace std;

void findBiggest(int num1, int num2){

    if(num1 > num2){
        cout<<num1<<" is biggest";
    }else{
        cout << num2 << " is biggest";
    }
}

int main() {
    
    int num1;
    cout<<"Enter first number : ";
    cin>>num1;

    int num2;
    cout<<"Enter second number : ";
    cin>>num2;

    findBiggest(num1,num2);
    return 0;
}

// COMPLETE ✅
