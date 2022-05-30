#include <iostream>
#include <windows.h>

using namespace std;


int main()
{
    SetConsoleOutputCP(1251);

    int num1, num2, num3, num4;

    cout << "Введіть перше число: ";
    cin >> num1;

    cout << "Введіть друге число: ";
    cin >> num2;

    cout << "Введіть третє число: ";
    cin >> num3;

    cout << "Введіть четверте число: ";
    cin >> num4;

    if (num1 != num2 && num1 != num3)
    {
        cout << endl << num1 * num1;
    }
    else if (num2 != num1 && num2 != num3)
    {
        cout << endl << num2 * num2;
    }
    else if (num3 != num1 && num3 != num2)
    {
        cout << endl << num3 * num3;
    }
    else if (num4 != num1 && num4 != num2)
    {
        cout << endl << num4 * num4;
    }
}

