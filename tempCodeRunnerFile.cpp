#include <iostream>
using namespace std;

int main()
{

    cout << "hello cpp" << endl;
    int a;
    while (cin >> a && a != 0)
    {
        cout << a * a << endl;
    }