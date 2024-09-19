#include <iostream>
using namespace std;

int main()
{
    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(long long int) << endl;

    unsigned int x = -10;
    unsigned int y = 10;
    cout << x << endl;
    cout << y << endl;
    signed int m = -10;
    signed int n = 10;
    cout << m << endl;
    cout << n << endl;
    return 0;
}