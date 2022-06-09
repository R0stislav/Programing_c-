#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    srand((int)time(0));

    int N = 0, i, j;
    cout << "Введіть розмірність таблиці: " << endl;
    while (N < 1)
    {
        cout << "N = ";
        cin >> N;
    }

    int** B = new int* [N];
    cout << "Таблиця В:" << endl;
    for (i = 0; i < N; i++)
    {
        B[i] = new int[N];
        for (j = 0; j < N; j++)
        {
            B[i][j] = rand() % 100 - 50;
            cout << setw(5) << B[i][j];
        }
        cout << endl;
    }

    int* C = new int[N];
    cout << "Массив С:" << endl;
    for (j = 0; j < N; j++)
    {
        int sumCol = 0;
        for (i = 0; i < N; i++)
            sumCol += B[i][j];
        C[j] = sumCol;
        cout << C[j] << " ";
    }
    cout << endl;

    for (i = 0; i < N; i++)
        delete[] B[i];
    delete[] B;
    delete[] C;

    system("pause");
    return 0;
}
    
    


