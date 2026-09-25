// 1. Create a Student class with name and age. Create one object and print its data.---------------

// #include <iostream>
// #include<string>
// using namespace std;

// class Student{

//     public:
//     string name;
//     int age;
// };

// int main() {
    
//     Student s1;
//     s1.name = "Deepanshu";
//     s1.age = 45;

//     cout<<s1.name<<endl;
//     cout<<s1.age<<endl;

//     return 0;
// }

// ✅ complete

// 2. Create a Student class with: -------------
// name
// age
// marks
// Create 3 objects and display their data

// #include <iostream>
// #include<string>
// using namespace std;

// class Student{

//     public:
//     string name;
//     int age;
//     float marks;
// };

// int main() {
    
//     Student s1;
//     Student s2;
//     Student s3;

//     s1.name = "Deepanshu";
//     s1.age = 23;
//     s1.marks = 34.34;

//     s2.name = "Mohit";
//     s2.age = 34;
//     s2.marks = 12.23;

//     s3.name = "Krish";
//     s3.age = 67;
//     s3.marks = 78.89;

//     cout<<s1.name<<endl;
//     cout<<s1.age<<endl;
//     cout<<s1.marks<<endl;

//     cout<<s2.name<<endl;
//     cout<<s2.age<<endl;
//     cout<<s2.marks<<endl;

//     cout<<s3.name<<endl;
//     cout<<s3.age<<endl;
//     cout<<s3.marks<<endl;

//     return 0;
// }

// ✅ complete

// 3. Create a Rectangle class with length and width.Calculate and print its area.

// #include <iostream>
// using namespace std;

// class Reactangle{
//     public:
//         float width;
//         float length;

//     void Calculate(float length,float width){
//         int area = length * width;
//         cout<<area;
//     }
// };

// int main() {
    
//     Reactangle r1;
//     r1.Calculate(23,45);
//     return 0;
// }

// ✅ complete

// 4. Create a Car class with:
// brand
// model
// price
// Create an object and display all information

// #include <iostream>
// using namespace std;
// class Car{

//     public:
//         string brand;
//         string model;
//         long double price;

//     void Showdata(){
//         cout<<"Brand : "<<brand<<endl;
//         cout<<"Model : "<<model<<endl;
//         cout<<"Price : "<<price<<endl;
//     }

// };

// int main() {
    
//     Car c1;
//     c1.brand = "BMW";
//     c1.model = "M4";
//     c1.price = 60000000.457;

//     c1.Showdata();
//     return 0;
// }

// ✅ complete

// 5. Create a BankAccount class with balance. Create a function showBalance() to display
// the balance.

// #include <iostream>
// using namespace std;

// class BankAccount{

//     private:
//         long double Balance;

//     public:

//     void SetBalance(long double amount){
//         Balance = amount;
//     }
//     void ShowBalance(){
//         cout<<"Balance : "<<Balance;
//     }
// };

// int main() {
    
//     BankAccount b1;
//     b1.SetBalance(133435);
//     b1.ShowBalance();

//     return 0;
// }