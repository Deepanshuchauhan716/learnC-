// 1. 
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *

#include <iostream>
using namespace std;

int main() {
    
    for(int i = 1; i<=6; i++){
        for(int j = 1; j <= i; j++){
            cout<< "*";
        }
        cout<<endl;
    }
    return 0;
}

// * * * * * 
// * * * *
// * * *
// * * 
// *

#include <iostream>
using namespace std;

int main() {
    
    for(int i = 6; i >= 1; i--){
        for(int j = i; j >= 1; j--){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include <iostream>
using namespace std;

int main() {
    
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// 1 2 3  4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <iostream>
using namespace std;

int main() {
    for(int i = 6; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= 6; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}

// * * * * *
// *       *
// *       *
// *       *
// * * * * *

#include <iostream>
using namespace std;

int main() {
     for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= 6; j++){
            if(i == 1 || i == 6 || j == 1 || j == 6){
                cout<<" *";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
     }
    return 0;
}