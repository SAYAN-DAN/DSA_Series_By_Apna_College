#include <iostream>
#include <vector>
using namespace std;
int vector1()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<char> vec1 = {'A', 'B', 'C', 'D', 'E'};
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    cout << vec[3] << endl;
    cout << vec[4] << endl;

    cout << endl;

    cout << vec1[0] << endl;
    cout << vec1[1] << endl;
    cout << vec1[2] << endl;
    cout << vec1[3] << endl;
    cout << vec1[4] << endl;
}
int vector2()
{
    vector<int> vec(5, 1);
    for (int i : vec)
    {
        cout << i << endl;
    }
}

int vector3()
{
    vector<char> vec = {'A', 'B', 'C', 'D', 'E'};
    cout << "Size  = " << vec.size() << endl;
}

int vector4()
{
    vector<int> vec;
    cout << "Size is: " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout << "After push back Size is: " << vec.size() << endl;
    for (int i : vec)
    {
        cout << i << " ";
    }
}

int vector5()
{
    vector<int> vec;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.pop_back();
    for (int i : vec)
    {
        cout << i << " ";
    }
}

int vector6()
{
    vector<int> vec;
    vec.push_back(24);
    vec.push_back(44);
    vec.push_back(54);
    vec.push_back(64);
    vec.push_back(74);
    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(2);
}

int vector7()
{
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
}




int main()
{
    // vector1();
    // vector2();
    // vector3();
    // vector4();
    // vector5();
    // vector6();
    vector7();
}