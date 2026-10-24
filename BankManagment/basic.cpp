// abstraction code

#include <iostream>
using namespace std;

class Car
{
private:
    void FuelEngine()
    {
        cout << "Fuel Full...."<<endl;
    }

    void MoveKey()
    {
        cout << "Key Move....."<<endl;
    }

public:
    void car(){
        cout<<"Car started"<<endl;
        FuelEngine();
        MoveKey();
    }
};

int main()
{

    Car c1;
    c1.car();
    // c1.FuelEngine();
    return 0;
}


// Inheritance

#include <iostream>
using namespace std;

class Parent{

    public:
    string GrandFather;
    string Father;
    string Mother;
    int Year;

    Parent(string gf,string f,string m,int y){
        this->GrandFather = gf;
        this->Father = f;
        this->Mother = m;
        this->Year = y;
    }

    virtual void display(){
        cout<<"Grandfather : "<<GrandFather<<endl;
        cout<<"Father : "<<Father<<endl;
        cout<<"Mother : "<<Mother<<endl;
        cout<<"Year : "<<Year<<endl;
    }

};

class Child : public Parent{

    public:
    string SelfName;
    int SelfAge;

    Child(string SelfN,int SelfA):Parent("Vijay chauhan","Jay Singh","Sushila Devi",2007){
        this->SelfName = SelfN;
        this->SelfAge = SelfA;
    }
    void display() override{
        Parent::display();

        cout<<"Self Name : "<<SelfName<<endl;
        cout<<"Self Age : "<<SelfAge<<endl;
    }
};


int main() {

    Child c1("Deepanshu",20);
    c1.display();
    return 0;
}


// polymorphism

#include <iostream>
using namespace std;

class Animal{

    public:
        virtual void Sound(){
            cout<<"Animal sound"<<endl;
        }
};

class Dog : public Animal{

    public:
        void Sound() override{
            cout<<"Bhow Bhow"<<endl;
        }
};

class Cat : public Animal{

    public:
        void Sound() override{
            cout<<"Meow Meow"<<endl;
        }
};



int main() {

    Animal * a1 = new Dog();
    Animal * a2 = new Cat();

    a1->Sound();
    a2->Sound();
    return 0;
}

// encapsulation

// data private + function se data insert krna aur access krna

#include <iostream>
using namespace std;

class Atm{

    private:
        int age;
        int CurrentAge;

    public:
        void setAge(int age){

            if(age > 18 && age < 100){
                CurrentAge = age;
                cout<<"Your age "<<CurrentAge<<"Set SuccessFully"<<endl;
            }
        }

        int GetAge(){
            return CurrentAge;
        }
};

int main() {

    Atm a1;
    a1.setAge(70);
    cout<<a1.GetAge();
    return 0;
}
