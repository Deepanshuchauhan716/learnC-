// 🟢 LEVEL 1: Array Kya Hai? (Basic)

// 🎯 Definition:
// Array ek aisa dabba hai jo same type ke multiple data ko ek saath store karta hai. (Jaise 5 students ke marks).

// 🎯 C++ Mein Array Ke 2 Types Hote Hain:

// 1. Static Array (Purana C-style) ! Jiska size fix hota hai.

// 2. Dynamic Array !! Jiska size fix nahi hota.

// why need array

// if you want to store 100 student data so you need to create 100 variaable for store student

// like

#include <iostream>
using namespace std;

int main() {

    // if you want to store 100 student
    int student1 = 10;
    int student2 = 10;
    int student3 = 10;
    int student4 = 10;

    // this is so messy

    // so reduce for this complexity we create array

    int arr[10] = {10,20,30,40,50};

    // so basically the size array is decalre with create array together


    // 🟢 CHAPTER 2: Index Kya Hota Hai? (Sabse Important)

    // Array mein har khane ka ek address (number) hota hai, jise Index kehte hain.

    // index is start from 0

    int arr1[10] = {1,2,3,4,5};
    // index of 1 = 0
    // index of 2 = 1
    // index of 3 = 2
    // index of 4 = 3
    // index of 5 = 4

    // so you can access array element through it index value

    // 🟢 CHAPTER 3: Memory Mein Array Kaise Save Hota Hai?

    // array is store in continous memory

    // Bas! Ek hi line mein kaam ho gaya.
    return 0;
}
