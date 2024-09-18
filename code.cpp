#include <iostream>
using namespace std;

int factnumber(int n);
int main()
{
    int n;
    cin >> n;
    factnumber(n);
    return 0;
}

int factnumber(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "The sum of number is : " << fact << endl;
}