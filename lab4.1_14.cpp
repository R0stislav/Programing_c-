#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);

    int n, h;
    cout << "Введіть кількість дітей" << endl;
    cin >> n;
    cout << "Введіть висоту паркана" << endl;
    cin >> h;
    int* children = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Введіть ріст дитини" << i << ", хлопчиків з -" << endl;
        cin >> children[i];
    }
    int girls = 0, boys = 0;
    for (int i = 0; i < n; i++)
    {
        if (children[i]<0 && abs(children[i])>h)boys++;
        if (children[i] > 0 && children[i] + 10 > h)girls++;
    }
    cout << "Дівчат видно " << girls << ", хлопців " << boys << endl;
    system("pause");
    return 0;
}


    

    






