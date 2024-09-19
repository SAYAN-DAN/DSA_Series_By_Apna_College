#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> size;

    int arr[size]; // Declare array after getting size
    cout << "Enter the all element:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int minterm = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (minterm > arr[i])
        {
            minterm = arr[i];
        }
    }
    cout << "The minterm is : " << minterm;
    return 0;
}