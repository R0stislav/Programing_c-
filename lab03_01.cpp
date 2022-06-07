#include <iostream>
#include <windows.h>

using namespace std;


int main()
{
    SetConsoleOutputCP(1251);

    int a, h, s;

    cout << "введіть сторону а";
    cin >> a;

    cout << "Введіть висоту h";
    cin >> h;

    int* ptr_A;
    int* ptr_H;

    ptr_A = &a;
    ptr_H = &h;

    cout << 1 / 2 * (ptr_A * ptr_H) << endl;
    


    
}

