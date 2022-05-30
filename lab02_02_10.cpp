#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);

    int X, Y, Z;

    cout << "Введіть X: ";
    cin >> X;

    cout << "Введіть Y: ";
    cin >> Y;

    cout << "Введіть Z: ";
    cin >> Z;

    if (Z > Y && Z > X)
    {
        cout << X << endl;
        cout << Y << endl;
        cout << Z << endl;
    }
    else if (X < Y && Z > X)
    {
        cout << X << endl;
        cout << Y << endl;
        cout << Z << endl;
    }
    else
    {
        cout << "X не є найменшим, Z не є найбільшим";
    }

    
}

