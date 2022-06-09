#include <iostream>
#include <windows.h>

using namespace std;

void foo()
{
    int a, b, c;

    cout << "Введіть a: ";
    cin >> a;

    cout << "Введіть b: ";
    cin >> b;

    cout << "Введіть c: ";
    cin >> c;

    int* ptr_A;
    int* ptr_B;
    int* ptr_C;

    ptr_A = &a;
    ptr_B = &b;
    ptr_C = &c;

    ptr_C = ptr_C + 3;

    ptr_A == ptr_C && ptr_C == ptr_A;

    cout << ptr_A << endl << ptr_B << endl << ptr_C;
}
int main()
{
    SetConsoleOutputCP(1251);

    foo();
    
    
}

