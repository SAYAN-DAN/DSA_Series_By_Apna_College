#include <iostream>
using namespace std;

int decimal_binary(int n)
{
    int answer = 0;
    int multiten = 1;
    while (n != 0)
    {
        int remainder = n % 2;
        n = n / 2;
        answer = answer + (remainder * multiten);
        multiten = multiten * 10;
    }
    return answer;
}
int main()
{
    int n;
    cout << "Enter the Decimal number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        cout << "The Binary form of " << i << " is : " << decimal_binary(i) << endl;
    }
}

// n = 50
//  remainder = 50 % 2 = 0
//  n = 50 / 2 = 25
//  answer =