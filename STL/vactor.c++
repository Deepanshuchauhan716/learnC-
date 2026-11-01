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
    return 0;

    // vector<int> ka matlab hai "sirf numbers ka dabba". Aur memory mein ye apne aap ko double karta rehta hai (Capacity badhata hai) jab bhi naya element aata hai, taaki hume pehle se size batane ki zarurat na pade.

    
}
