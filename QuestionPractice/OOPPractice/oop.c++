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

// ✅ complete

// 6. Create a Student class where name and marks are private. Use a public function to set
// and display them.

// #include <iostream>
// #include<string>
// using namespace std;

// class Student {
//     private:
//       string name;
//       float marks;

//     public:
//         void showInfo(string n,float m){
//             name = n;
//             marks = m;
//         }

//         void ShowInfo(){
//             cout<<"Name : "<<name<<endl;
//             cout<<"Marks : "<<marks<<endl;
//         }

// };
// int main() {
    
//     Student s1;
//     s1.showInfo("Deepanshu",45.56);
//     s1.ShowInfo();
//     return 0;
// }

// ✅ complete

// 7. Create a Student class with private marks.Write a setter that accepts marks only between 0 and 100.

// #include <iostream>
// using namespace std;

// class Student{
    
//     private:
//         int marks;

//     public:
//     void ShowData(int m){
        
//         if(m <= 100 && m >= 0){
//             marks = m;
           
//         }else{
//             cout<<"Enter marks between 0 to 100"<<endl;
//         }
//     }

//     void ShowData(){
//          cout<<"Marks : "<<marks;
//     }

// };

// int main() {
    
//     Student s1;
//     s1.ShowData(-20);
//     return 0;
// }

// ✅ complete

// 8. Create a Student class with a parameterized constructor that initializes name, age, and marks.

// #include <iostream>
// #include<string>
// using namespace std;

// class Student{
//     public:
//         string name;
//         int age;
//         int marks;

//     Student(string name,int age,int marks){
//         this->name = name;
//         this->age = age;
//         this->marks = marks;
//     }
// };

// int main() {

//     Student s1("Deepanshu",45,687);
//     return 0;
// }

// ✅ complete


// 9. Create an Employee class with a constructor that initializes:
// name
// salary
// department

// #include <iostream>
// #include<string>
// using namespace std;

// class Employee{

//     public:
//         string name;
//         float salary;
//         string dept;

//     Employee(string name,float salary,string dept){
//         this->name = name;
//         this->salary = salary;
//         this->dept = dept;
//     }
    
//     void show(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"salary : "<<salary<<endl;
//         cout<<"dept : "<<dept<<endl;
//     }
// };

// int main() {
    
//     Employee e1("Rahul",4535.56,"IT");
//     e1.show();
//     return 0;
// }

// ✅ complete

// 10. Create a class having a constructor that prints:
// Object Created
// Create 2 objects and observe how many times the constructor runs.

// #include <iostream>
// using namespace std;

// class Constructer{

//     public:
//     Constructer(){
//         cout<<"Object created"<<endl;
//     }
// };

// int main() {
    
//     Constructer C1;
//     Constructer C2;
//     return 0;
// }

// ✅ complete

// 11. Create a class with a destructor that prints:
// Object Destroyed
// Create an object and observe when the destructor runs.

// #include <iostream>
// #include<string>
// using namespace std;

// class destructer{

//     public:
//     destructer(){
//         cout<<"Object created"<<endl;
//     }
//     ~destructer(){
//         cout<<"Object destroyed"<<endl;
//     }
// };


// int main() {
    
//     destructer d1;
//     return 0;
// }

// ✅ complete

// 12. Use { } scope to demonstrate when a destructor is automatically called.

// #include <iostream>
// using namespace std;
// #include<string>

// class Scope{

//     public:

//     Scope(){
//         cout<<"Object created"<<endl;
//     }

//     ~Scope(){
//         cout<<"Object destroy"<<endl;
//     }
// };

// int main() {
//     {
//         Scope s1;

//         cout<<"File open"<<endl;

//         cout << "Edit file" << endl;

//         cout << "Convert into pdf" << endl;

//         cout << "File close" << endl;
//     }
//     return 0;
// }

// ✅ complete

// 13. Create a Student class where the constructor uses:
// this->name = name;
// this->age = age;

// #include <iostream>
// #include<string>
// using namespace std;

// class Student{
//     public:
//        string name;
//        int age;

//     Student(string name,int age){
//         this->name = name;
//         this->age = age;
//     }

//     void show(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"age : "<<age<<endl;
//     }

// };

// int main() {
    
//     Student s1("Deepanshu",20);
//     s1.show();
//     return 0;
// }

// ✅ complete

// 14. Create two Student objects and call the same setName() function for both. Understand
// how this refers to the current object.

// #include <iostream>
// #include<string>
// using namespace std;

// class Student{

//     public:
//         string name;
//         int age;
//         int marks;

//         void setData(string name,int age,int marks){
//             this->name = name;
//             this->age = age;
//             this->marks = marks;
//         }

//         void PrintData(){
//             cout<<"Name : "<<name<<endl;
//             cout<<"age : "<<age<<endl;
//             cout<<"marks : "<<marks<<endl;
//         }
// };

// int main() {
    
//     Student s1;
//     Student s2;

//     s1.setData("Deepanshu",20,456);
//     s2.setData("Mohit",40,343);
    
//     s1.PrintData();
//     s2.PrintData();

//     return 0;
// }

// ✅ complete

// 15. Create a Student class with:
// static int totalStudents;
// Increase totalStudents whenever a new object is created.

// #include <iostream>
// #include<string>
// using namespace std;

// class Student{
//     public:
//     string name;
//     int static TotalObject;

//     Student(string name){
//         this->name = name;
//         TotalObject++;
//     }
// };

// int Student::TotalObject = 0;

// int main() {
    
//     Student s1("Deepanshu");
//     Student s2("Rahul");
//     Student s3("Mohit");

//     cout<<Student::TotalObject;
//     return 0;
// }

// ✅ complete

// 18. Create a Person class containing name and age.Inherit a Student class from Person.

// #include <iostream>
// #include<string>
// using namespace std;

// class Person{
//     public:
//      string name;
//      int age;

//      void setData(string name,int age){
//         this->name = name;
//         this->age = age;
//      }

// };

// class Student: public Person{
//     public:
//     void showdata()
//     {
//         cout << "Name : " << name << endl;
//         cout << "age : " << age << endl;
//     }
// };

// int main() {
    
//     Student s1;
//     s1.name = "Deepanshu";
//     s1.age  = 23;

//     s1.showdata();
//     return 0;
// }

// ✅ complete

// 19. Create a parent class Person with a showName() function. Inherit Student and call the
// inherited function from the Student object.

// #include <iostream>
// using namespace std;
// class person{

//     public:
//     string name;
    
//     void showname(){
//         cout<<name;
//     }
// };

// class Student : public person{

// };
// int main() {
    
//     Student s1;
//     s1.name = "Anu";
//     s1.showname();
//     return 0;
// }
