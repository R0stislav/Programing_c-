#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);

    int N, x, y;
    cout << "введіть кількість рядків: ";
    cin >> N;

    int M;
    cout << "Введіть кількість ствпців: ";
    cin >> M;

    
    int** A = new int* [N];
    for (int i = 0; i < N; i++)
        A[i] = new int[M];

    
    cout << "Ввиведіть матрицю:\n ";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << "A[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> A[i][j];
        }
    }

    for (int j = 0; j < N; j++)
    {
        for (int k = 0; k < M; k++)
        {
            int aMin = 0, aMax = 0;
            for (int i = 0; i < M; i++)
            {
                if (A[j][k] > A[j][i] || A[j][k] == A[j][i]) { aMax++; x = j; y = k; }
                else { aMax--; }
            }
            if (aMax == M)
            {
                for (int i = 0; i < N; i++)
                {
                    if (A[x][y] < A[i][y] || A[x][y] == A[i][y]) { aMin++; }
                    else { aMin--; }
                }
                if (aMin == N) { cout << " A[" << x + 1 << "][" << y + 1 << "] = " << A[x][y] << "  точка\n"; }
            }
            else
            {
                for (int i = 0; i < M; i++)
                {
                    if (A[x][y] < A[x][i] || A[x][y] == A[x][i]) { aMin++; }
                    else { aMin--; }
                }
                if (aMin == M)
                {
                    for (int i = 0; i < N; i++)
                    {
                        if (A[x][y] > A[i][y] || A[x][y] == A[i][y]) { aMax++; }
                        else { aMax--; }
                    }
                    if (aMax == N) { cout << " A[" << x + 1 << "][" << y + 1 << "] = " << A[x][y] << "  точка\n"; }
                }
            }
        }
    }
    system("pause");
    return 0;
}

    


