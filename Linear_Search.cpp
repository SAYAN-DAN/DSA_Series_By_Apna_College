// Linear_Search.cpp
#include <iostream>
using namespace std;

int Linear_Search(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> size;
    int target = 12;
    int arr[size]; // Declare array after getting size
    cout << "Enter the all element:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << Linear_Search(arr, size, target) << endl;
    return 0;
}