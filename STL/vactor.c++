// 🟢 LEVEL 1: Vector Kya Hai aur Kaise Banayein?
// 🎯 Vector Kya Hai?
// Ye ek Dynamic Array hai.

// Purane array mein size fix thi (int arr[5]), Vector mein size apne aap badhti/ghatti hai.

// Jab hum naya element daalte hain, vector apne aap bada ho jata hai.

#include <iostream>
#include<vector> // vector header file
using namespace std;

int main() {

    // vector bnane ke 3 trike

    vector<int> v1; // empty vector(frquently use)
    cout << "Initial size : "<<v1.size()<<endl;
    cout << "Capacity : "<<v1.capacity()<<endl;

    v1.push_back(1);
    cout << "Initial size : "<<v1.size()<<", Capacity : "<<v1.capacity()<<endl;

    vector<int> v2(5); // 5 size ka array bna [sbme 0 value hai]
    vector<int> v3(5,10); // 5 size ka array bna sbme 10 assign hai

    // Direct values daal kar banana:
    vector<int> v4 = {10,20,30,40};

    // vector<int> ka matlab hai "sirf numbers ka dabba". Aur memory mein ye apne aap ko double karta rehta hai (Capacity badhata hai) jab bhi naya element aata hai, taaki hume pehle se size batane ki zarurat na pade.

    // level 2 => basic function on vector !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!11

    // 1 PushBack !! value ko array ke andr daalna
    v1.push_back(2);
    v1.push_back(2);
    v1.push_back(4);

    // 2 PopBack !! value ko vactore se delete krna
    v1.pop_back(); // last element delete

    // 3 size !! vector ka size check krna
    cout<< v1.size()<<endl; //3

    // 4 empty !! check krna ki vactor empty hai ya nhi
    if(v1.empty()){
        cout<< "Empty"<<endl;
    }else{
        cout<<"Not empty"<<endl;
    }

    // index ki help se value access krna
    cout << v1[0]<<endl;

    // 6 clear !! agar vector ke andr ke data ko clear krna haii
    v1.clear();



    // level 3 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

    // pre build Functions

    vector<int> fun = {10,20,30,40};
    // back and front
    cout<<fun.front()<<endl; //10
    cout<<fun.back()<<endl; //40

    // vlaue ko position n pe insert krna
    fun.insert(fun.begin() + 1,99);
    cout << fun[1]<<endl;

    // erse krna
    fun.erase(fun.begin() + 1);
    cout<<fun[1]<<endl;

    // 🔴 LEVEL 4: Vector aur Loops (Sabse Important)

    vector<int> s1 = {12,24,36,48,60};
    for (int i = 0; i < s1.size(); i++)
    {
       cout << s1[i]<<endl;
    }

    return 0;

}
