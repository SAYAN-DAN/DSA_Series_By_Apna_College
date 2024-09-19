// Binary_decimal_code.cpp
#include <iostream>
using namespace std;
#include <math.h>
int binary_decimal(int n)
{ // n = 1010
    int answer = 0;
    int i = 0;
    while (n != 0)
    {
        int remainder = n % 10; // n = 0
        n = n / 10;             // n = 101
        answer = answer + (remainder * pow(2, i));
        i++;
    }
    return answer;
}
int main()
{
    int n;
    cout << "Enter the Binary number: ";
    cin >> n;
    int final_answer = binary_decimal(n);
    cout << "The Decimal form of " << n << " is : " << final_answer << endl;
}
