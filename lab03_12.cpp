#include <iostream>
#include <windows.h>

using namespace std;



void main()
{
    SetConsoleOutputCP(1251);

    double a, b, c;

    cout << "Введіть перший показчик дійсного типу:";
    cin >> a;

    cout << "Введіть другий показчик дійсного типу:";
    cin >> b;

    cout << "Введіть третій показчик дійсного типу:";
    cin >> c;

    double* ptr_a,* ptr_b,* ptr_c;

    ptr_a = &a;
    ptr_b = &b;
    ptr_c = &c;

    ptr_a = (double*)malloc(a * sizeof(double));
    ptr_b = (double*)malloc(b * sizeof(double));
    ptr_c = (double*)malloc(c * sizeof(double));


    *(ptr_a + 5) = 14.675;
    *(ptr_b + 10) = 19.578;
    *(ptr_c + 15) = 24.923;

    ptr_a == ptr_c && ptr_c == ptr_a;

    cout <<  ptr_a << endl << ptr_b << endl << ptr_c;






    


}

