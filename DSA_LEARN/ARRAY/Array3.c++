
#include <iostream>
using namespace std;

int main()
{
    // traversal in operation

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // insertion in array
    int arr1[] = {10, 20, 30, 40, 50};
    int num = sizeof(arr1) / sizeof(arr1[0]);
    int value, index;

    cout << "Before insertion" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "Enter value : ";
    cin >> value;
    cout << "Enter index : ";
    cin >> index;

    for (int i = num; i > index; i--)
    {
        arr1[i + 1] = arr1[i];
    }
    arr1[index] = value;
    num++;

    cout << "After insertion" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // delete value
    int arr2[] = {12,24,36,48,60,72};
    int num2 = sizeof(arr2) / sizeof(arr[0]);

    cout << "Before deletion" << endl;
    for (int i = 0; i < num2; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    int index_val;

    cout << "Enter index : ";
    cin >> index_val;

    for(int i = index_val; i < num2 - 1; i++){
        arr2[i] = arr2[i + 1];
    }
    num2--;

    cout << "after deletion" << endl;
    for (int i = 0; i < num2; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // searching

    int newarr[] = {1,2,3,4,5,6,7,8};
    int target = 4;
    for(int i = 0; i < n; i++){
        if(newarr[i] == target){
            cout << i;
        }
    }
    cout << endl;

    // updating

    int array[] = {12,34,56,78,90};
    int num4 = sizeof(array) / sizeof(array[0]);
    int index4,value4;
    cout << "Enter index : ";
    cin >> index4;
    cout << "Enter value : ";
    cin >> value4;

    array[index4] = value4;
    for (int i = 0; i < num4; i++)
    {
        cout << array[i] << " "<<endl;
    }


    return 0;
}
