// Basic operation on array

#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Traversal operation on array
    // Array ke har element ko ek-ek karke dekhna (print karna ya check karna).

    vector<int> v1 = {1,2,3,4,5,6,7,8,9};

    for(int i = 0; i < v1.size(); i++){
        cout<< v1[i] << " ";
    }
    cout <<endl;

    // Access array element
    // Array ke kisi specific index par rakhi value ko nikalna.

    cout << v1[4]<<endl; //5

    // insert element at specific position
    v1.insert(v1.begin() + 0,24);
    cout << v1[0] << endl;

    // delete value
    v1.pop_back(); // delete last element
    v1.erase(v1.begin() + 3);


    // searching

    vector<int> v2 = {1,2,3,4,5,6,7,8,9};
    int target = 6;
    bool found = false;

    for (int i = 0; i < v2.size(); i++){
        if(v2[i] == target){
            cout << "Target found"<<i<<endl;
            found = true;
            break;
        }
    }
    if(found == false){
        cout << "Target not found"<<endl;
    }
    return 0;
}
