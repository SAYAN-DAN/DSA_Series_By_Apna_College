#include <iostream>
using namespace std;
// EASY APPROACH---
int reverse_array_1(int arr[], int size)
{
    cout << "The Reverse Array is: " << endl;
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
}

// MEDIUM APPROACH---
int reverse_Array_2(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "The Reverse Array is: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int sum_product_array(int arr[], int size)
{
    int product = 1;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
        sum += arr[i];
    }
    cout << "The product of the array is: " << product << endl;
    cout << "The sum of the array is: " << sum << endl;
}

int swap_max_min_number(int arr[], int size)
{
    int maxterm = 0;
    int minterm = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[maxterm] < arr[i])
        {
            maxterm = i;
        }
        if (arr[minterm] > arr[i])
        {
            minterm = i;
        }
    }
    swap(arr[maxterm], arr[minterm]);
    cout << "Ater swapping maxterm and minterm the array is: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int unique_number(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << "The unique numberis: " << arr[i] << endl;
        }
    }
}

int main()
{
    int size;
    cout << "Enter the number of Array: " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the Arrays: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // reverse_array_1(arr, size);
    // reverse_Array_2(arr, size);
    // sum_product_array(arr, size);
    // swap_max_min_number(arr, size);
    unique_number(arr, size);
}




// problem no -5
// WAP TO PRINT THE INTERSECTION OF TWO ARRAYS

int intersection(int arr1[], int arr2[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout <<"The intersection elemenrs are: "<< arr1[i] << " ";
            }
        }
            cout << endl;
    }
}
// int main()
// {
//     cout << "Enter the number of element of the firrst Araay: ";
//     int size1;
//     cin >> size1;
//     int arr1[size1];
//     cout << "Enter the 1st Array elements: ";
//     for (int i = 0; i < size1; i++)
//     {
//         cin >> arr1[i];
//     }

//     cout << "Enter the number of element of the firrst Araay: ";
//     int size2;
//     cin >> size2;
//     int arr2[size2];
//     cout << "Enter the 1st Array elements: ";
//     for (int i = 0; i < size2; i++)
//     {
//         cin >> arr2[i];
//     }

//     intersection(arr1, arr2, size1, size2);
// }


