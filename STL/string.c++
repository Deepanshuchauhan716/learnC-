// 🎯 String Kya Hai? (STL Ke Context Mein)
// Normal C mein string ek char array hoti thi (jaise char name[] = "Ram";). Usme size fix tha aur usko handle karna mushkil tha.

// C++ (STL) mein string ek Class hai. Iska matlab ye ek smart dabba hai jo apne aap bada hota hai, copy hota hai, aur isme bahut saare ready-made functions hote hain.

// 🟢 LEVEL 1: Basic Functions

#include <iostream>
#include<string>
using namespace std;

int main() {

    // basic function

    string s = "sunny";
    cout<<s.length()<<endl;
    cout<<s.capacity()<<endl;
    cout<<s.size()<<endl;
    cout<<s[0]<<endl;
    s.push_back('@');
    cout<<s.length()<<endl;

    // advance function
    // substr
    cout<<s.substr(0,3)<<endl; // 3 not include
    cout<<s.substr(1)<<endl;

    // find() kisi chracter word ki pposition dundna

    string h = "I love c++";
    cout<<h.find("love")<<endl;

    // to_String(number ko string me bdlna)
    int num = 1234;
    string store = to_string(num);
    cout << store<<endl;

    // stoi string ko number me convert
    string t = "12345";
    int inte = stoi(t);
    cout<<inte<<endl;

    // +=   string ko jodna
    string first = "Hello ";
    first += "World";
    cout << first<<endl; // hello world;

    // append()
    string y = "yes ";
    y.append("Deepanshu");
    cout << y<<endl;

    
    return 0;
}
