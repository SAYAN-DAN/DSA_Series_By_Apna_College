#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int subarray()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}

int max_subarray_Brute_Force_Approach()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int maxsum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int currentsum = 0;
        for (int end = st; end < n; end++)
        {
            currentsum += arr[end];
            maxsum = max(currentsum, maxsum);
        }
    }

    cout << "Max Subarray is: " << maxsum << endl;
}

int max_subarray_Kadane_Algorithm()
{
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int current_sum = 0;
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        current_sum += arr[i];
        max_sum = max(current_sum, max_sum);
        if (current_sum < 0)
        {
            current_sum = 0;
        }
    }
    cout << "The Max SubArray is : " << max_sum;
}

int main()
{
    // subarray();
    // max_subarray_Brute_Force_Approach();
    max_subarray_Kadane_Algorithm();
} 