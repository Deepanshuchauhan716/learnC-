// container is just like a empty box where we store data

// 1  => Vector !!!!!! container

// vector is a dynamic array vector size is define before it declare it size increse with values

// basic code of vector

#include <iostream>
#include<vector> // header file of vector
#include<algorithm>
using namespace std;

int main() {

    vector<int> v1; // decalre vactor and it store only integer value this is empty vector
    vector<int> v2(5); // decalre size the size of vector v2 is 5
    vector<int> v3(3,20); // declare size and the size of vector is 3 and every box contain 20 value
    vector<int> v4 = {10,20,30,40}; // direct value assign to vactor

    // basic function of vector
    v1.push_back(20); // push_back is use for push the value to vector
    v1.push_back(30);
    v1.push_back(40);

    v1.pop_back(); // pop_back is use for remove value at last so remove 40 in vactor v1

    cout << v1.size() << endl; // size is stand for check the size of vector ans is 2

    if(v1.empty()){ // empty is stand for check the vector is empty or not
        cout << "Vector is empty"<<endl;
    }else{
        cout << "Vector is not empty"<<endl;
    }

    cout << v1[2]<<endl; // 40 [] is use for acees the value through index

    //v1.clear(); // clear is stand for clear the vactor delete all data

    // Advance function !!!!!!!!!!!!!!!!!

    cout << v1.front()<<endl; // stand for return the fornt value in whole vector ans is 20

    cout << v1.back()<<endl; // stand for return the last value in whole vector ans is 30

    v1.insert(v1.begin() + 1,99); // insert is stand for insert value specific position into vactor
    for (int x : v1){ // 20 99 30
        cout << x << " " ;
    }
    cout << endl;

    // begin is stand for return 0 index

    v1.erase(v1.begin() + 1);
    for (int y : v1){ // 20 30
        cout << y << " ";
    }

    cout << endl;

    // 2d Vector

    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6}
    };

    cout << matrix[1][2]<<endl;

    for (int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[i].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // pair vactor
    vector<pair<int,string>> vp;
        vp.push_back({101,"amit"});
        vp.push_back({102,"rahul"});
        cout << vp[0].second << endl;


    // Algorithm !!!!!!!!!!!!!!!!!!!!!!!!!!

    //sort is stand for sort the elemnts arrange in ascending order
    vector<int> v5= {12,21,11,34,22,56,23,33};
    sort(v5.begin(),v5.end());
    for(int x : v5){
        cout << x << " ";
    }
    cout << endl;
    reverse(v5.begin(),v5.end());
    for(int x : v5){
        cout << x << " ";
    }

    cout << endl;

    // max aur mininum find

    int max = *max_element(v5.begin(),v5.end());
    int min = *min_element(v5.begin(),v5.end());
    cout << max << endl;
    cout << min << endl;

    int count_ = count(v5.begin(),v5.end(),34);
    cout << count_ << endl;


    return 0;
}
