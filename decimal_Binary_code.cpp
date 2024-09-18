#include <iostream>
using namespace std;

int main()
{
    int n,answer=0;
    int multiten = 1;
    cin >> n;
    while (n != 0)
    {
        int remainder = n % 2;
        n = n / 2;
        answer = answer + (remainder * multiten);
        multiten = multiten * 10;
    }
    cout << answer;
}

// n = 50
//  remainder = 50 % 2 = 0
//  n = 50 / 2 = 25
//  answer = 